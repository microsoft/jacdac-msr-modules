#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x37469e2f, "JM Env TH02 v2.0");

void app_init_services() {
    temp_init(th02_temperature);
    humidity_init(th02_humidity);
}
