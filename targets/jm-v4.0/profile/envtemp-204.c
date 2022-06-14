#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3d43050f, "JM-Temp/Hum (Env) 204 v4.2");

void app_init_services() {
    if (co2_scd40.is_present()) {
        // don't use the SHT30 - it seems much less accurate than the SCD40
        // temperature_init(&temperature_sht30);
        // humidity_init(&humidity_sht30);

        temperature_init(&temperature_scd40);
        humidity_init(&humidity_scd40);
        eco2_init(&co2_scd40);
    } else {
#if 0
        temperature_init(&temperature_sht30);
        humidity_init(&humidity_sht30);

        if (eco2_sgp30.is_present()) {
            has_sgp30 = 1;
            eco2_init(&eco2_sgp30);
            tvoc_init(&tvoc_sgp30);
        }
#else
        // the sgp30 gets quite warm, so the temp readings are not very good
        // we thus don't report them and disable humidity compensation
        if (eco2_sgp30.is_present()) {
            eco2_init(&eco2_sgp30);
            tvoc_init(&tvoc_sgp30);
        } else {
            temperature_init(&temperature_sht30);
            humidity_init(&humidity_sht30);
        }
#endif
    }
}
