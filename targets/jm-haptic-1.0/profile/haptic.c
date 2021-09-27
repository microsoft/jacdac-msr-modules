#include "jdprofile.h"
#include "jacdac/dist/c/relay.h"
#include "tinyhw.h"
#include "interfaces/jd_hw.h"

FIRMWARE_IDENTIFIER(0x3cf463ad, "JM Haptic MACH-1.0");


#define AW8624_ADDR             0x5A

// 0x5A

//0xB4

// (0x5A << 1)

#define AW8624_CHIP_ID_REG      0x00
#define AW8624_CHIP_ID_RESP     0x24

#define AW8624_SYSCTRL_REG                 0x04
#define AW8624_SYSCTRL_PLAY_MODE_RTP       0x4

// active low
#define AW8624_SYSCTRL_STANDBY_MSK         0x01

#define AW8624_GO_REG                  0x05
#define AW8624_GO_BIT_MSK              0x01

#define AW8624_RTPDATA_REG             0x06


void app_init_services() {
    i2c_init();

    pin_setup_output(PIN_RST);
    pin_set(PIN_RST, 1);
    target_wait_us(250000);
    pin_set(PIN_RST, 0);
    target_wait_us(250000);
    pin_set(PIN_RST, 1);
    target_wait_us(250000);

    DMESG("I2CMD %x %x", AW8624_ADDR, AW8624_CHIP_ID_REG);

    while(1) {
        DMESG("ID %x", i2c_read_reg(AW8624_ADDR, AW8624_CHIP_ID_REG));
        target_wait_us(250000);
    }

    // if (id != AW8624_CHIP_ID_RESP)
    //     hw_panic();

    // Set PLAY_MODE bit to 1 in register 0x04;
    i2c_write_reg(AW8624_ADDR, AW8624_SYSCTRL_REG, AW8624_SYSCTRL_PLAY_MODE_RTP | AW8624_SYSCTRL_STANDBY_MSK);

    // Set STANDBY bit to 0 in register 0x04 to change the device to active mode;
    i2c_write_reg(AW8624_ADDR, AW8624_SYSCTRL_REG, AW8624_SYSCTRL_PLAY_MODE_RTP);

    // Set GO bit to 1 in register 0x05 to trigger waveform playback;
    i2c_write_reg(AW8624_ADDR, AW8624_GO_REG, AW8624_GO_BIT_MSK);

    // Write RTP data continually to register 0x06 to playback RTP waveform;
    while (1) {
        i2c_write_reg(AW8624_ADDR, AW8624_RTPDATA_REG, 0x80);

        // HOST need monitor the full and empty status for RTP FIFO;

        target_wait_us(100);
    }



    while(1);
}
