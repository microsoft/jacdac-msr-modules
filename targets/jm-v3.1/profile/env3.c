#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3f7e6e11, "JM SHTC3 v3.1");

void app_init_services() {
    board_init();

#if 0
    rgbled_set(0xffffff);
    target_wait_us(3000000);
    for (;;) {
        for (int i = 0; i < 3; ++i) {
            rgbled_set(i == 0 ? 0xf00000 : i == 1 ? 0x00f000 : 0x0000f0);
            target_wait_us(500000);
        }
    }
#endif

    temp_init(shtc3_temperature);
    humidity_init(shtc3_humidity);
}
