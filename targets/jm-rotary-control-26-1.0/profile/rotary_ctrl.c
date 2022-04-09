#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3f39d51b, "JM Rotary Ctrl + Btn v1.0");

void app_init_services() {
    rotaryencoder_init(PA_7, PA_6, 20, 0);
    button_init(PA_0, 0, -1);
}
