#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x359c67b8, "JM TEMP HUMIDITY 18-1.0A");

void app_init_services() {
    temp_init(shtc3_temperature);
    humidity_init(shtc3_humidity);
}
