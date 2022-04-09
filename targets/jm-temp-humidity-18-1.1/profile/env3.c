#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3156cfd7, "JM TEMP HUMIDITY 18-1.1");

void app_init_services() {
    temperature_init(&temperature_shtc3);
    humidity_init(&humidity_shtc3);
}
