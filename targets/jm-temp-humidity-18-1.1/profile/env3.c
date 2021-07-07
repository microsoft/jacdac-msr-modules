#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3156cfd7, "JM TEMP HUMIDITY 18-1.1");

void app_init_services() {
    thermometer_init(shtc3_temperature);
    humidity_init(shtc3_humidity);
}
