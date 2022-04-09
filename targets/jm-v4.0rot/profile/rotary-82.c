#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3e4f85bb, "JM Rotary + Btn 82 v4.0");

void app_init_services() {
    rotaryencoder_init(PA_8, PA_9, 30, ROTARY_ENC_FLAG_DENSE);
    button_init(PIN_INT, 0, -1);
}
