#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x32bd4ff1, "MSR Developer RGB 117 v1.0");

static const led_params_t params = {
    .pin_r = PA_8,
    .pin_g = PA_7,
    .pin_b = PB_8,
    .active_high = 0, // set to 0 for sinking current
    .led_count = 1, // how many LEDs there are
    .max_power = 20, // in mA
    .mult_r = 250, // brightness calibration
    .mult_g = 150,
    .mult_b = 42 
    
};

void app_init_services() {

    led_service_init(&params);
}
