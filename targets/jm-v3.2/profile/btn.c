#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x33da2759, "JM Btn v3.2");

void app_init_services() {
    button_init(PIN_X0, 0, -1);
}
