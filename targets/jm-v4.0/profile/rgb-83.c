#include "jdprofile.h"
#include "jacdac/dist/c/ledstrip.h"

FIRMWARE_IDENTIFIER(0x3e9e0de1, "JM RGB-8 83 v4.0");

void app_init_services() {
    ledstrip_init(JD_LED_STRIP_LIGHT_TYPE_WS2812B_GRB, 8, 200, JD_LED_STRIP_VARIANT_RING);
}
