#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x312305ea, "SWD MULTIPLEX v0.1");

void app_init_services() {
    lightbulb_init(PA_0);
}
