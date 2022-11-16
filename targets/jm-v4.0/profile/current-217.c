#include "jdprofile.h"

#include "interfaces/jd_adc.h"

FIRMWARE_IDENTIFIER(0x365cff8e, "MSR Current 217 v4.5");

#define GAIN 88
#define PIN_GAIN PIN_100
#define R_SHUNT 0.25

#define VOLT 3.3

#define PIN_1000 PIN_TX_MOSI
#define PIN_100 PIN_RX_CS
#define PIN_10 PIN_MISO

#define PIN_SENSE PIN_AN
#define PIN_JDPWR_HALF PIN_RST

static void noop(void) {}

static void current_init(void) {
    pin_setup_analog_input(PIN_1000);
    pin_setup_analog_input(PIN_100);
    pin_setup_analog_input(PIN_10);
    pin_setup_output(PIN_GAIN);
    pin_set(PIN_GAIN, 0);

    pin_setup_analog_input(PIN_SENSE);
    pin_setup_analog_input(PIN_JDPWR_HALF);
}

static void *current_get(void) {
    static double amps;
    amps = VOLT * adc_read_pin(PIN_SENSE) / (0x10000 * GAIN * R_SHUNT);
    return &amps;
}

static void *voltage_get(void) {
    static double volt;
    volt = 2 * VOLT * adc_read_pin(PIN_JDPWR_HALF) / 0x10000;
    return &volt;
}

static const sensor_api_t adc_current = {
    .init = current_init,
    .process = noop,
    .sleep = noop,
    .get_reading = current_get,
};

static const sensor_api_t adc_voltage = {
    .init = noop,
    .process = noop,
    .sleep = noop,
    .get_reading = voltage_get,
};

static const dccurrentmeasurement_params_t config = {
    .measurement_name = "current",
    .api = &adc_current,
};

static const dcvoltagemeasurement_params_t vconfig = {
    .measurement_name = "voltage",
    .api = &adc_voltage,
};

void app_init_services() {
    dccurrentmeasurement_init(&config);
    dcvoltagemeasurement_init(&vconfig);
}
