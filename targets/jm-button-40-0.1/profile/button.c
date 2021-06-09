#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x34b659d1, "JM Button 40-0.1");

void app_init_services() {
    button_init(PA_13, 0, -1);
}
