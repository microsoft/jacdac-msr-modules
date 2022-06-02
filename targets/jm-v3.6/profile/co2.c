#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x36607f18, "JM CO2/TVOC/Temp/Hum SGP30+SHT30 66 v3.7");

void app_process() {
    humidity_sht30.process();
    const env_reading_t *hum = humidity_sht30.get_reading();
    const env_reading_t *temp = temperature_sht30.get_reading();
    if (hum && temp)
        eco2_sgp30.set_temp_humidity(temp->value, hum->value);
}

void app_init_services() {
    eco2_init(&eco2_sgp30);
    tvoc_init(&tvoc_sgp30);

    temperature_init(&temperature_sht30);
    humidity_init(&humidity_sht30);
    humidity_sht30.init();
}
