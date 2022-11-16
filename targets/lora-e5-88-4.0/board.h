#define PIN_LED_R PA_0
#define PIN_LED_G PA_3
#define PIN_LED_B PB_10

// calibrated to ~50lux per channel
#define LED_R_MULT 250
#define LED_G_MULT 76
#define LED_B_MULT 221
#define RGB_LED_PERIOD 600

#define PIN_BL_LED PIN_LED_B
#define PIN_BL_PERIOD 300

#define PIN_LED -1
#define PIN_LED_GND -1

#define PIN_PWR -1
#define PIN_P0 -1
#define PIN_P1 -1

#define PIN_SSCK PB_13
#define PIN_SMOSI PA_10
#define PIN_SMISO PB_14

#define PIN_FLASH_CS PB_9
#define PIN_FLASH_WP PB_3
#define PIN_FLASH_HOLD PB_5
#define SPI_RX 1

#define PIN_SCL PB_15 
#define PIN_SDA PA_15

#define PIN_LOG_TX PB_6 // on dbg header
#define PIN_LOG_RX PB_7 // floating

// Floating
// LPUART1 AF8
// #define PIN_TX1 PC_1
// #define PIN_RX1 PC_0

// JD on USART2
// LPUART1 AF8 or USART2 AF7
// #define PIN_TX2 PA_2
// #define PIN_RX2 PA_3

// #define BOARD_STARTUP_CODE LL_SYSCFG_EnablePinRemap(LL_SYSCFG_PIN_RMP_PA11 | LL_SYSCFG_PIN_RMP_PA12)

#define I2C_AF LL_GPIO_AF_4
#define I2C_IDX 2

#define UART_PIN PA_2
#define UART_PIN_AF LL_GPIO_AF_7
#define USART_IDX 2

#define JD_USE_LSE 1

#define DEVICE_DMESG_BUFFER_SIZE 4000

// disable for now, since it messes with debugging
#define JD_CONFIG_WATCHDOG 0

#define JD_LSTORE 0
