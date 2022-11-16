#include "jdprofile.h"
#include "jd_services.h"
#include "jacdac-c/jacdac/dist/c/dcvoltagemeasurement.h"
#include "jacdac-c/jacdac/dist/c/relay.h"
#include "jacdac-c/jacdac/dist/c/led.h"

FIRMWARE_IDENTIFIER(0x3d82829b, "JM Module Tester v0.1");

// extern void i2c_init(void);

// extern int i2c_read_reg_buf(uint8_t addr, uint8_t reg, void *dst, unsigned len);

#define ADS1115_ADDR 0b1001000
#define PIN_LDO_EN PA_6
#define PIN_DATA_EN PA_4

// extern void dspi_init(bool slow, int cpol, int cpha);
// extern void dspi_tx(const void *data, uint32_t numbytes, cb_t doneHandler)

int32_t voltage_to_wiper_value(float voltage) {
    float v = voltage;
    float refv = 1.1834;
    float r12 = 1.3;
    float r11 = 4.3;

    float minr = 0.0;
    float maxr = 10.0;
    float max_wiper = 255.0;
    float min_wiper = 0.0;

    // should give a value between 0 and 10000
    float wresist = (r11 / ((v / refv) - 1)) - r12;

    // clip if not
    if (wresist < minr)
        wresist = minr;
    if (wresist > maxr)
        wresist = maxr;

    float wiper_value = (wresist - minr) * (max_wiper - min_wiper) / (maxr - minr) + min_wiper;

    // DMESG("%dmV -> %d", (int)(voltage*1000), (int)wiper_value );

    return (int32_t)wiper_value;
}

static void pwr_diff_hw_init(void);
static void *pwr_diff_hw_reading(void);
static void pwr_abs_hw_init(void);
static void *pwr_abs_hw_reading(void);
static void adc_hw_process(void);
static void adc_hw_sleep(void);

static sensor_api_t pwr_abs_glue = {.init = pwr_abs_hw_init,
                                    .get_reading = pwr_abs_hw_reading,
                                    .process = adc_hw_process,
                                    .sleep = adc_hw_sleep};

static sensor_api_t pwr_diff_glue = {.init = pwr_diff_hw_init,
                                     .get_reading = pwr_diff_hw_reading,
                                     .process = adc_hw_process,
                                     .sleep = adc_hw_sleep};

const dccurrentmeasurement_params_t pwr_diff = {.adc = &ads1115,
                                                .i2c_address = ADS1115_ADDR,
                                                .measurement_name = "JD_PWR/JD_PWR_DUT",
                                                .channel1 = 0,
                                                .channel2 = 1,
                                                .gain_mv = 100,
                                                .api = &pwr_diff_glue};

const dcvoltagemeasurement_params_t pwr_abs = {
    .adc = &ads1115,
    .i2c_address = ADS1115_ADDR,
    .measurement_name = "JD_PWR",
    .measurement_type = JD_DC_VOLTAGE_MEASUREMENT_VOLTAGE_MEASUREMENT_TYPE_ABSOLUTE,
    .channel1 = 0,
    .channel2 = 255,
    .gain_mv = 7000,
    .api = &pwr_abs_glue};

static void pwr_diff_hw_init(void) {
    pwr_diff.adc->init(pwr_diff.i2c_address);
}

static void *pwr_diff_hw_reading(void) {
    static double reading = 0;
    pwr_diff.adc->set_gain(pwr_diff.gain_mv);
    float f = pwr_diff.adc->read_differential(pwr_diff.channel1, pwr_diff.channel2);
    // 200 ohm current sense resistor.
    f /= 0.2;
    reading = f;
    return &reading;
}

static void pwr_abs_hw_init(void) {
    pwr_abs.adc->init(pwr_abs.i2c_address);
}
static void *pwr_abs_hw_reading(void) {
    pwr_abs.adc->set_gain(pwr_abs.gain_mv);
    float f = pwr_abs.adc->read_absolute(pwr_abs.channel1);
    static double reading = 0;
    reading = f;
    return &reading;
}

static void adc_hw_process(void) {}

static void adc_hw_sleep(void) {}

const power_supply_params_t psu = {.potentiometer = &mcp41010,
                                   .voltage_to_wiper = voltage_to_wiper_value,
                                   .min_voltage = 1.6, // 1.6V min
                                   .max_voltage = 5.2, // 5.2V max
                                   .initial_voltage = 4.0,
                                   .enable_pin = PIN_LDO_EN,
                                   .enable_active_lo = true,
                                   .wiper_channel = 0};

const relay_params_t data_en = {.drive_active_lo = false,
                                .led_active_lo = false,
                                .max_switching_current = 20,
                                .pin_relay_drive = PIN_DATA_EN,
                                .pin_relay_feedback = NO_PIN,
                                .pin_relay_led = NO_PIN,
                                .relay_variant = JD_RELAY_VARIANT_SOLID_STATE,
                                .initial_state = true};

#define PIN_LED_R PA_8
#define PIN_LED_G PA_7
#define PIN_LED_B PB_8
#define LED_R_MULT 250
#define LED_G_MULT 150
#define LED_B_MULT 42
#define RGB_LED_PERIOD 600

const led_params_t test_status = {
    .active_high = false,
    .pin_b = PIN_LED_B,
    .pin_g = PIN_LED_G,
    .pin_r = PIN_LED_R,
    .mult_b = LED_B_MULT,
    .mult_g = LED_G_MULT,
    .mult_r = LED_R_MULT,
    .led_count = 1,
    .variant = JD_LED_VARIANT_STRIP,
    .pwm_period = RGB_LED_PERIOD,
    .max_power = 60,
    .wave_length = 0,
};

void app_init_services() {
    powersupply_init(psu);
    dccurrentmeasurement_init(&pwr_diff);
    dcvoltagemeasurement_init(&pwr_abs);
    relay_service_init(&data_en);
    led_service_init(&test_status);
}
