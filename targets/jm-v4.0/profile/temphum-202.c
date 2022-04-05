#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x35217ba8, "JM-Temperature/Humidity 202 v4.1");

void app_init_services() {
    temperature_init(&temperature_sht30);
    humidity_init(&humidity_sht30);
}
