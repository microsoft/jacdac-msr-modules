#include "jdprofile.h"
#include "jacdac/dist/c/magneticfieldlevel.h"

FIRMWARE_IDENTIFIER(0x36db2b55, "JM-Hall (magnetic switch) 81 v4.0");

static const magneticfieldlevel_cfg_t cfg = {
    .pin = PIN_AN,
    .variant = JD_MAGNETIC_FIELD_LEVEL_VARIANT_ANALOG_NS,
    .inverted = 1,
    .offset = 0,
    .thr_south_on = -4000,
    .thr_south_off = -3000,
    .thr_north_off = 3000,
    .thr_north_on = 4000,
};

void app_init_services() {
    pin_set(PIN_RST, 1);
    pin_setup_output(PIN_RST);
    magneticfieldlevel_init(&cfg);
}
