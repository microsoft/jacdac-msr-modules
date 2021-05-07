#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3e5da6d0, "JM Btn v3.0");

void app_init_services() {
    button_init(PIN_X0, 0, -1);
}
