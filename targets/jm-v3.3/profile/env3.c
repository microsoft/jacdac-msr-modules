#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3616a277, "JM SHTC3 v3.3");

void app_init_services() {
    temperature_init(&temperature_shtc3);
    humidity_init(&humidity_shtc3);
}
