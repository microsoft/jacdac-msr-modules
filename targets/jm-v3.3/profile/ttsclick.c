#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x37b3f787, "JM Speech Synthesis v3.3");

void app_init_services() {
    speech_synthesis_init(&tts_click);
}
