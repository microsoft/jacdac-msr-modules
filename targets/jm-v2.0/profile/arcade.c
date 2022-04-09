#include "jdprofile.h"
#include "jacdac/dist/c/gamepad.h"

FIRMWARE_IDENTIFIER(0x38e3c25c, "JM ArcadeCtrls v2.0");

static const gamepad_params_t params = {
    .buttons_available = JD_GAMEPAD_BUTTONS_INFER_12,
    .variant = JD_GAMEPAD_VARIANT_ARCADE_STICK,
    .pinX = NO_PIN,
    //          L     U     R     D     A     B     Menu   Select  Reset Exit    X       Y
    .pinBtns = {PA_2, PA_5, PA_4, PA_3, PF_0, PF_1, PA_10, NO_PIN, PA_0, NO_PIN, NO_PIN, NO_PIN},
    .pinLeds = {NO_PIN, NO_PIN, NO_PIN, NO_PIN, PA_6, PA_7, PB_1, NO_PIN, NO_PIN, NO_PIN, NO_PIN},
    .active_level = 1,
};

void app_init_services() {
    gamepad_init(&params);
}
