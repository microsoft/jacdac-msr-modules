#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3754d737, "JM UVI/Illuminance 205 v4.2");

void app_init_services() {
    illuminance_init(&illuminance_ltr390uv);
    uvindex_init(&uvindex_ltr390uv);
}
