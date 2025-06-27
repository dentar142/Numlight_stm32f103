#include "stm32f10x.h"
#include "smg/CH451S.h"

void CH451_Send1(uint16_t Data)
{
	uint16_t i,Bit;
	GPIO_SetBits  (GPIOA,DIN_GPIO_PIN_1);
	GPIO_ResetBits(GPIOA,DIN_GPIO_PIN_1);
	GPIO_SetBits  (GPIOA,DIN_GPIO_PIN_1);
	
	for (i=0;i<12;i++)
	{
		Bit=Data&(0x001<<i);
		if(Bit)
		{
			GPIO_SetBits(GPIOA,DIN_GPIO_PIN_1);
		}
		else
		{
			GPIO_ResetBits(GPIOA,DIN_GPIO_PIN_1);
		}
		GPIO_SetBits  (GPIOA,DCLK_GPIO_PIN_1);
		GPIO_ResetBits(GPIOA,DCLK_GPIO_PIN_1);
		GPIO_SetBits  (GPIOA,DCLK_GPIO_PIN_1);
	}
	GPIO_SetBits  (GPIOA,LOAD_GPIO_PIN_1);
	GPIO_ResetBits(GPIOA,LOAD_GPIO_PIN_1);
	GPIO_SetBits  (GPIOA,LOAD_GPIO_PIN_1);
	
}

void CH451_Send2(uint16_t Data)
{
	uint16_t i,Bit;
	
	GPIO_SetBits  (GPIOA,DIN_GPIO_PIN_2);
	GPIO_ResetBits(GPIOA,DIN_GPIO_PIN_2);
	GPIO_SetBits  (GPIOA,DIN_GPIO_PIN_2);
	for (i=0;i<12;i++)
	{
		Bit=Data&(0x001<<i);
		if(Bit)
		{
			GPIO_SetBits(GPIOA,DIN_GPIO_PIN_2);
		}
		else
		{
			GPIO_ResetBits(GPIOA,DIN_GPIO_PIN_2);
		}
		GPIO_SetBits  (GPIOA,DCLK_GPIO_PIN_2);
		GPIO_ResetBits(GPIOA,DCLK_GPIO_PIN_2);
		GPIO_SetBits  (GPIOA,DCLK_GPIO_PIN_2);
	}
	GPIO_SetBits  (GPIOA,LOAD_GPIO_PIN_2);
	GPIO_ResetBits(GPIOA,LOAD_GPIO_PIN_2);
	GPIO_SetBits  (GPIOA,LOAD_GPIO_PIN_2);
	
}

void CH451_Send3(uint16_t Data)
{
	uint16_t i,Bit;
	GPIO_SetBits  (GPIOA,DIN_GPIO_PIN_3);
	GPIO_ResetBits(GPIOA,DIN_GPIO_PIN_3);
	GPIO_SetBits  (GPIOA,DIN_GPIO_PIN_3);
	
	for (i=0;i<12;i++)
	{
		Bit=Data&(0x001<<i);
		if(Bit)
		{
			GPIO_SetBits(GPIOA,DIN_GPIO_PIN_3);
		}
		else
		{
			GPIO_ResetBits(GPIOA,DIN_GPIO_PIN_3);
		}
		GPIO_SetBits  (GPIOA,DCLK_GPIO_PIN_3);
		GPIO_ResetBits(GPIOA,DCLK_GPIO_PIN_3);
		GPIO_SetBits  (GPIOA,DCLK_GPIO_PIN_3);
	}
	GPIO_SetBits  (GPIOB,LOAD_GPIO_PIN_3);
	GPIO_ResetBits(GPIOB,LOAD_GPIO_PIN_3);
	GPIO_SetBits  (GPIOB,LOAD_GPIO_PIN_3);
	
}

void CH451_Send4(uint16_t Data)
{
	uint16_t i,Bit;
	GPIO_SetBits  (GPIOB,DIN_GPIO_PIN_4);
	GPIO_ResetBits(GPIOB,DIN_GPIO_PIN_4);
	GPIO_SetBits  (GPIOB,DIN_GPIO_PIN_4);
	
	for (i=0;i<12;i++)
	{
		Bit=Data&(0x001<<i);
		if(Bit)
		{
			GPIO_SetBits(GPIOB,DIN_GPIO_PIN_4);
		}
		else
		{
			GPIO_ResetBits(GPIOB,DIN_GPIO_PIN_4);
		}
		GPIO_SetBits  (GPIOB,DCLK_GPIO_PIN_4);
		GPIO_ResetBits(GPIOB,DCLK_GPIO_PIN_4);
		GPIO_SetBits  (GPIOB,DCLK_GPIO_PIN_4);
	}
	GPIO_SetBits  (GPIOB,LOAD_GPIO_PIN_4);
	GPIO_ResetBits(GPIOB,LOAD_GPIO_PIN_4);
	GPIO_SetBits  (GPIOB,LOAD_GPIO_PIN_4);
	
}

void CH451_Send5(uint16_t Data)
{
	uint16_t i,Bit;
	GPIO_SetBits  (GPIOB,DIN_GPIO_PIN_5);
	GPIO_ResetBits(GPIOB,DIN_GPIO_PIN_5);
	GPIO_SetBits  (GPIOB,DIN_GPIO_PIN_5);
	
	for (i=0;i<12;i++)
	{
		Bit=Data&(0x001<<i);
		if(Bit)
		{
			GPIO_SetBits(GPIOB,DIN_GPIO_PIN_5);
		}
		else
		{
			GPIO_ResetBits(GPIOB,DIN_GPIO_PIN_5);
		}
		GPIO_SetBits  (GPIOB,DCLK_GPIO_PIN_5);
		GPIO_ResetBits(GPIOB,DCLK_GPIO_PIN_5);
		GPIO_SetBits  (GPIOB,DCLK_GPIO_PIN_5);
	}
	GPIO_SetBits  (GPIOB,LOAD_GPIO_PIN_5);
	GPIO_ResetBits(GPIOB,LOAD_GPIO_PIN_5);
	GPIO_SetBits  (GPIOB,LOAD_GPIO_PIN_5);
	
}

void CH451_Send6(uint16_t Data)
{
	uint16_t i,Bit;
	GPIO_SetBits  (GPIOA,DIN_GPIO_PIN_6);
	GPIO_ResetBits(GPIOA,DIN_GPIO_PIN_6);
	GPIO_SetBits  (GPIOA,DIN_GPIO_PIN_6);
	
	for (i=0;i<12;i++)
	{
		Bit=Data&(0x001<<i);
		if(Bit)
		{
			GPIO_SetBits(GPIOA,DIN_GPIO_PIN_6);
		}
		else
		{
			GPIO_ResetBits(GPIOA,DIN_GPIO_PIN_6);
		}
		GPIO_SetBits  (GPIOA,DCLK_GPIO_PIN_6);
		GPIO_ResetBits(GPIOA,DCLK_GPIO_PIN_6);
		GPIO_SetBits  (GPIOA,DCLK_GPIO_PIN_6);
	}
	GPIO_SetBits  (GPIOA,LOAD_GPIO_PIN_6);
	GPIO_ResetBits(GPIOA,LOAD_GPIO_PIN_6);
	GPIO_SetBits  (GPIOA,LOAD_GPIO_PIN_6);
	
}