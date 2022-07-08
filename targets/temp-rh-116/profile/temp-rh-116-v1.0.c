#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x30dd476a, "MSR Temp & RH 116 v1.0");

void app_init_services() {
    temperature_init(&temperature_shtc3);
    humidity_init(&humidity_shtc3);
}
