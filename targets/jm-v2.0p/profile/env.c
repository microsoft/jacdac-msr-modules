#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x37469e2f, "JM Env TH02 v2.0");

void app_init_services() {
    temperature_init(&temperature_th02);
    humidity_init(&humidity_th02);
}
