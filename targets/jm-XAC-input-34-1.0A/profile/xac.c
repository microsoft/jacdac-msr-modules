#include "jdprofile.h"
#include "services/interfaces/jd_hw_pwr.h"
#include "lib.h"

#define JACK_TIP        PA_5
#define JACK_R1         PA_3
#define JACK_R2         PA_7
#define JACK_SLEEVE     PA_6

#define INPUT_TYPE_UNKNOWN          -1
#define INPUT_TYPE_DIGITAL_BUTTON   1
#define INPUT_TYPE_ANALOG_TRIGGER   2
#define INPUT_TYPE_ANALOG_JOYSTICK  3

FIRMWARE_IDENTIFIER(0x362fe800, "JM XAC Input 34-1.0A");

static uint32_t led_ctr = 0;
static uint32_t app_time = 0;
static int current_input = 0;

int detect_input (void) {
    pin_setup_input(JACK_TIP, 0);
    pin_setup_input(JACK_R1, 1);
    pin_setup_input(JACK_R2, 1);
    pin_setup_output(JACK_SLEEVE);
    pin_set(JACK_SLEEVE, 0);

    uint8_t jr1 = pin_get(JACK_R1);
    uint8_t jr2 = pin_get(JACK_R2);

    (void)jr1;
    (void)jr2;

    DMESG("Jr1 %d Jr2 %d", jr1, jr2);
    if (pin_get(JACK_R2) == 0 && pin_get(JACK_R1) == 0)
        return INPUT_TYPE_DIGITAL_BUTTON;

    pin_setup_input(JACK_R1, -1);
    pin_setup_input(JACK_R2, -1);
    pin_setup_input(JACK_TIP, -1);

    pin_set(JACK_SLEEVE, 1);
    // pin_setup_input(JACK_SLEEVE, 1);

    uint8_t jt = pin_get(JACK_TIP);
    jr1 = pin_get(JACK_R1);
    jr2 = pin_get(JACK_R2);

    (void)jt;
    (void)jr2;
    DMESG("JT %d JR1 %d JR2 %d", jt, jr1, jr2);

    if (pin_get(JACK_R1))
        return INPUT_TYPE_ANALOG_JOYSTICK;

    if (pin_get(JACK_TIP))
        return INPUT_TYPE_ANALOG_TRIGGER;

    return INPUT_TYPE_UNKNOWN;
}

void app_process(void) {
    if (jd_should_sample(&app_time, 500000)) {
        int input_detected = detect_input();

        if (current_input != input_detected)
            target_reset();
        else {
            // reset cfg for button service.
            if (current_input == INPUT_TYPE_DIGITAL_BUTTON) {
                pin_setup_input(JACK_R1, -1);
                pin_setup_input(JACK_R2, -1);
                pin_setup_output(JACK_SLEEVE);
                pin_set(JACK_SLEEVE, 0);
                pin_setup_input(JACK_TIP, 1);
            }
            // re-configuration not required for potentiometer.
            // potentiometer service configures pins on each read
        }
    }
}

void app_init_services() {
    current_input = detect_input();

    if (current_input == INPUT_TYPE_DIGITAL_BUTTON) {
        DMESG("DIGITAL BUTTON");
        jd_status(JD_STATUS_OFF);
        pin_setup_input(JACK_R1, -1);
        pin_setup_input(JACK_R2, -1);
        pin_setup_output(JACK_SLEEVE);
        pin_set(JACK_SLEEVE, 0);
        btn_init(JACK_TIP, 0, -1);
        return;
    }

    
    if (current_input >= INPUT_TYPE_ANALOG_TRIGGER) {

        DMESG("potentiometer");
        jd_status(JD_STATUS_OFF);

        pin_setup_input(JACK_R2, -1);
        pin_setup_input(JACK_TIP, -1);
        pin_setup_input(JACK_SLEEVE, 1);

        // potentiometer
        potentiometer_init(JACK_R2, JACK_TIP, JACK_SLEEVE);

        if (current_input == INPUT_TYPE_ANALOG_JOYSTICK)
            // second potentiometer
            potentiometer_init(JACK_R2, JACK_R1, JACK_SLEEVE);

        return;
    }

    led_ctr = tim_get_micros()+2000000;

    jd_status_init();

check_input:

    current_input = detect_input();

    if (current_input != -1)
        target_reset();

    jd_status(JD_STATUS_UNKNOWN_STATE);

    while (1) {
        uint64_t now_long = tim_get_micros();
        now = (uint32_t)now_long;
        if (!jd_should_sample(&led_ctr, 2000000)) {
            jd_status_process();
            continue;
        }
        goto check_input;
    }
}
