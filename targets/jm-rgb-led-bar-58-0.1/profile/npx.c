#include "jdprofile.h"
#include "jacdac/dist/c/ledstrip.h"

FIRMWARE_IDENTIFIER(0x3e60b6fb, "JM RGB LED BAR 10 v0.1");

void app_init_services() {
    ledstrip_init(JD_LED_STRIP_LIGHT_TYPE_WS2812B_GRB, 10, 200, JD_LED_STRIP_VARIANT_STICK);
}
