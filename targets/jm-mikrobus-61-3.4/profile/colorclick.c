#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x39c53dd6, "JM-Click Color v3.4");

void app_init_services() {
    color_init(&color_click);
}
