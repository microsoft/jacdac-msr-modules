#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x359c67b8, "JM TEMP HUMIDITY 18-1.0A");

// const rgbled_params_t rgb_conf = {
//     {PIN_LED_R, 0xff, 0},
//     {PIN_LED_G, 0xff, 0},
//     {PIN_LED_B, 0xff, 0}
// };

void app_init_services() {
    // rgbled_init(&rgb_conf);
    // rgbled_set(0xffffff);
    temp_init(shtc3_temperature);
    humidity_init(shtc3_humidity);
}
