#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3df2659b, "JM Soil Temperature DS18B20 v3.3");

void app_init_services() {
    temperature_init(&temperature_ds18b20);
}
