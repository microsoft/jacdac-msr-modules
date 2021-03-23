#include "jdprofile.h"
#include "services/interfaces/jd_hw_pwr.h"
#include "lib.h"

#define JACK_TIP        PA_5
#define JACK_R1         PA_3
#define JACK_R2         PA_7
#define JACK_SLEEVE     PA_6

FIRMWARE_IDENTIFIER(0x362fe800, "JM XAC Input 34-1.0A");

static uint32_t led_ctr = 0;

void app_init_services() {
    DMESG("APP INIT");

    pin_setup_input(JACK_TIP, 0);
    pin_setup_input(JACK_R1, 0);
    pin_setup_input(JACK_R2, 0);
    pin_set_opendrain(JACK_SLEEVE);

    uint8_t jr1 = pin_get(JACK_R1);
    uint8_t jr2 = pin_get(JACK_R2);
    uint8_t js = pin_get(JACK_SLEEVE);

    (void)jr1;
    (void)jr2;

    DMESG("Jr1 %d Jr2 %d JS %d", jr1, jr2, js);

    // if r1, r2, sleeve are the same, then we have a digital button
    if (pin_get(JACK_SLEEVE) && pin_get(JACK_R2) && pin_get(JACK_R1)) {
        DMESG("DIGITAL BUTTON");
        jd_status(JD_STATUS_OFF);
        pin_setup_input(JACK_R1, -1);
        pin_setup_input(JACK_R2, -1);
        pin_setup_input(JACK_SLEEVE, -1);
        btn_init(JACK_TIP, 0, -1);
        return;
    }

    pin_setup_input(JACK_R2, -1);
    pin_setup_input(JACK_TIP, -1);
    pin_setup_input(JACK_SLEEVE, 1);

    uint8_t jt = pin_get(JACK_TIP);
    js = pin_get(JACK_SLEEVE);

    (void)jt;
    (void)js;
    DMESG("JT %d JS %d", jt, js);


    if (pin_get(JACK_SLEEVE) && pin_get(JACK_TIP)) {

        DMESG("potentiometer");
        jd_status(JD_STATUS_OFF);

        // potentiometer
        potentiometer_init(JACK_SLEEVE, JACK_TIP, JACK_R2);

        if (pin_get(JACK_R1)) {
            // second potentiometer
            potentiometer_init(JACK_SLEEVE, JACK_R1, JACK_R2);
        }
        return;
    }

    led_ctr = tim_get_micros()+2000000;

    jd_status_init();
    jd_status(JD_STATUS_CONNECTED);
    jd_status(JD_STATUS_UNKNOWN_STATE);

    while (1) {
        uint64_t now_long = tim_get_micros();
        now = (uint32_t)now_long;
        if (!jd_should_sample(&led_ctr, 2000000)) {
            jd_status_process();
            continue;
        }
        target_reset();
    }
}
