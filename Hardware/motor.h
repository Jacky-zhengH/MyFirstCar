#ifndef __MOTOR_H
#define __MOTOR_H
//***************************
/*工作模式mode*/

/*电机引脚映射*/
//***************************
// 直流电机A
//		Pin assign
//			STM32			 驱动板
//		GPIOB_Pin_14 		---> AIN1
//		GPIOB_Pin_15		---> AIN2
//		GPIOB_Pin_3		    ---> PWMA(Timer2_CH2)
//**************************
#define MOTORA_Port GPIOB // 电机A引脚端口
#define AIN1_Pin GPIO_PIN_14
#define AIN2_Pin GPIO_PIN_15
#define PWMA_Pin GPIO_PIN_3
//**************************
#define PWM_CLOCK_FREQ 72000000 // 时钟频率72MHz
//**************************
/*-----函数接口-----*/
void MotorA_Init(void);
//**************************
#endif
