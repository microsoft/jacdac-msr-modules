#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3f2ca0ed, "JM Rotary Ctrl + Btn v1.0A");

void app_init_services() {
    rotaryencoder_init(PA_7, PA_6, 24, 0);
    button_init(PA_0, 0, -1);
}
