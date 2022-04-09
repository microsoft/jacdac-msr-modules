#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3794bddb, "JM Motion PIR v3.3");

static const motion_cfg_t cfg = {
    .pin = PIN_RX_CS,
    .variant = 1,             // PIR
    .angle = 120,             // deg
    .max_distance = 12 << 16, // 12m
};

void app_init_services() {
    pin_set(PIN_RST, 1);
    pin_setup_output(PIN_RST);
    pin_set(PIN_SCK, 0);
    pin_setup_output(PIN_SCK);
    motion_init(&cfg);
}
