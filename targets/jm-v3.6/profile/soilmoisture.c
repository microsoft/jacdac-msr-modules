#include "jdprofile.h"
#include "jacdac/dist/c/soilmoisture.h"

FIRMWARE_IDENTIFIER(0x37522d24, "JM Capacitive Soil Moisture v3.7");

#if 0
// for use with 1-1 2-2 3-3 cable
#define PIN1 PIN_RX_CS
#define PIN2 PIN_TX_MOSI
#define PIN3 PIN_AN
#else
// for use with 1-3 2-2 3-1 cable
#define PIN3 PIN_RX_CS
#define PIN2 PIN_TX_MOSI
#define PIN1 PIN_AN
#endif

void app_init_services() {
    ANALOG_SRV_DEF(JD_SERVICE_CLASS_SOIL_MOISTURE,                    //
                   .pinL = PIN1, .pinH = NO_PIN, .pinM = PIN3, //
                   .offset = 0x18000, .scale = -2000,                 //
                   .variant = JD_SOIL_MOISTURE_VARIANT_CAPACITIVE,    //
                   .sampling_ms = 1000 - 150, .sampling_delay = 150         //
    );

    // pin_set(PIN1, 0);
    // pin_setup_output(PIN1);
    pin_set(PIN2, 1);
    pin_setup_output(PIN2);
}
