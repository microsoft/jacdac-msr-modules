#define PIN_LED PC_14
#define PIN_LED_GND NO_PIN

#define PIN_PWR NO_PIN
#define PIN_P0 NO_PIN
#define PIN_P1 NO_PIN

// configure alert pin for ADS1115
#define PIN_ACC_INT PC_15

#define PIN_SSCK PA_1
#define PIN_SMOSI PA_2
#define PIN_CS PA_3
#define USE_SSPI

#define PIN_SDA PA_10
#define PIN_SCL PA_9
#define I2C_AF LL_GPIO_AF_6

#define BOARD_STARTUP_CODE LL_SYSCFG_EnablePinRemap(LL_SYSCFG_PIN_RMP_PA11 | LL_SYSCFG_PIN_RMP_PA12);

#define UART_PIN PB_6
#define UART_PIN_AF LL_GPIO_AF_0
#define USART_IDX 1