#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x39c45d27, "JM Thermocouple MAX31855 v3.3");

void app_init_services() {
    pin_set(PIN_RST, 1); // PWR en
    pin_setup_output(PIN_RST);
    temperature_init(&temperature_max31855);
}
