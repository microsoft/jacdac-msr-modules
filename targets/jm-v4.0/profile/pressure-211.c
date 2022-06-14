#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x30ac0373, "JM-Pressure 211 v4.3");

void app_init_services() {
    temperature_init(&temperature_dps310);
    barometer_init(&pressure_dps310);
}
