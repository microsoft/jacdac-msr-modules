#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x312305ea, "SWD MULTIPLEX v0.1");

void app_init_services() {
    bulb_service_init(PA_0);
    // ledpixel_init(JD_LED_PIXEL_LIGHT_TYPE_WS2812B_GRB, 8, 200, JD_LED_PIXEL_VARIANT_RING);
}
