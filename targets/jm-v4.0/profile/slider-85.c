#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x35fbed92, "JM-3-Slider 85 v4.0");

void app_init_services() {
    potentiometer_init(NO_PIN, PIN_SCK, PIN_RST);
    potentiometer_init(NO_PIN, PIN_TX_MOSI, PIN_RST);
    potentiometer_init(NO_PIN, PIN_RX_CS, PIN_RST);
}
