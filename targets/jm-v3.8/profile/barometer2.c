#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x33d141ab, "JM Pressure MPL3115A2 72 v3.8");

void app_init_services() {
    barometer_init(&pressure_mpl3115a2);
    temperature_init(&temperature_mpl3115a2);
}
