#include "jdprofile.h"
#include "jacdac/dist/c/ledstrip.h"

FIRMWARE_IDENTIFIER(0x3865915a, "JM RGB-Ring 67 v3.7");

void app_init_services() {
    ledstrip_init(JD_LED_STRIP_LIGHT_TYPE_WS2812B_GRB, 8, 200, JD_LED_STRIP_VARIANT_RING);
}
