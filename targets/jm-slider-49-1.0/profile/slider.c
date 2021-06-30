#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3a78f364, "JM Slider 49 v1.0");

void app_init_services() {
    potentiometer_init(NO_PIN, PA_2, PA_3);  // L, M, H
}
