#ifndef INC_USER_MAIN_HPP_
#define INC_USER_MAIN_HPP_


#ifdef __cplusplus
extern "C" {
#endif


#include "stm32f4xx.h"
#include "main.h"

TIM_HandleTypeDef htim7;
UART_HandleTypeDef huart1;
static HAL_StatusTypeDef RS485_transmit(uint8_t *pData, uint16_t size, uint32_t timeout);
static HAL_StatusTypeDef RS485_receive(uint8_t *pData, uint16_t size, uint32_t timeout);

void user_main(void);
void user_init(void);

#define RS485_CTRL_Pin GPIO_PIN_2
#define RS485_CTRL_GPIO_Port GPIOE
#define RS485_TX_Pin GPIO_PIN_6
#define RS485_TX_GPIO_Port GPIOB
#define RS485_RX_Pin GPIO_PIN_7
#define RS485_RX_GPIO_Port GPIOB

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef*);
//static HAL_StatusTypeDef RS485_transmit(uint8_t, uint16_t, uint32_t);


#ifdef __cplusplus
}
#endif


#endif /* INC_USER_MAIN_HPP_ */
