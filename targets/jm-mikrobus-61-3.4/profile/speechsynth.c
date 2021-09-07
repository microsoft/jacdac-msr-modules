#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x36426460, "JM Speech Synthesis v3.4");

void app_init_services() {
    speech_synthesis_init(&tts_click);
}
