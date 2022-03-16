#include "jdprofile.h"
#include "jd_services.h"

FIRMWARE_IDENTIFIER(0x3d82829b, "JM Module Tester v0.1");

extern void i2c_init(void);

extern int i2c_read_reg_buf(uint8_t addr, uint8_t reg, void *dst, unsigned len);

#define ADS1115_ADDR 0b1001000
#define SPI_CS      PA_3
#define LDO_EN      PA_6

#define CMD_WRITE_DATA 0x10 
#define POT_CHAN_SEL_0 0x01
#define POT_CHAN_SEL_1 0x02

// extern void dspi_init(bool slow, int cpol, int cpha);
// extern void dspi_tx(const void *data, uint32_t numbytes, cb_t doneHandler)

int32_t voltage_mapper(int32_t voltage) {
    float v = ((float) voltage)/1000.0;
    float refv = 1.1834;
    float r12 = 1.3;
    float r11 = 4.3;
    float minr = 0.0;
    float maxr = 10.0;
    float max_wiper = 255.0;
    float min_wiper = 0.0;

    // should give a value between 0 and 10000
    float wresist = (r11 / ((v / refv) - 1)) - r12;

    // clip if not
    if (wresist < minr)
        wresist = minr;
    if (wresist > maxr)
        wresist = maxr;

    float wiper_value = (wresist - minr) * (max_wiper - min_wiper) / (maxr - minr) + min_wiper;

    return (int32_t)wiper_value;
}

const power_supply_params_t psu = {
    .potentiometer = &mcp41010,
    .voltage_to_wiper = voltage_mapper,
    .min_voltage = (1600 << 10), // 1.6V min
    .max_voltage = (5200 << 10), // 5.2V max
    .initial_voltage = (2000 << 10), // by default, the wiper is set to 127, giving 2V
    // voltage values are mapped between min_voltage_wiper_value and max_voltage_wiper_value
    .min_voltage_wiper_value = 255, 
    .max_voltage_wiper_value = 0,
    .enable_pin = LDO_EN,
    .enable_active_lo = true,
    .wiper_channel = 0
};

void app_init_services() {
    powersupply_init(psu);

    // target_wait_us(10000);

    // i2c_init();
    // uint8_t d[] = {0, 0};
    // int res = i2c_read_reg_buf(ADS1115_ADDR, 0, &d, 2);
    // DMESG("ADS1115 WRITE RESULT %d", res);
    // pin_setup_output(SPI_CS);
    // pin_set(SPI_CS, 1);
    // pin_setup_output(LDO_EN);
    // pin_set(LDO_EN, 0);
    // // pin_setup_output(PIN_ASCK);
    // // pin_setup_output(PIN_AMOSI);
    // // pin_set(PIN_ASCK, 1);
    // // pin_set(PIN_AMOSI, 1);
    // // while(1) {
    // //     pin_set(PIN_ASCK, 0);
    // //     pin_set(PIN_AMOSI, 0);
    // //     pin_set(SPI_CS, 0);
    // //     target_wait_us(500000);
    // //     pin_set(PIN_ASCK, 1);
    // //     pin_set(PIN_AMOSI, 1);
    // //     pin_set(SPI_CS, 1);
    // //     target_wait_us(500000);
    // // }

    // dspi_init(true, 0, 0);

    

    // data[0] = CMD_WRITE_DATA | POT_CHAN_SEL_0;
    // data[1] = 0;

    // uint8_t v_array[] = {0, 127, 255};

    // while(1) {
    //     for (int i = 0; i < 3; i++) {
    //         data[1] = v_array[i];
    //         DMESG("TX with %d", data[0]);
    //         spi_tx(data, 2);
    //         target_wait_us(500000);
    //     }
    // }
    
}
