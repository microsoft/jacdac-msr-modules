#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3c1974e8, "JM-CO2 209 v4.3");

void app_init_services() {
    temperature_init(&temperature_scd40);
    humidity_init(&humidity_scd40);
    eco2_init(&co2_scd40);
}
