#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x377764af, "JM Env SHTC3 v2.0");

void app_init_services() {
    temp_init(shtc3_temperature);
    humidity_init(shtc3_humidity);
}
