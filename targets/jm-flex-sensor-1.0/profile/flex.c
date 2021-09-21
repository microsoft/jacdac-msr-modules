#include "jdprofile.h"
#include "interfaces/jd_adc.h"

FIRMWARE_IDENTIFIER(0x321e3946, "JM Flex v1.0");

void app_init_services() {
    flex_init(NO_PIN, PA_12, NO_PIN);  // L, M, H
}
