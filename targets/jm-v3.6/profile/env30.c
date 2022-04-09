#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x30df7db3, "JM SHT30 64 v3.6");

void app_init_services() {
    temperature_init(&temperature_sht30);
    humidity_init(&humidity_sht30);
}
