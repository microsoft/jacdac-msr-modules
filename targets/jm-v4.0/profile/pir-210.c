#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x37447eb7, "JM-Motion (PIR) 210 v4.3");

static const motion_cfg_t cfg = {
    .pin = PIN_AN,
    .variant = 1,             // PIR
    .angle = 120,             // deg
    .max_distance = 12 << 16, // 12m
};

void app_init_services() {
    motion_init(&cfg);
}
