#define PIN_LED -1
#define PIN_LED_GND -1

#define PIN_PWR -1
#define PIN_P0 -1
#define PIN_P1 -1

#define MIKROBUS_AVAILABLE 1

// Left header
#define PIN_AN PA_5
#define PIN_RST PA_0
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
#define PIN_INT PC_15
// RX/CS USART2
// TX/MOSI
#define PIN_SCL PA_9  // I2C2
#define PIN_SDA PA_10 // I2C2
// 5V
// GND

#define PIN_X1 PIN_MISO
#define PIN_X0 PIN_PWM

#define BOARD_STARTUP_CODE LL_SYSCFG_EnablePinRemap(LL_SYSCFG_PIN_RMP_PA11 | LL_SYSCFG_PIN_RMP_PA12)

#define I2C_AF LL_GPIO_AF_6
#define I2C_IDX 1

#define UART_PIN PB_6
#define UART_PIN_AF LL_GPIO_AF_0
#define USART_IDX 1

// here, the anode (source) is common
// #define LED_RGB_COMMON_CATHODE 1
#define PIN_LED_R PB_0
#define PIN_LED_G PA_7
#define PIN_LED_B PB_8

// calibrated to ~50lux per channel
#define LED_R_MULT 250
#define LED_G_MULT 76
#define LED_B_MULT 221
#define RGB_LED_PERIOD 600

#define PIN_BL_LED PIN_LED_B
#define PIN_BL_PERIOD 300

#define PIN_ACC_INT PIN_INT
