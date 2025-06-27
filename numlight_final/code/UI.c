#include "stm32f10x.h"                  // Device header
#include "headfile.h"

// ui界面显示
void UI(void)
{
ch451_init_config1();
CH451_Send1(0xF00); // Pos0->0
CH451_Send1(0xE00); // Pos1->0
CH451_Send1(0xD00); // Pos2->0
CH451_Send1(0xC00); // Pos3->0
CH451_Send1(0xB00); // Pos4->0
CH451_Send1(0xA00); // Pos5->0
CH451_Send1(0x900); // Pos6->0
CH451_Send1(0x800); // Pos7->0
ch451_init_config2();
CH451_Send2(0xF00); // Pos0->0
CH451_Send2(0xE00); // Pos1->0
CH451_Send2(0xD00); // Pos2->0
CH451_Send2(0xC00); // Pos3->0
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE7F); // Pos1->0
CH451_Send3(0xD77); // Pos2->0
CH451_Send3(0xC3F); // Pos3->0
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD77); // Pos2->0
CH451_Send4(0xC73); // Pos3->0
CH451_Send4(0xB73); // Pos4->0
CH451_Send4(0xA38); // Pos5->0
CH451_Send4(0x979); // Pos6->0
CH451_Send4(0x800); // Pos7->0
ch451_init_config5();
CH451_Send5(0xF00); // Pos0->0
CH451_Send5(0xE00); // Pos1->0
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x800); // Pos7->0
ch451_init_config6();
CH451_Send6(0xF00); // Pos0->0
CH451_Send6(0xE00); // Pos1->0
CH451_Send6(0xD00); // Pos2->0
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0
	
	
}

// 开场动画
void UI_begin(void)
{
	
}

// 过场动画（load）
void UI_load(void)
{

ch451_init_config3();
CH451_Send3(0xF00); 
CH451_Send3(0xE00); 
CH451_Send3(0xD38); 
CH451_Send3(0xC5C); 
CH451_Send3(0xBDC); 
CH451_Send3(0xA5e); 
CH451_Send3(0x900); 
CH451_Send3(0x800); 
ch451_init_config4();
CH451_Send4(0xF00); 
CH451_Send4(0xE39); 
CH451_Send4(0xD09); 
CH451_Send4(0xC09); 
CH451_Send4(0xB09); 
CH451_Send4(0xA09); 
CH451_Send4(0x90f); 
CH451_Send4(0x800); 

delay(62);  // Frame delay
ch451_init_config4();
ch451_init_config4();
CH451_Send4(0xF00); 
CH451_Send4(0xE7f); 
CH451_Send4(0xD09); 
CH451_Send4(0xC09); 
CH451_Send4(0xB09); 
CH451_Send4(0xA09); 
CH451_Send4(0x90f); 
CH451_Send4(0x800); 


delay(77);  // Frame delay
ch451_init_config4();
CH451_Send4(0xF00); 
CH451_Send4(0xE7f); 
CH451_Send4(0xD7f); 
CH451_Send4(0xC09); 
CH451_Send4(0xB09); 
CH451_Send4(0xA09); 
CH451_Send4(0x90f); 
CH451_Send4(0x800); 


delay(82);  // Frame delay
ch451_init_config4();
CH451_Send4(0xF00); 
CH451_Send4(0xE7f); 
CH451_Send4(0xD7f); 
CH451_Send4(0xC7f); 
CH451_Send4(0xB09); 
CH451_Send4(0xA09); 
CH451_Send4(0x90f); 
CH451_Send4(0x800); 

delay(102);  // Frame delay
ch451_init_config4();
CH451_Send4(0xF00); 
CH451_Send4(0xE7f); 
CH451_Send4(0xD7f); 
CH451_Send4(0xC7f); 
CH451_Send4(0xB7f); 
CH451_Send4(0xA09); 
CH451_Send4(0x90f); 
CH451_Send4(0x800); 

delay(66);  // Frame delay
ch451_init_config4();
CH451_Send4(0xF00); 
CH451_Send4(0xE7f); 
CH451_Send4(0xD7f); 
CH451_Send4(0xC7f); 
CH451_Send4(0xB7f); 
CH451_Send4(0xA7f); 
CH451_Send4(0x90f); 
CH451_Send4(0x800); 

delay(111);  // Frame delay
ch451_init_config4();
CH451_Send4(0xF00); 
CH451_Send4(0xE7f); 
CH451_Send4(0xD7f); 
CH451_Send4(0xC7f); 
CH451_Send4(0xB7f); 
CH451_Send4(0xA7f); 
CH451_Send4(0x97f); 
CH451_Send4(0x800); 
}

void UI_clear(void)
{
ch451_init_config1();
CH451_Send1(0xF00); // Pos0->0
CH451_Send1(0xE00); // Pos1->0
CH451_Send1(0xD00); // Pos2->0
CH451_Send1(0xC00); // Pos3->0
CH451_Send1(0xB00); // Pos4->0
CH451_Send1(0xA00); // Pos5->0
CH451_Send1(0x900); // Pos6->0
CH451_Send1(0x800); // Pos7->0
ch451_init_config2();
CH451_Send2(0xF00); // Pos0->0
CH451_Send2(0xE00); // Pos1->0
CH451_Send2(0xD00); // Pos2->0
CH451_Send2(0xC00); // Pos3->0
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x800); // Pos7->0
ch451_init_config5();
CH451_Send5(0xF00); // Pos0->0
CH451_Send5(0xE00); // Pos1->0
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x800); // Pos7->0
ch451_init_config6();
CH451_Send6(0xF00); // Pos0->0
CH451_Send6(0xE00); // Pos1->0
CH451_Send6(0xD00); // Pos2->0
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

}


