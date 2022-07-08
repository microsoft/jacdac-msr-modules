#define PIN_LED PC_14
#define PIN_LED_GND NO_PIN

#define PIN_PWR NO_PIN // some boards have transistor for enabling/disabling power to the peripheral, assumes active low
#define PIN_P0 NO_PIN // for debugging
#define PIN_P1 NO_PIN // for debugging

// not all Mikrobus pins are available so don't define MIKROBUS_AVAILABLE
// #define MIKROBUS_AVAILABLE 1 

// Left header
#define PIN_AN PA_5
#define PIN_RST NO_PIN
#define PIN_RX_CS PA_3
#define PIN_SCK PA_1 // SPI1
#define PIN_MISO PA_6
#define PIN_TX_MOSI PA_2

#define PIN_CS PIN_RX_CS
// VCC
// GND

#define PIN_ASCK PIN_SCK
#define PIN_AMOSI PIN_TX_MOSI
#define PIN_AMISO PIN_MISO

// Right header
#define PIN_PWM PA_4 // TIM14
#define PIN_INT NO_PIN
// RX/CS USART2
// TX/MOSI

// will compile I2C drivers if PIN_SDA is defined
#define PIN_SCL PA_9  // I2C2
#define PIN_SDA PA_10 // I2C2
// 5V
// GND

#define BOARD_STARTUP_CODE LL_SYSCFG_EnablePinRemap(LL_SYSCFG_PIN_RMP_PA11 | LL_SYSCFG_PIN_RMP_PA12)

#define I2C_AF LL_GPIO_AF_6
#define I2C_IDX 1

// Jacdac pins
#define UART_PIN PB_6
#define UART_PIN_AF LL_GPIO_AF_0
#define USART_IDX 1

// here, the anode (source) is common
// #define LED_RGB_COMMON_CATHODE 1
//#define PIN_LED_R -1
//#define PIN_LED_G -1
//#define PIN_LED_B -1

// calibrated to ~50lux per channel
//#define LED_R_MULT 250
//#define LED_G_MULT 76
//#define LED_B_MULT 221
//#define RGB_LED_PERIOD 600 

// BL is bootloader
//#define PIN_BL_LED PB_8 // define this if don't want to use mono status LED
//#define PIN_BL_PERIOD 300 // mono status LED is not PWM'ed
