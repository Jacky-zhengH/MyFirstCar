#include "header.h"

void MotorA_Init(void)
{
    HAL_GPIO_WritePin(MOTORA_Port, AIN1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(MOTORA_Port, AIN2_Pin, GPIO_PIN_RESET);
}
