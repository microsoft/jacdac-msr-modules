#define PIN_LED_ACTIVE_LO 1
#define PIN_LED PB_5
#define PIN_LED_GND -1

#define PIN_PWR -1
#define PIN_P0 -1
#define PIN_P1 -1

#if 0
#define PIN_SSCK PB_13
#define PIN_SMOSI PA_10
#define PIN_SMISO PB_14
#define PIN_SCS PB_9
#endif

#define PIN_SCL PB_15 
#define PIN_SDA PA_15

// connected to on-board USB-serial bridge; USART1 AF7
#define PIN_LOG_TX PB_6
#define PIN_LOG_RX PB_7

// LPUART1 AF8
#define PIN_TX1 PC_1
#define PIN_RX1 PC_0

// JD on USART2
// LPUART1 AF8 or USART2 AF7
// #define PIN_TX2 PA_2
// #define PIN_RX2 PA_3

#define PIN_D0 PA_0
#define PIN_D9 PA_9
#define PIN_D10 PB_10
#define PIN_A3 PB_3
#define PIN_A4 PB_4

// #define BOARD_STARTUP_CODE LL_SYSCFG_EnablePinRemap(LL_SYSCFG_PIN_RMP_PA11 | LL_SYSCFG_PIN_RMP_PA12)

#define I2C_AF LL_GPIO_AF_4
#define I2C_IDX 2

#define UART_PIN PA_2
#define UART_PIN_AF LL_GPIO_AF_7
#define USART_IDX 2

#define JD_USE_LSE 1

#define DEVICE_DMESG_BUFFER_SIZE 4000