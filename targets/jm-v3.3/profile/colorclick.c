#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x37494890, "JM-Click Color v3.3");

void app_init_services() {
    color_init(&color_click);
}
