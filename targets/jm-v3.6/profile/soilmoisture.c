#include "jdprofile.h"
#include "jacdac/dist/c/soilmoisture.h"

FIRMWARE_IDENTIFIER(0x37522d24, "JM Capacitive Soil Moisture v3.7");

void app_init_services() {
    ANALOG_SRV_DEF(JD_SERVICE_CLASS_SOIL_MOISTURE,                    //
                   .pinL = PIN_RX_CS, .pinH = NO_PIN, .pinM = PIN_AN, //
                   .offset = 0x18000, .scale = -2000,                 //
                   .variant = JD_SOIL_MOISTURE_VARIANT_CAPACITIVE,    //
                   .sampling_ms = 1000 - 150, .sampling_delay = 150         //
    );

    // pin_set(PIN_RX_CS, 0);
    // pin_setup_output(PIN_RX_CS);
    pin_set(PIN_TX_MOSI, 1);
    pin_setup_output(PIN_TX_MOSI);
}
