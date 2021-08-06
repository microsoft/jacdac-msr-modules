#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3cdb189d, "JM-Click Color v3.2");

void app_init_services() {
    color_init(&color_click);
}
