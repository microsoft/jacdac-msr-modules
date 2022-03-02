#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x359c67b8, "JM TEMP HUMIDITY 18-1.0A");

void app_init_services() {
    temperature_init(&temperature_shtc3);
    humidity_init(&humidity_shtc3);
}
