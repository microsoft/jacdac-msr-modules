#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3f171e7d, "JM Soil Temperature v3.7");

#define PIN1 PIN_RX_CS // VCC
#define PIN2 PIN_TX_MOSI // 1-W
#define PIN3 PIN_AN // GND

void app_init_services() {
    pin_set(PIN1, 1);
    pin_set(PIN3, 0);
    pin_setup_output(PIN1);
    pin_setup_output(PIN3);

    temperature_init(&temperature_ds18b20);
}
