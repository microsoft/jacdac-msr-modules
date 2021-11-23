#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3ce4a36a, "JM UVI/Illuminance 65 v3.6");

void app_init_services() {
    illuminance_init(&illuminance_ltr390uv);
    uvindex_init(&uvindex_ltr390uv);
}
