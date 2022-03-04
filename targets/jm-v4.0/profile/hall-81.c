#include "jdprofile.h"
#include "interfaces/jd_adc.h"
#include "jacdac/dist/c/switch.h"

FIRMWARE_IDENTIFIER(0x36db2b55, "JM-Hall (magnetic switch) 81 v4.0");

#define V_MID 0x8000
#define V_THR_LOW 3000
#define V_THR_HI 4000

static uint8_t is_active(uint32_t *state) {
    int v = adc_read_pin(PIN_AN) - V_MID;
    if (v < 0)
        v = -v;

    int thr = *state ? V_THR_LOW : V_THR_HI;
    *state = v > thr;
    return *state;
}

void app_init_services() {
    pin_set(PIN_RST, 1);
    pin_setup_output(PIN_RST);
    pin_setup_analog_input(PIN_AN);
    switch_init(is_active, JD_SWITCH_VARIANT_MAGNETIC);
}
