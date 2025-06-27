#ifndef __CH451S_H
#define __CH451S_H

#include "stm32f10x.h"

#define DIN_GPIO_PORT_A    GPIOA
#define DIN_GPIO_PORT_B    GPIOB
#define  DIN_GPIO_PIN_1    GPIO_Pin_1
#define DCLK_GPIO_PIN_1    GPIO_Pin_0
#define LOAD_GPIO_PIN_1    GPIO_Pin_2

#define  DIN_GPIO_PIN_2    GPIO_Pin_4
#define DCLK_GPIO_PIN_2    GPIO_Pin_3
#define LOAD_GPIO_PIN_2    GPIO_Pin_5

#define  DIN_GPIO_PIN_3    GPIO_Pin_7
#define DCLK_GPIO_PIN_3    GPIO_Pin_6
#define LOAD_GPIO_PIN_3    GPIO_Pin_0

#define  DIN_GPIO_PIN_4    GPIO_Pin_10
#define DCLK_GPIO_PIN_4    GPIO_Pin_1
#define LOAD_GPIO_PIN_4    GPIO_Pin_11

#define  DIN_GPIO_PIN_5    GPIO_Pin_13  //
#define DCLK_GPIO_PIN_5    GPIO_Pin_12
#define LOAD_GPIO_PIN_5    GPIO_Pin_14

#define  DIN_GPIO_PIN_6    GPIO_Pin_9
#define DCLK_GPIO_PIN_6    GPIO_Pin_8
#define LOAD_GPIO_PIN_6    GPIO_Pin_10

void CH451S_Init(void);
void CH451_Send1(uint16_t Data);
void CH451_Send2(uint16_t Data);
void CH451_Send3(uint16_t Data);
void CH451_Send4(uint16_t Data);
void CH451_Send5(uint16_t Data);
void CH451_Send6(uint16_t Data);


#endif
