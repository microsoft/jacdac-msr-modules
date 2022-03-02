#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3e6eebfb, "JM Thermocouple MAX6675 73 v3.8");

void app_init_services() {
    pin_set(PIN_RST, 1); // PWR en
    pin_setup_output(PIN_RST);
    temperature_init(&temperature_max6675);
}
