#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3f3127a7, "JM Motion PIR 74 v3.8");

static const motion_cfg_t cfg = {
    .pin = PIN_AN,
    .variant = 1,             // PIR
    .angle = 120,             // deg
    .max_distance = 12 << 16, // 12m
};

void app_init_services() {
    motion_init(&cfg);
}
