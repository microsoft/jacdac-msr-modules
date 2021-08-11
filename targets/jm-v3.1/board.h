#define PIN_LED PB_9
#define PIN_LED_GND -1

#define PIN_PWR -1
#define PIN_P0 -1
#define PIN_P1 -1

#define MIKROBUS_AVAILABLE 1

// Left header
#define PIN_AN PA_5
#define PIN_RST PA_3
#define PIN_CS PA_1
#define PIN_SCK PA_0
#define PIN_TX_MISO PB_6 // USART1 SPI2
#define PIN_RX_MOSI PB_7 // USART1 SPI2
// VCC
// GND

// Right header
#define PIN_PWM PA_4 // TIM14
#define PIN_INT PC_15
// MOSI
// MISO
#define PIN_SCL PA_9  // I2C2
#define PIN_SDA PA_10 // I2C2
// 5V
// GND

#define BOARD_STARTUP_CODE LL_SYSCFG_EnablePinRemap(LL_SYSCFG_PIN_RMP_PA11 | LL_SYSCFG_PIN_RMP_PA12)

#define I2C_AF LL_GPIO_AF_6
#define I2C_IDX 1

#define UART_PIN PA_2
#define UART_PIN_AF LL_GPIO_AF_1
#define USART_IDX 2

// here, the anode (source) is common
// #define LED_RGB_COMMON_CATHODE 1
#define PIN_LED_R PA_7
#define PIN_LED_G PB_0
#define PIN_LED_B PA_6

// calibrated to ~5lux per channel
#define LED_R_MULT 250
#define LED_G_MULT 14
#define LED_B_MULT 16

#define PIN_BL_LED PIN_LED_B
#define PIN_BL_PERIOD 30
