#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x37ef3c4a, "JM TVOC/Temp/Hum SGPC3+SHT30 84 v4.0");

static uint32_t hum_sample;

void app_process() {
    if (jd_should_sample(&hum_sample, 500000)) {
        humidity_sht30.process();
        const env_reading_t *hum = humidity_sht30.get_reading();
        const env_reading_t *temp = temperature_sht30.get_reading();
        if (hum && temp)
            eco2_sgp30.set_temp_humidity(temp->value, hum->value);
    }
}

void app_init_services() {
    eco2_init(&ethanol_sgpc3);
    tvoc_init(&tvoc_sgpc3);
    temperature_init(&temperature_sht30);
    humidity_init(&humidity_sht30);
    humidity_sht30.init();
}
