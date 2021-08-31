#include "jdprofile.h"

#include "tinyhw.h"
#include "interfaces/jd_hw.h"

FIRMWARE_IDENTIFIER(0x3997beeb, "JM Braille v3.3");

const uint8_t data[] = {0xaa,0x11,0xaa,0x11};
uint8_t rxdata[255];

#define HIGH_REG    0x4000

// braille cell map


//     0 [9]       1 [10]      2 [11]      3 [12]
//     -   -       -   -       -   -       -   -
//     -   -       -   -       -   -       -   -
//     -   -       -   -       -   -       -   -
//     -   -       -   -       -   -       -   -

const uint16_t rows[4] = {0x4200,0,0,0};

#define RESET           0x8000
#define ROW_0_LS_ON     0x4208
#define COL_0_HS_ON     0x0081
#define COL_0_HS_OFF    0x0080

void done_handler(void) {
    pin_set(PIN_RX_CS,1);
    DMESG("DONE %d",*(uint16_t*)rxdata);
}

uint16_t reset = RESET;
uint16_t row0En = ROW_0_LS_ON;
uint16_t col0On = COL_0_HS_ON;
uint16_t col0Off = COL_0_HS_OFF;

void braille_send(void* data,  uint8_t len) {
    pin_set(PIN_RX_CS, 0);
    dspi_xfer(data, rxdata, len, done_handler);
}

void app_init_services() {
    dspi_init();
    pin_setup_output(PIN_RX_CS);
    memset(rxdata,0,255);

    braille_send(&reset,2);

    for (volatile int i = 0; i <500; i++)
        target_wait_us(1000);

    braille_send(&row0En,2);

    for (volatile int i = 0; i <500; i++)
        target_wait_us(1000);

    // while(1);
    while(1) {
        braille_send(&col0On,2);

        for (volatile int i = 0; i <500; i++)
            target_wait_us(1000);

        braille_send(&col0Off,2);
        
        for (volatile int i = 0; i <500; i++)
            target_wait_us(1000);
    }
}
