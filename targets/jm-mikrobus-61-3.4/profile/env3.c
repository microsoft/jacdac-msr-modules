#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x322f9caf, "JM SHTC3 v3.4");

void app_init_services() {
    temperature_init(&temperature_shtc3);
    humidity_init(&humidity_shtc3);
}
