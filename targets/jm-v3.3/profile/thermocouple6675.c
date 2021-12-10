#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x31f2cad0, "JM Thermocouple MAX6675 v3.3");

void app_init_services() {
    pin_set(PIN_RST, 1); // PWR en
    pin_setup_output(PIN_RST);
    thermometer_init(&temperature_max6675);
}
