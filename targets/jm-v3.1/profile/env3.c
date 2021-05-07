#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3f7e6e11, "JM SHTC3 v3.1");

void app_init_services() {
    thermometer_init(shtc3_temperature);
    humidity_init(shtc3_humidity);
}
