#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3f21bb82, "JM SHTC3 v3.0");

void app_init_services() {
    temp_init(shtc3_temperature);
    humidity_init(shtc3_humidity);
}
