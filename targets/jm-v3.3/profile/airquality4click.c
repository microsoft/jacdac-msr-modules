#include "jdprofile.h"

// define to enable humidity compensation for eco2/tvoc readings
// #define SHTC3 1

FIRMWARE_IDENTIFIER(0x3b98440a, "JM-Click Airquality4 v3.3");

#ifdef SHTC3
void app_process() {
    humidity_shtc3.process();
    const env_reading_t *hum = humidity_shtc3.get_reading();
    const env_reading_t *temp = temperature_shtc3.get_reading();
    if (hum && temp)
        eco2_sgp30.set_temp_humidity(temp->value, hum->value);
}
#endif

void app_init_services() {
    eco2_init(&eco2_sgp30);
    tvoc_init(&tvoc_sgp30);

#ifdef SHTC3
    temperature_init(&temperature_shtc3);
    humidity_init(&humidity_shtc3);
    humidity_shtc3.init();
#endif
}
