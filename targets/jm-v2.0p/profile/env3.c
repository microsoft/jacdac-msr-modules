#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x377764af, "JM Env SHTC3 v2.0");

void app_init_services() {
    temperature_init(&temperature_shtc3);
    humidity_init(&humidity_shtc3);
}
