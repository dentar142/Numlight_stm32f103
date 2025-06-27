#include "stm32f10x.h"                  // Device header
#include "smg/CH451S.h"

#include "headfile.h"







int main(void)
{
	
	GPIO_InitTypeDef gpio_initstruct = {0};
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	
	gpio_initstruct.GPIO_Pin    = DIN_GPIO_PIN_1;
    gpio_initstruct.GPIO_Mode   = GPIO_Mode_Out_PP;
    gpio_initstruct.GPIO_Speed  = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA,&gpio_initstruct);
	gpio_initstruct.GPIO_Pin    = DCLK_GPIO_PIN_1;
    gpio_initstruct.GPIO_Mode   = GPIO_Mode_Out_PP;
    gpio_initstruct.GPIO_Speed  = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA,&gpio_initstruct);
	gpio_initstruct.GPIO_Pin    = LOAD_GPIO_PIN_1;
    gpio_initstruct.GPIO_Mode   = GPIO_Mode_Out_PP;
    gpio_initstruct.GPIO_Speed  = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA,&gpio_initstruct);
	
	gpio_initstruct.GPIO_Pin    = DIN_GPIO_PIN_2;
    gpio_initstruct.GPIO_Mode   = GPIO_Mode_Out_PP;
    gpio_initstruct.GPIO_Speed  = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA,&gpio_initstruct);
	gpio_initstruct.GPIO_Pin    = DCLK_GPIO_PIN_2;
    gpio_initstruct.GPIO_Mode   = GPIO_Mode_Out_PP;
    gpio_initstruct.GPIO_Speed  = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA,&gpio_initstruct);
	gpio_initstruct.GPIO_Pin    = LOAD_GPIO_PIN_2;
    gpio_initstruct.GPIO_Mode   = GPIO_Mode_Out_PP;
    gpio_initstruct.GPIO_Speed  = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA,&gpio_initstruct);
	
	gpio_initstruct.GPIO_Pin    = DIN_GPIO_PIN_3;
    gpio_initstruct.GPIO_Mode   = GPIO_Mode_Out_PP;
    gpio_initstruct.GPIO_Speed  = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA,&gpio_initstruct);
	gpio_initstruct.GPIO_Pin    = DCLK_GPIO_PIN_3;
    gpio_initstruct.GPIO_Mode   = GPIO_Mode_Out_PP;
    gpio_initstruct.GPIO_Speed  = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA,&gpio_initstruct);
	gpio_initstruct.GPIO_Pin    = LOAD_GPIO_PIN_3;
    gpio_initstruct.GPIO_Mode   = GPIO_Mode_Out_PP;
    gpio_initstruct.GPIO_Speed  = GPIO_Speed_50MHz;
    GPIO_Init(GPIOB,&gpio_initstruct);
	
	gpio_initstruct.GPIO_Pin    = DIN_GPIO_PIN_4;
    gpio_initstruct.GPIO_Mode   = GPIO_Mode_Out_PP;
    gpio_initstruct.GPIO_Speed  = GPIO_Speed_50MHz;
    GPIO_Init(GPIOB,&gpio_initstruct);
	gpio_initstruct.GPIO_Pin    = DCLK_GPIO_PIN_4;
    gpio_initstruct.GPIO_Mode   = GPIO_Mode_Out_PP;
    gpio_initstruct.GPIO_Speed  = GPIO_Speed_50MHz;
    GPIO_Init(GPIOB,&gpio_initstruct);
	gpio_initstruct.GPIO_Pin    = LOAD_GPIO_PIN_4;
    gpio_initstruct.GPIO_Mode   = GPIO_Mode_Out_PP;
    gpio_initstruct.GPIO_Speed  = GPIO_Speed_50MHz;
    GPIO_Init(GPIOB,&gpio_initstruct);
	
	gpio_initstruct.GPIO_Pin    = DIN_GPIO_PIN_5;
    gpio_initstruct.GPIO_Mode   = GPIO_Mode_Out_PP;
    gpio_initstruct.GPIO_Speed  = GPIO_Speed_50MHz;
    GPIO_Init(GPIOB,&gpio_initstruct);
	gpio_initstruct.GPIO_Pin    = DCLK_GPIO_PIN_5;
    gpio_initstruct.GPIO_Mode   = GPIO_Mode_Out_PP;
    gpio_initstruct.GPIO_Speed  = GPIO_Speed_50MHz;
    GPIO_Init(GPIOB,&gpio_initstruct);
	gpio_initstruct.GPIO_Pin    = LOAD_GPIO_PIN_5;
    gpio_initstruct.GPIO_Mode   = GPIO_Mode_Out_PP;
    gpio_initstruct.GPIO_Speed  = GPIO_Speed_50MHz;
    GPIO_Init(GPIOB,&gpio_initstruct);
	
	gpio_initstruct.GPIO_Pin    = DIN_GPIO_PIN_6;
    gpio_initstruct.GPIO_Mode   = GPIO_Mode_Out_PP;
    gpio_initstruct.GPIO_Speed  = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA,&gpio_initstruct);
	gpio_initstruct.GPIO_Pin    = DCLK_GPIO_PIN_6;
    gpio_initstruct.GPIO_Mode   = GPIO_Mode_Out_PP;
    gpio_initstruct.GPIO_Speed  = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA,&gpio_initstruct);
	gpio_initstruct.GPIO_Pin    = LOAD_GPIO_PIN_6;
    gpio_initstruct.GPIO_Mode   = GPIO_Mode_Out_PP;
    gpio_initstruct.GPIO_Speed  = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA,&gpio_initstruct);
	
	UI_clear();
	
	
	
	delay(250); 
	
	//UI_begin()；
	
	delay(250); 
	UI();
	
	uint8_t key_num;
	while(1)
	{
		
		
		
		key_num = Key_GetNum();
		
		
		if(1)
		{
			UI_load();
			bad_apple_show();
			delay(250); 
			UI_clear();
			delay(10000);
		}
		
		if(key_num == 0)
		{
			
			
		}
	}




}
