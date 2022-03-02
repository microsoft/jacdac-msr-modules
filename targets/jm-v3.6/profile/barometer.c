#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3c54b121, "JM Pressure CPS122 72 v3.7");

void app_init_services() {
    barometer_init(&pressure_cps122);
    temperature_init(&temperature_cps122);
}
