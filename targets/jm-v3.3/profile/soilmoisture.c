#include "jdprofile.h"
#include "jacdac/dist/c/soilmoisture.h"

FIRMWARE_IDENTIFIER(0x39303bba, "JM Capacitive Soil Moisture v3.3");

void app_init_services() {
    ANALOG_SRV_DEF(JD_SERVICE_CLASS_SOIL_MOISTURE, .pinL = NO_PIN, .pinH = NO_PIN, .pinM = PIN_PWM,
                   .offset = 0x18000, .scale = -2000,
                   .variant = JD_SOIL_MOISTURE_VARIANT_CAPACITIVE);
}
