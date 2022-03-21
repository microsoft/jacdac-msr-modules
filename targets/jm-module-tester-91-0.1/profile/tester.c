#include "jdprofile.h"
#include "jd_services.h"
#include "jacdac-c/jacdac/dist/c/analogmeasurement.h"
#include "jacdac-c/jacdac/dist/c/relay.h"

FIRMWARE_IDENTIFIER(0x3d82829b, "JM Module Tester v0.1");

// extern void i2c_init(void);

// extern int i2c_read_reg_buf(uint8_t addr, uint8_t reg, void *dst, unsigned len);

#define ADS1115_ADDR 0b1001000
#define PIN_LDO_EN      PA_6
#define PIN_DATA_EN     PA_4

// extern void dspi_init(bool slow, int cpol, int cpha);
// extern void dspi_tx(const void *data, uint32_t numbytes, cb_t doneHandler)

int32_t voltage_mapper(int32_t voltage) {
    float v = ((float) voltage)/1000.0;
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

    return (int32_t)wiper_value;
}

static void pwr_diff_hw_init(void);
static void* pwr_diff_hw_reading(void);
static void pwr_abs_hw_init(void);
static void* pwr_abs_hw_reading(void);
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

const analogmeasurement_params_t pwr_diff = {
    .adc = &ads1115,
    .i2c_address = ADS1115_ADDR,
    .measurement_name = "JD_PWR/JD_PWR_DUT",
    .measurement_type = JD_ANALOG_MEASUREMENT_ADCMEASUREMENT_TYPE_DIFFERENTIAL,
    .channel1 = 0,
    .channel2 = 1,
    .gain_mv = 100,
    .api = &pwr_diff_glue
};

const analogmeasurement_params_t pwr_abs = {
    .adc = &ads1115,
    .i2c_address = ADS1115_ADDR,
    .measurement_name = "JD_PWR",
    .measurement_type = JD_ANALOG_MEASUREMENT_ADCMEASUREMENT_TYPE_ABSOLUTE,
    .channel1 = 0,
    .channel2 = 255,
    .gain_mv = 7000,
    .api = &pwr_abs_glue
};

static void pwr_diff_hw_init(void) {
    pwr_diff.adc->init(pwr_diff.i2c_address);
    pwr_diff.adc->set_gain(pwr_diff.gain_mv);
}

static void* pwr_diff_hw_reading(void) {
    float f = pwr_diff.adc->read_differential(pwr_diff.channel1,
                                                             pwr_diff.channel2);
    static double reading = 0;
    reading = f;
    return &reading;
}

static void pwr_abs_hw_init(void) {
    pwr_abs.adc->init(pwr_abs.i2c_address);
    pwr_abs.adc->set_gain(pwr_abs.gain_mv);
}
static void *pwr_abs_hw_reading(void) {
    float f = pwr_abs.adc->read_absolute(pwr_abs.channel1);
    static double reading = 0;
    reading = f;
    return &reading;
}

static void adc_hw_process(void) {}

static void adc_hw_sleep(void) {}

const power_supply_params_t psu = {
    .potentiometer = &mcp41010,
    .voltage_to_wiper = voltage_mapper,
    .min_voltage = (1600 << 10), // 1.6V min
    .max_voltage = (5200 << 10), // 5.2V max
    .initial_voltage = (2000 << 10), // by default, the wiper is set to 127, giving 2V
    // voltage values are mapped between min_voltage_wiper_value and max_voltage_wiper_value
    .min_voltage_wiper_value = 255, 
    .max_voltage_wiper_value = 0,
    .enable_pin = PIN_LDO_EN,
    .enable_active_lo = true,
    .wiper_channel = 0
};

const relay_params_t data_en = {
    .drive_active_lo = false,
    .led_active_lo = false,
    .max_switching_current = 20,
    .pin_relay_drive = PIN_DATA_EN,
    .pin_relay_feedback = NO_PIN,
    .pin_relay_led = NO_PIN,
    .relay_variant = JD_RELAY_VARIANT_SOLID_STATE
};

static analogmeasurement_params_t analog_measurement_params;

void app_init_services() {

    // mcp41010.init();
    // mcp41010.set_wiper(0, 0);
    // ads1115.init(ADS1115_ADDR);
    // ads1115.set_gain(100);
    // pin_setup_output(LDO_EN);
    // pin_set(LDO_EN, 0);

    // pin_setup_output(DATA_EN);
    // pin_set(DATA_EN, 1);

    // target_wait_us(500000);

    // while(1) {
    //     volatile int PWR_DUT = ads1115.read_differential(0, 1);
    //     // volatile int PWR_DUT = ads1115.read_absolute(0);
    //     // volatile float trans = (float)PWR_DUT * 0.0625;
    //     // volatile float trans = (float)PWR_DUT * 0.1875;
    //     // while(1);
    //     target_wait_us(500000);
    //     // uint16_t DATA_DUT = ads1115.read_differential(2, 3);
    //     // target_wait_us(50);
    //     DMESG("PWR_DUT %d", PWR_DUT);
    //     // DMESG("DATA_DUT %d", DATA_DUT);
    // }

    powersupply_init(psu);
    analogmeasurement_init(pwr_diff);
    analogmeasurement_init(pwr_abs);
    relay_service_init(&data_en);

    // target_wait_us(10000);

    // i2c_init();
    // uint8_t d[] = {0, 0};
    // int res = i2c_read_reg_buf(ADS1115_ADDR, 0, &d, 2);
    // DMESG("ADS1115 WRITE RESULT %d", res);
    // pin_setup_output(SPI_CS);
    // pin_set(SPI_CS, 1);
    // pin_setup_output(LDO_EN);
    // pin_set(LDO_EN, 0);
    // // pin_setup_output(PIN_ASCK);
    // // pin_setup_output(PIN_AMOSI);
    // // pin_set(PIN_ASCK, 1);
    // // pin_set(PIN_AMOSI, 1);
    // // while(1) {
    // //     pin_set(PIN_ASCK, 0);
    // //     pin_set(PIN_AMOSI, 0);
    // //     pin_set(SPI_CS, 0);
    // //     target_wait_us(500000);
    // //     pin_set(PIN_ASCK, 1);
    // //     pin_set(PIN_AMOSI, 1);
    // //     pin_set(SPI_CS, 1);
    // //     target_wait_us(500000);
    // // }

    // dspi_init(true, 0, 0);

    

    // data[0] = CMD_WRITE_DATA | POT_CHAN_SEL_0;
    // data[1] = 0;

    // uint8_t v_array[] = {0, 127, 255};

    // while(1) {
    //     for (int i = 0; i < 3; i++) {
    //         data[1] = v_array[i];
    //         DMESG("TX with %d", data[0]);
    //         spi_tx(data, 2);
    //         target_wait_us(500000);
    //     }
    // }
    
}
