#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3814950f, "JM Btn v3.3");

void app_init_services() {
    button_init(PIN_X0, 0, -1);
}
