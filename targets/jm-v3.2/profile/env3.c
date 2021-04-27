#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x389761c7, "JM SHTC3 v3.2");

void app_init_services() {
    thermometer_init(shtc3_temperature);
    humidity_init(shtc3_humidity);
}
