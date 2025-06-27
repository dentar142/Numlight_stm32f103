#include "stm32f10x.h"                  // Device header
#include "headfile.h"


void ch451_init_config1() 
{
    CH451_Send1(0x201); 
	CH451_Send1(0x401);
    CH451_Send1(0x500);
    //CH451S_send(0x7F);

}

void ch451_init_config2() 
{
    CH451_Send2(0x201); 
	CH451_Send2(0x401);
    CH451_Send2(0x500);
    //CH451S_send(0x7F);

}

void ch451_init_config3() 
{
    CH451_Send3(0x201); 
	CH451_Send3(0x401);
    CH451_Send3(0x500);
    //CH451S_send(0x7F);

}

void ch451_init_config4() 
{
    CH451_Send4(0x201); 
	CH451_Send4(0x401);
    CH451_Send4(0x500);
    //CH451S_send(0x7F);

}

void ch451_init_config5() 
{
    CH451_Send5(0x201); 
	CH451_Send5(0x401);
    CH451_Send5(0x500);
    //CH451S_send(0x7F);

}

void ch451_init_config6() 
{
    CH451_Send6(0x201); 
	CH451_Send6(0x401);
    CH451_Send6(0x500);
    //CH451S_send(0x7F);

}



void bad_apple_show()
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

delay(62);  // Frame delay
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

delay(62);  // Frame delay
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

delay(62);  // Frame delay
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

delay(62);  // Frame delay
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

delay(62);  // Frame delay
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

delay(62);  // Frame delay
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

delay(62);  // Frame delay
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
CH451_Send3(0x84F); // Pos7->3
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x906); // Pos6->1
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF00); // Pos0->0
CH451_Send5(0xE00); // Pos1->0
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x807); // Pos7->7
ch451_init_config6();
CH451_Send6(0xF00); // Pos0->0
CH451_Send6(0xE00); // Pos1->0
CH451_Send6(0xD00); // Pos2->0
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x85B); // Pos7->2

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF00); // Pos0->0
CH451_Send1(0xE00); // Pos1->0
CH451_Send1(0xD00); // Pos2->0
CH451_Send1(0xC00); // Pos3->0
CH451_Send1(0xB00); // Pos4->0
CH451_Send1(0xA6D); // Pos5->5
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF00); // Pos0->0
CH451_Send2(0xE00); // Pos1->0
CH451_Send2(0xD00); // Pos2->0
CH451_Send2(0xC00); // Pos3->0
CH451_Send2(0xB06); // Pos4->1
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA4F); // Pos5->3
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x966); // Pos6->4
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF00); // Pos0->0
CH451_Send5(0xE00); // Pos1->0
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x906); // Pos6->1
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF00); // Pos0->0
CH451_Send6(0xE00); // Pos1->0
CH451_Send6(0xD00); // Pos2->0
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x87D); // Pos7->6

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE00); // Pos1->0
CH451_Send1(0xD00); // Pos2->0
CH451_Send1(0xC00); // Pos3->0
CH451_Send1(0xB00); // Pos4->0
CH451_Send1(0xA00); // Pos5->0
CH451_Send1(0x907); // Pos6->7
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF07); // Pos0->7
CH451_Send2(0xE00); // Pos1->0
CH451_Send2(0xD00); // Pos2->0
CH451_Send2(0xC00); // Pos3->0
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF07); // Pos0->7
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x97D); // Pos6->6
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6D); // Pos0->5
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x87F); // Pos7->8
ch451_init_config5();
CH451_Send5(0xF00); // Pos0->0
CH451_Send5(0xE00); // Pos1->0
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x87D); // Pos7->6
ch451_init_config6();
CH451_Send6(0xF00); // Pos0->0
CH451_Send6(0xE00); // Pos1->0
CH451_Send6(0xD00); // Pos2->0
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6D); // Pos2->5
CH451_Send1(0xC00); // Pos3->0
CH451_Send1(0xB00); // Pos4->0
CH451_Send1(0xA00); // Pos5->0
CH451_Send1(0x94F); // Pos6->3
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD66); // Pos2->4
CH451_Send2(0xC06); // Pos3->1
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x94F); // Pos6->3
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6D); // Pos2->5
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x95B); // Pos6->2
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD66); // Pos2->4
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x807); // Pos7->7
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE7F); // Pos1->8
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x85B); // Pos7->2
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6D); // Pos1->5
CH451_Send6(0xD00); // Pos2->0
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC06); // Pos3->1
CH451_Send1(0xB00); // Pos4->0
CH451_Send1(0xA00); // Pos5->0
CH451_Send1(0x906); // Pos6->1
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC5B); // Pos3->2
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x96D); // Pos6->5
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC5B); // Pos3->2
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x94F); // Pos6->3
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD7F); // Pos2->8
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x807); // Pos7->7
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6D); // Pos2->5
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x84F); // Pos7->3
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD4F); // Pos2->3
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x84F); // Pos7->3

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD07); // Pos2->7
CH451_Send1(0xC00); // Pos3->0
CH451_Send1(0xB00); // Pos4->0
CH451_Send1(0xA5B); // Pos5->2
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC00); // Pos3->0
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA4F); // Pos5->3
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD7D); // Pos2->6
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA5B); // Pos5->2
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD5B); // Pos2->2
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x97F); // Pos6->8
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA06); // Pos5->1
CH451_Send5(0x97D); // Pos6->6
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE7D); // Pos1->6
CH451_Send6(0xD00); // Pos2->0
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA06); // Pos5->1
CH451_Send6(0x96D); // Pos6->5
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD66); // Pos2->4
CH451_Send1(0xC00); // Pos3->0
CH451_Send1(0xB00); // Pos4->0
CH451_Send1(0xA66); // Pos5->4
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD7D); // Pos2->6
CH451_Send2(0xC00); // Pos3->0
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA7F); // Pos5->8
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD7D); // Pos2->6
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA7F); // Pos5->8
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD06); // Pos2->1
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA66); // Pos5->4
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE07); // Pos1->7
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA06); // Pos5->1
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE4F); // Pos1->3
CH451_Send6(0xD00); // Pos2->0
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x97F); // Pos6->8
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD06); // Pos2->1
CH451_Send1(0xC00); // Pos3->0
CH451_Send1(0xB06); // Pos4->1
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD66); // Pos2->4
CH451_Send2(0xC00); // Pos3->0
CH451_Send2(0xB6D); // Pos4->5
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD5B); // Pos2->2
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB66); // Pos4->4
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE7F); // Pos1->8
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE7D); // Pos1->6
CH451_Send5(0xD06); // Pos2->1
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA7F); // Pos5->8
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE06); // Pos1->1
CH451_Send6(0xD00); // Pos2->0
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA6D); // Pos5->5
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD5B); // Pos2->2
CH451_Send1(0xC00); // Pos3->0
CH451_Send1(0xB00); // Pos4->0
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD66); // Pos2->4
CH451_Send2(0xC00); // Pos3->0
CH451_Send2(0xB6D); // Pos4->5
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD66); // Pos2->4
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB66); // Pos4->4
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD5B); // Pos2->2
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD06); // Pos2->1
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA07); // Pos5->7
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE7D); // Pos1->6
CH451_Send6(0xD00); // Pos2->0
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA6D); // Pos5->5
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD07); // Pos2->7
CH451_Send1(0xC06); // Pos3->1
CH451_Send1(0xB00); // Pos4->0
CH451_Send1(0xA7F); // Pos5->8
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC00); // Pos3->0
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD7D); // Pos2->6
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA6D); // Pos5->5
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD66); // Pos2->4
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA5B); // Pos5->2
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6D); // Pos2->5
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC06); // Pos3->1
CH451_Send1(0xB00); // Pos4->0
CH451_Send1(0xA07); // Pos5->7
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC4F); // Pos3->3
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA7F); // Pos5->8
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC4F); // Pos3->3
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA07); // Pos5->7
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD7F); // Pos2->8
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA66); // Pos5->4
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD7D); // Pos2->6
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA06); // Pos5->1
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD7F); // Pos2->8
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC66); // Pos3->4
CH451_Send1(0xB5B); // Pos4->2
CH451_Send1(0xA6D); // Pos5->5
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6D); // Pos3->5
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA07); // Pos5->7
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC7D); // Pos3->6
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA07); // Pos5->7
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC06); // Pos3->1
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA66); // Pos5->4
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD07); // Pos2->7
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA06); // Pos5->1
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC5B); // Pos3->2
CH451_Send1(0xB5B); // Pos4->2
CH451_Send1(0xA7F); // Pos5->8
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC66); // Pos3->4
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC5B); // Pos3->2
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD7F); // Pos2->8
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB06); // Pos4->1
CH451_Send4(0xA7D); // Pos5->6
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6D); // Pos2->5
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB06); // Pos4->1
CH451_Send5(0xA66); // Pos5->4
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD7D); // Pos2->6
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA66); // Pos5->4
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC4F); // Pos3->3
CH451_Send1(0xB6D); // Pos4->5
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC06); // Pos3->1
CH451_Send2(0xB4F); // Pos4->3
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB4F); // Pos4->3
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD7D); // Pos2->6
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD5B); // Pos2->2
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA07); // Pos5->7
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD5B); // Pos2->2
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA7F); // Pos5->8
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD07); // Pos2->7
CH451_Send1(0xC4F); // Pos3->3
CH451_Send1(0xB6D); // Pos4->5
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC00); // Pos3->0
CH451_Send2(0xB6D); // Pos4->5
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD7F); // Pos2->8
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB6D); // Pos4->5
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6D); // Pos2->5
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB5B); // Pos4->2
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD06); // Pos2->1
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD06); // Pos2->1
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB06); // Pos4->1
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD7F); // Pos2->8
CH451_Send1(0xC4F); // Pos3->3
CH451_Send1(0xB66); // Pos4->4
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC00); // Pos3->0
CH451_Send2(0xB6D); // Pos4->5
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD7F); // Pos2->8
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB66); // Pos4->4
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD7D); // Pos2->6
CH451_Send4(0xC06); // Pos3->1
CH451_Send4(0xB06); // Pos4->1
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD4F); // Pos2->3
CH451_Send5(0xC06); // Pos3->1
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA7F); // Pos5->8
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6D); // Pos2->5
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC66); // Pos3->4
CH451_Send1(0xB4F); // Pos4->3
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC06); // Pos3->1
CH451_Send2(0xB5B); // Pos4->2
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC06); // Pos3->1
CH451_Send3(0xB5B); // Pos4->2
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD07); // Pos2->7
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA7F); // Pos5->8
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD7D); // Pos2->6
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA6D); // Pos5->5
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD07); // Pos2->7
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA7D); // Pos5->6
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC66); // Pos3->4
CH451_Send1(0xB5B); // Pos4->2
CH451_Send1(0xA7F); // Pos5->8
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC66); // Pos3->4
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC66); // Pos3->4
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA7F); // Pos5->8
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC06); // Pos3->1
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA6D); // Pos5->5
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD7F); // Pos2->8
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA5B); // Pos5->2
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC06); // Pos3->1
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA5B); // Pos5->2
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC7D); // Pos3->6
CH451_Send1(0xB66); // Pos4->4
CH451_Send1(0xA07); // Pos5->7
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC7D); // Pos3->6
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA7F); // Pos5->8
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC7D); // Pos3->6
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA7F); // Pos5->8
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC06); // Pos3->1
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA6D); // Pos5->5
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD7F); // Pos2->8
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA5B); // Pos5->2
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC06); // Pos3->1
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA5B); // Pos5->2
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC4F); // Pos3->3
CH451_Send1(0xB66); // Pos4->4
CH451_Send1(0xA7F); // Pos5->8
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC4F); // Pos3->3
CH451_Send2(0xB06); // Pos4->1
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC5B); // Pos3->2
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD7F); // Pos2->8
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB06); // Pos4->1
CH451_Send4(0xA07); // Pos5->7
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6D); // Pos2->5
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB06); // Pos4->1
CH451_Send5(0xA7D); // Pos5->6
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD7D); // Pos2->6
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA7D); // Pos5->6
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC4F); // Pos3->3
CH451_Send1(0xB6D); // Pos4->5
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC06); // Pos3->1
CH451_Send2(0xB5B); // Pos4->2
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC06); // Pos3->1
CH451_Send3(0xB5B); // Pos4->2
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD07); // Pos2->7
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA7F); // Pos5->8
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD4F); // Pos2->3
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA07); // Pos5->7
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD4F); // Pos2->3
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA7F); // Pos5->8
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC00); // Pos3->0
CH451_Send1(0xB5B); // Pos4->2
CH451_Send1(0xA4F); // Pos5->3
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC5B); // Pos3->2
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA6D); // Pos5->5
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC4F); // Pos3->3
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA07); // Pos5->7
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA4F); // Pos5->3
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD7F); // Pos2->8
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA5B); // Pos5->2
CH451_Send5(0x97F); // Pos6->8
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6D); // Pos2->5
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA06); // Pos5->1
CH451_Send6(0x966); // Pos6->4
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC4F); // Pos3->3
CH451_Send1(0xB06); // Pos4->1
CH451_Send1(0xA00); // Pos5->0
CH451_Send1(0x96D); // Pos6->5
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC66); // Pos3->4
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x97D); // Pos6->6
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC66); // Pos3->4
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA06); // Pos5->1
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6D); // Pos3->5
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA06); // Pos5->1
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC6D); // Pos3->5
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x95B); // Pos6->2
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC66); // Pos3->4
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA5B); // Pos5->2
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x87D); // Pos7->6

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB07); // Pos4->7
CH451_Send1(0xA4F); // Pos5->3
CH451_Send1(0x94F); // Pos6->3
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB06); // Pos4->1
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB66); // Pos4->4
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x807); // Pos7->7
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB7D); // Pos4->6
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x807); // Pos7->7
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD7F); // Pos2->8
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB4F); // Pos4->3
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x95B); // Pos6->2
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD00); // Pos2->0
CH451_Send6(0xC5B); // Pos3->2
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x807); // Pos7->7

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA66); // Pos5->4
CH451_Send1(0x97F); // Pos6->8
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB4F); // Pos4->3
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x95B); // Pos6->2
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB66); // Pos4->4
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB7F); // Pos4->8
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x87F); // Pos7->8
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD4F); // Pos2->3
CH451_Send5(0xC7D); // Pos3->6
CH451_Send5(0xB4F); // Pos4->3
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x966); // Pos6->4
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD7F); // Pos2->8
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x95B); // Pos6->2
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB7F); // Pos4->8
CH451_Send1(0xA6D); // Pos5->5
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB06); // Pos4->1
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x96D); // Pos6->5
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB5B); // Pos4->2
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x95B); // Pos6->2
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD7F); // Pos2->8
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB07); // Pos4->7
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x94F); // Pos6->3
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD4F); // Pos2->3
CH451_Send5(0xC66); // Pos3->4
CH451_Send5(0xB5B); // Pos4->2
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x97D); // Pos6->6
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD7D); // Pos2->6
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x94F); // Pos6->3
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB07); // Pos4->7
CH451_Send1(0xA7D); // Pos5->6
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB06); // Pos4->1
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x97D); // Pos6->6
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB06); // Pos4->1
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x966); // Pos6->4
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD7F); // Pos2->8
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB7D); // Pos4->6
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x966); // Pos6->4
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD4F); // Pos2->3
CH451_Send5(0xC66); // Pos3->4
CH451_Send5(0xB06); // Pos4->1
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x907); // Pos6->7
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD07); // Pos2->7
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x966); // Pos6->4
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB07); // Pos4->7
CH451_Send1(0xA7D); // Pos5->6
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB06); // Pos4->1
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x96D); // Pos6->5
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB06); // Pos4->1
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x94F); // Pos6->3
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD07); // Pos2->7
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB7D); // Pos4->6
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x966); // Pos6->4
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD4F); // Pos2->3
CH451_Send5(0xC4F); // Pos3->3
CH451_Send5(0xB5B); // Pos4->2
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x907); // Pos6->7
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD7F); // Pos2->8
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x966); // Pos6->4
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB7D); // Pos4->6
CH451_Send1(0xA66); // Pos5->4
CH451_Send1(0x97F); // Pos6->8
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x966); // Pos6->4
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB06); // Pos4->1
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x95B); // Pos6->2
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD07); // Pos2->7
CH451_Send4(0xC7F); // Pos3->8
CH451_Send4(0xB7D); // Pos4->6
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x95B); // Pos6->2
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6D); // Pos2->5
CH451_Send5(0xC5B); // Pos3->2
CH451_Send5(0xB5B); // Pos4->2
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x97D); // Pos6->6
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD7F); // Pos2->8
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x966); // Pos6->4
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB7D); // Pos4->6
CH451_Send1(0xA5B); // Pos5->2
CH451_Send1(0x907); // Pos6->7
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC7F); // Pos3->8
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x95B); // Pos6->2
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB06); // Pos4->1
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD07); // Pos2->7
CH451_Send4(0xC7D); // Pos3->6
CH451_Send4(0xB7D); // Pos4->6
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD07); // Pos2->7
CH451_Send5(0xC06); // Pos3->1
CH451_Send5(0xB4F); // Pos4->3
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x966); // Pos6->4
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD7F); // Pos2->8
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x95B); // Pos6->2
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB7D); // Pos4->6
CH451_Send1(0xA00); // Pos5->0
CH451_Send1(0x96D); // Pos6->5
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC7F); // Pos3->8
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB06); // Pos4->1
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x87F); // Pos7->8
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD7F); // Pos2->8
CH451_Send4(0xC66); // Pos3->4
CH451_Send4(0xB7D); // Pos4->6
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x807); // Pos7->7
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD7F); // Pos2->8
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB5B); // Pos4->2
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x95B); // Pos6->2
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x906); // Pos6->1
CH451_Send6(0x87F); // Pos7->8

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB7D); // Pos4->6
CH451_Send1(0xA00); // Pos5->0
CH451_Send1(0x94F); // Pos6->3
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC7F); // Pos3->8
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x87F); // Pos7->8
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB5B); // Pos4->2
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x87D); // Pos7->6
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC06); // Pos3->1
CH451_Send4(0xB6D); // Pos4->5
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x86D); // Pos7->5
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC5B); // Pos3->2
CH451_Send5(0xB06); // Pos4->1
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x906); // Pos6->1
CH451_Send5(0x87F); // Pos7->8
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC06); // Pos3->1
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x87F); // Pos7->8

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6D); // Pos4->5
CH451_Send1(0xA00); // Pos5->0
CH451_Send1(0x95B); // Pos6->2
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC7F); // Pos3->8
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x807); // Pos7->7
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB06); // Pos4->1
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x86D); // Pos7->5
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB4F); // Pos4->3
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x86D); // Pos7->5
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC4F); // Pos3->3
CH451_Send5(0xB06); // Pos4->1
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x87F); // Pos7->8
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC5B); // Pos3->2
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x87F); // Pos7->8

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6D); // Pos4->5
CH451_Send1(0xA00); // Pos5->0
CH451_Send1(0x94F); // Pos6->3
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC7F); // Pos3->8
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x87F); // Pos7->8
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB06); // Pos4->1
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x86D); // Pos7->5
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB4F); // Pos4->3
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x86D); // Pos7->5
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC4F); // Pos3->3
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x87F); // Pos7->8
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC5B); // Pos3->2
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x87F); // Pos7->8

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6D); // Pos4->5
CH451_Send1(0xA00); // Pos5->0
CH451_Send1(0x94F); // Pos6->3
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC7F); // Pos3->8
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x87F); // Pos7->8
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB06); // Pos4->1
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x87D); // Pos7->6
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB4F); // Pos4->3
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x86D); // Pos7->5
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC5B); // Pos3->2
CH451_Send5(0xB06); // Pos4->1
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x87F); // Pos7->8
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC5B); // Pos3->2
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x87F); // Pos7->8

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB66); // Pos4->4
CH451_Send1(0xA00); // Pos5->0
CH451_Send1(0x966); // Pos6->4
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC7D); // Pos3->6
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC7F); // Pos3->8
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x87D); // Pos7->6
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD7F); // Pos2->8
CH451_Send4(0xC06); // Pos3->1
CH451_Send4(0xB66); // Pos4->4
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x87D); // Pos7->6
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC06); // Pos3->1
CH451_Send5(0xB06); // Pos4->1
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC06); // Pos3->1
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x87F); // Pos7->8

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB5B); // Pos4->2
CH451_Send1(0xA00); // Pos5->0
CH451_Send1(0x97D); // Pos6->6
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6D); // Pos3->5
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x906); // Pos6->1
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC07); // Pos3->7
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x87F); // Pos7->8
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD07); // Pos2->7
CH451_Send4(0xC5B); // Pos3->2
CH451_Send4(0xB4F); // Pos4->3
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x807); // Pos7->7
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD7F); // Pos2->8
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB5B); // Pos4->2
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x95B); // Pos6->2
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x906); // Pos6->1
CH451_Send6(0x87F); // Pos7->8

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC7F); // Pos3->8
CH451_Send1(0xB00); // Pos4->0
CH451_Send1(0xA00); // Pos5->0
CH451_Send1(0x97D); // Pos6->6
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC66); // Pos3->4
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x95B); // Pos6->2
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC7D); // Pos3->6
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD7F); // Pos2->8
CH451_Send4(0xC7F); // Pos3->8
CH451_Send4(0xB4F); // Pos4->3
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x906); // Pos6->1
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD4F); // Pos2->3
CH451_Send5(0xC5B); // Pos3->2
CH451_Send5(0xB4F); // Pos4->3
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x94F); // Pos6->3
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD7F); // Pos2->8
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x94F); // Pos6->3
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC06); // Pos3->1
CH451_Send1(0xB00); // Pos4->0
CH451_Send1(0xA00); // Pos5->0
CH451_Send1(0x97F); // Pos6->8
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC06); // Pos3->1
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x94F); // Pos6->3
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC66); // Pos3->4
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x906); // Pos6->1
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB06); // Pos4->1
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x95B); // Pos6->2
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD7F); // Pos2->8
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB4F); // Pos4->3
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x95B); // Pos6->2
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6D); // Pos1->5
CH451_Send6(0xD06); // Pos2->1
CH451_Send6(0xC7D); // Pos3->6
CH451_Send6(0xB5B); // Pos4->2
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC7D); // Pos3->6
CH451_Send1(0xB7D); // Pos4->6
CH451_Send1(0xA66); // Pos5->4
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC5B); // Pos3->2
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x966); // Pos6->4
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC4F); // Pos3->3
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x906); // Pos6->1
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC07); // Pos3->7
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC07); // Pos3->7
CH451_Send5(0xB6D); // Pos4->5
CH451_Send5(0xA5B); // Pos5->2
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x807); // Pos7->7
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC7F); // Pos3->8
CH451_Send6(0xB6F); // Pos4->9
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x84F); // Pos7->3

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA7F); // Pos5->8
CH451_Send1(0x97D); // Pos6->6
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB6F); // Pos4->9
CH451_Send2(0xA5B); // Pos5->2
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x806); // Pos7->1
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB6D); // Pos4->5
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB6F); // Pos4->9
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x800); // Pos7->0
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB6F); // Pos4->9
CH451_Send5(0xA66); // Pos5->4
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x800); // Pos7->0
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB6F); // Pos4->9
CH451_Send6(0xA7F); // Pos5->8
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86D); // Pos7->5
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB6F); // Pos4->9
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE07); // Pos1->7
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB6F); // Pos4->9
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD5B); // Pos2->2
CH451_Send4(0xC5B); // Pos3->2
CH451_Send4(0xB6D); // Pos4->5
CH451_Send4(0xA4F); // Pos5->3
CH451_Send4(0x94F); // Pos6->3
CH451_Send4(0x800); // Pos7->0
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6D); // Pos1->5
CH451_Send5(0xD4F); // Pos2->3
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA5B); // Pos5->2
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x800); // Pos7->0
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6D); // Pos2->5
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA06); // Pos5->1
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB6F); // Pos4->9
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB6F); // Pos4->9
CH451_Send3(0xA7F); // Pos5->8
CH451_Send3(0x97F); // Pos6->8
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB6F); // Pos4->9
CH451_Send4(0xA6D); // Pos5->5
CH451_Send4(0x966); // Pos6->4
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB7D); // Pos4->6
CH451_Send5(0xA06); // Pos5->1
CH451_Send5(0x966); // Pos6->4
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB06); // Pos4->1
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x96D); // Pos6->5
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC5B); // Pos3->2
CH451_Send1(0xB6D); // Pos4->5
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC4F); // Pos3->3
CH451_Send2(0xB7D); // Pos4->6
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB6F); // Pos4->9
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB6F); // Pos4->9
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB6F); // Pos4->9
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB6F); // Pos4->9
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC7D); // Pos3->6
CH451_Send2(0xB6D); // Pos4->5
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC5B); // Pos3->2
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC7F); // Pos3->8
CH451_Send4(0xB07); // Pos4->7
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB6F); // Pos4->9
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB6F); // Pos4->9
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB6F); // Pos4->9
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB7F); // Pos4->8
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6D); // Pos3->5
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA07); // Pos5->7
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC7D); // Pos3->6
CH451_Send5(0xB06); // Pos4->1
CH451_Send5(0xA7F); // Pos5->8
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB6F); // Pos4->9
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB6F); // Pos4->9
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB6F); // Pos4->9
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC07); // Pos3->7
CH451_Send4(0xB5B); // Pos4->2
CH451_Send4(0xA7F); // Pos5->8
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC66); // Pos3->4
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA7D); // Pos5->6
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB07); // Pos4->7
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB6F); // Pos4->9
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC07); // Pos3->7
CH451_Send3(0xB4F); // Pos4->3
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC4F); // Pos3->3
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA7D); // Pos5->6
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC7F); // Pos3->8
CH451_Send5(0xB6D); // Pos4->5
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB6F); // Pos4->9
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC07); // Pos3->7
CH451_Send2(0xB6D); // Pos4->5
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC06); // Pos3->1
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA07); // Pos5->7
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC7D); // Pos3->6
CH451_Send4(0xB4F); // Pos4->3
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB6F); // Pos4->9
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB6F); // Pos4->9
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC07); // Pos3->7
CH451_Send2(0xB66); // Pos4->4
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC06); // Pos3->1
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA7D); // Pos5->6
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC7D); // Pos3->6
CH451_Send4(0xB4F); // Pos4->3
CH451_Send4(0xA7F); // Pos5->8
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB6F); // Pos4->9
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB6F); // Pos4->9
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB7D); // Pos4->6
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC66); // Pos3->4
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA66); // Pos5->4
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6D); // Pos3->5
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA6D); // Pos5->5
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB6F); // Pos4->9
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB6F); // Pos4->9
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB6F); // Pos4->9
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC07); // Pos3->7
CH451_Send3(0xB06); // Pos4->1
CH451_Send3(0xA66); // Pos5->4
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6D); // Pos3->5
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA5B); // Pos5->2
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB6D); // Pos4->5
CH451_Send5(0xA7F); // Pos5->8
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB6F); // Pos4->9
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB6F); // Pos4->9
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC7D); // Pos3->6
CH451_Send3(0xB5B); // Pos4->2
CH451_Send3(0xA7D); // Pos5->6
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC4F); // Pos3->3
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA4F); // Pos5->3
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC7F); // Pos3->8
CH451_Send5(0xB6D); // Pos4->5
CH451_Send5(0xA7F); // Pos5->8
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB6F); // Pos4->9
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF00); // Pos0->0
CH451_Send1(0xE00); // Pos1->0
CH451_Send1(0xD06); // Pos2->1
CH451_Send1(0xC7D); // Pos3->6
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF00); // Pos0->0
CH451_Send2(0xE00); // Pos1->0
CH451_Send2(0xD00); // Pos2->0
CH451_Send2(0xC5B); // Pos3->2
CH451_Send2(0xB7D); // Pos4->6
CH451_Send2(0xA5B); // Pos5->2
CH451_Send2(0x97F); // Pos6->8
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC66); // Pos3->4
CH451_Send3(0xB6F); // Pos4->9
CH451_Send3(0xA06); // Pos5->1
CH451_Send3(0x906); // Pos6->1
CH451_Send3(0x84F); // Pos7->3
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC7F); // Pos3->8
CH451_Send4(0xB6F); // Pos4->9
CH451_Send4(0xA66); // Pos5->4
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x800); // Pos7->0
ch451_init_config5();
CH451_Send5(0xF00); // Pos0->0
CH451_Send5(0xE00); // Pos1->0
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC06); // Pos3->1
CH451_Send5(0xB6D); // Pos4->5
CH451_Send5(0xA06); // Pos5->1
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

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF00); // Pos0->0
CH451_Send1(0xE00); // Pos1->0
CH451_Send1(0xD06); // Pos2->1
CH451_Send1(0xC7D); // Pos3->6
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF00); // Pos0->0
CH451_Send2(0xE00); // Pos1->0
CH451_Send2(0xD00); // Pos2->0
CH451_Send2(0xC5B); // Pos3->2
CH451_Send2(0xB7D); // Pos4->6
CH451_Send2(0xA5B); // Pos5->2
CH451_Send2(0x97F); // Pos6->8
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC66); // Pos3->4
CH451_Send3(0xB6F); // Pos4->9
CH451_Send3(0xA06); // Pos5->1
CH451_Send3(0x906); // Pos6->1
CH451_Send3(0x84F); // Pos7->3
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC7F); // Pos3->8
CH451_Send4(0xB6F); // Pos4->9
CH451_Send4(0xA66); // Pos5->4
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x800); // Pos7->0
ch451_init_config5();
CH451_Send5(0xF00); // Pos0->0
CH451_Send5(0xE00); // Pos1->0
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC06); // Pos3->1
CH451_Send5(0xB6D); // Pos4->5
CH451_Send5(0xA06); // Pos5->1
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

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF7F); // Pos0->8
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF07); // Pos0->7
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB6F); // Pos4->9
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF7F); // Pos0->8
CH451_Send3(0xE07); // Pos1->7
CH451_Send3(0xD6D); // Pos2->5
CH451_Send3(0xC7D); // Pos3->6
CH451_Send3(0xB6F); // Pos4->9
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x966); // Pos6->4
CH451_Send3(0x807); // Pos7->7
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE66); // Pos1->4
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB5B); // Pos4->2
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x800); // Pos7->0
ch451_init_config5();
CH451_Send5(0xF6D); // Pos0->5
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

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF00); // Pos0->0
CH451_Send1(0xE06); // Pos1->1
CH451_Send1(0xD00); // Pos2->0
CH451_Send1(0xC00); // Pos3->0
CH451_Send1(0xB00); // Pos4->0
CH451_Send1(0xA00); // Pos5->0
CH451_Send1(0x900); // Pos6->0
CH451_Send1(0x800); // Pos7->0
ch451_init_config2();
CH451_Send2(0xF7D); // Pos0->6
CH451_Send2(0xE07); // Pos1->7
CH451_Send2(0xD00); // Pos2->0
CH451_Send2(0xC00); // Pos3->0
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD4F); // Pos2->3
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB5B); // Pos4->2
CH451_Send3(0xA4F); // Pos5->3
CH451_Send3(0x94F); // Pos6->3
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB6F); // Pos4->9
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x807); // Pos7->7
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB6F); // Pos4->9
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF4F); // Pos0->3
CH451_Send6(0xE7D); // Pos1->6
CH451_Send6(0xD5B); // Pos2->2
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB06); // Pos4->1
CH451_Send6(0xA4F); // Pos5->3
CH451_Send6(0x96D); // Pos6->5
CH451_Send6(0x85B); // Pos7->2

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC7F); // Pos3->8
CH451_Send1(0xB06); // Pos4->1
CH451_Send1(0xA00); // Pos5->0
CH451_Send1(0x900); // Pos6->0
CH451_Send1(0x800); // Pos7->0
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC07); // Pos3->7
CH451_Send2(0xB5B); // Pos4->2
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD7F); // Pos2->8
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB5B); // Pos4->2
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF07); // Pos0->7
CH451_Send4(0xE7F); // Pos1->8
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB07); // Pos4->7
CH451_Send4(0xA7D); // Pos5->6
CH451_Send4(0x94F); // Pos6->3
CH451_Send4(0x84F); // Pos7->3
ch451_init_config5();
CH451_Send5(0xF07); // Pos0->7
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB6F); // Pos4->9
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB6F); // Pos4->9
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF00); // Pos0->0
CH451_Send1(0xE00); // Pos1->0
CH451_Send1(0xD00); // Pos2->0
CH451_Send1(0xC7D); // Pos3->6
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF00); // Pos0->0
CH451_Send2(0xE00); // Pos1->0
CH451_Send2(0xD4F); // Pos2->3
CH451_Send2(0xC00); // Pos3->0
CH451_Send2(0xB7F); // Pos4->8
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x87D); // Pos7->6
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE06); // Pos1->1
CH451_Send3(0xD7F); // Pos2->8
CH451_Send3(0xC4F); // Pos3->3
CH451_Send3(0xB6F); // Pos4->9
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x907); // Pos6->7
CH451_Send3(0x84F); // Pos7->3
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC7D); // Pos3->6
CH451_Send4(0xB6F); // Pos4->9
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF00); // Pos0->0
CH451_Send5(0xE00); // Pos1->0
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC6D); // Pos3->5
CH451_Send5(0xB4F); // Pos4->3
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF66); // Pos0->4
CH451_Send6(0xE4F); // Pos1->3
CH451_Send6(0xD66); // Pos2->4
CH451_Send6(0xC07); // Pos3->7
CH451_Send6(0xB07); // Pos4->7
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF00); // Pos0->0
CH451_Send1(0xE00); // Pos1->0
CH451_Send1(0xD00); // Pos2->0
CH451_Send1(0xC7D); // Pos3->6
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF00); // Pos0->0
CH451_Send2(0xE00); // Pos1->0
CH451_Send2(0xD00); // Pos2->0
CH451_Send2(0xC00); // Pos3->0
CH451_Send2(0xB4F); // Pos4->3
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC66); // Pos3->4
CH451_Send3(0xB4F); // Pos4->3
CH451_Send3(0xA66); // Pos5->4
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC4F); // Pos3->3
CH451_Send4(0xB7D); // Pos4->6
CH451_Send4(0xA7D); // Pos5->6
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF00); // Pos0->0
CH451_Send5(0xE00); // Pos1->0
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB5B); // Pos4->2
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF00); // Pos0->0
CH451_Send6(0xE00); // Pos1->0
CH451_Send6(0xD00); // Pos2->0
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB06); // Pos4->1
CH451_Send6(0xA7D); // Pos5->6
CH451_Send6(0x96D); // Pos6->5
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF00); // Pos0->0
CH451_Send1(0xE00); // Pos1->0
CH451_Send1(0xD6D); // Pos2->5
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x87F); // Pos7->8
ch451_init_config2();
CH451_Send2(0xF00); // Pos0->0
CH451_Send2(0xE00); // Pos1->0
CH451_Send2(0xD00); // Pos2->0
CH451_Send2(0xC5B); // Pos3->2
CH451_Send2(0xB7F); // Pos4->8
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC4F); // Pos3->3
CH451_Send3(0xB66); // Pos4->4
CH451_Send3(0xA7F); // Pos5->8
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC07); // Pos3->7
CH451_Send4(0xB6D); // Pos4->5
CH451_Send4(0xA66); // Pos5->4
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF00); // Pos0->0
CH451_Send5(0xE00); // Pos1->0
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB7D); // Pos4->6
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF00); // Pos0->0
CH451_Send6(0xE00); // Pos1->0
CH451_Send6(0xD00); // Pos2->0
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB66); // Pos4->4
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF00); // Pos0->0
CH451_Send1(0xE00); // Pos1->0
CH451_Send1(0xD66); // Pos2->4
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB07); // Pos4->7
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF00); // Pos0->0
CH451_Send2(0xE00); // Pos1->0
CH451_Send2(0xD00); // Pos2->0
CH451_Send2(0xC6D); // Pos3->5
CH451_Send2(0xB6F); // Pos4->9
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x87F); // Pos7->8
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB07); // Pos4->7
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC4F); // Pos3->3
CH451_Send4(0xB6F); // Pos4->9
CH451_Send4(0xA07); // Pos5->7
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF00); // Pos0->0
CH451_Send5(0xE00); // Pos1->0
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB7D); // Pos4->6
CH451_Send5(0xA7F); // Pos5->8
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF00); // Pos0->0
CH451_Send6(0xE00); // Pos1->0
CH451_Send6(0xD00); // Pos2->0
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB5B); // Pos4->2
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF00); // Pos0->0
CH451_Send1(0xE00); // Pos1->0
CH451_Send1(0xD07); // Pos2->7
CH451_Send1(0xC6D); // Pos3->5
CH451_Send1(0xB6D); // Pos4->5
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x807); // Pos7->7
ch451_init_config2();
CH451_Send2(0xF00); // Pos0->0
CH451_Send2(0xE5B); // Pos1->2
CH451_Send2(0xD7F); // Pos2->8
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB6F); // Pos4->9
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x84F); // Pos7->3
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC66); // Pos3->4
CH451_Send3(0xB6F); // Pos4->9
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC06); // Pos3->1
CH451_Send4(0xB6F); // Pos4->9
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF00); // Pos0->0
CH451_Send5(0xE00); // Pos1->0
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC06); // Pos3->1
CH451_Send5(0xB7D); // Pos4->6
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF00); // Pos0->0
CH451_Send6(0xE00); // Pos1->0
CH451_Send6(0xD00); // Pos2->0
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB06); // Pos4->1
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x87F); // Pos7->8

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF00); // Pos0->0
CH451_Send1(0xE00); // Pos1->0
CH451_Send1(0xD00); // Pos2->0
CH451_Send1(0xC00); // Pos3->0
CH451_Send1(0xB5B); // Pos4->2
CH451_Send1(0xA6D); // Pos5->5
CH451_Send1(0x95B); // Pos6->2
CH451_Send1(0x800); // Pos7->0
ch451_init_config2();
CH451_Send2(0xF00); // Pos0->0
CH451_Send2(0xE00); // Pos1->0
CH451_Send2(0xD7D); // Pos2->6
CH451_Send2(0xC07); // Pos3->7
CH451_Send2(0xB6F); // Pos4->9
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x966); // Pos6->4
CH451_Send2(0x806); // Pos7->1
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD06); // Pos2->1
CH451_Send3(0xC6D); // Pos3->5
CH451_Send3(0xB6F); // Pos4->9
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x807); // Pos7->7
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC4F); // Pos3->3
CH451_Send4(0xB7F); // Pos4->8
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF00); // Pos0->0
CH451_Send5(0xE00); // Pos1->0
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB07); // Pos4->7
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x907); // Pos6->7
CH451_Send5(0x87D); // Pos7->6
ch451_init_config6();
CH451_Send6(0xF00); // Pos0->0
CH451_Send6(0xE00); // Pos1->0
CH451_Send6(0xD00); // Pos2->0
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB7D); // Pos4->6
CH451_Send6(0xA07); // Pos5->7
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
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
CH451_Send2(0xD06); // Pos2->1
CH451_Send2(0xC07); // Pos3->7
CH451_Send2(0xB6F); // Pos4->9
CH451_Send2(0xA7D); // Pos5->6
CH451_Send2(0x906); // Pos6->1
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC4F); // Pos3->3
CH451_Send3(0xB6F); // Pos4->9
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96D); // Pos6->5
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC06); // Pos3->1
CH451_Send4(0xB7F); // Pos4->8
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x97D); // Pos6->6
CH451_Send4(0x806); // Pos7->1
ch451_init_config5();
CH451_Send5(0xF00); // Pos0->0
CH451_Send5(0xE00); // Pos1->0
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB7D); // Pos4->6
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x84F); // Pos7->3
ch451_init_config6();
CH451_Send6(0xF6D); // Pos0->5
CH451_Send6(0xE66); // Pos1->4
CH451_Send6(0xD4F); // Pos2->3
CH451_Send6(0xC66); // Pos3->4
CH451_Send6(0xB07); // Pos4->7
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x807); // Pos7->7

delay(62);  // Frame delay
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
CH451_Send2(0xC66); // Pos3->4
CH451_Send2(0xB7D); // Pos4->6
CH451_Send2(0xA06); // Pos5->1
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC06); // Pos3->1
CH451_Send3(0xB6F); // Pos4->9
CH451_Send3(0xA6D); // Pos5->5
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE06); // Pos1->1
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB07); // Pos4->7
CH451_Send4(0xA7F); // Pos5->8
CH451_Send4(0x94F); // Pos6->3
CH451_Send4(0x85B); // Pos7->2
ch451_init_config5();
CH451_Send5(0xF00); // Pos0->0
CH451_Send5(0xE5B); // Pos1->2
CH451_Send5(0xD4F); // Pos2->3
CH451_Send5(0xC4F); // Pos3->3
CH451_Send5(0xB7D); // Pos4->6
CH451_Send5(0xA7F); // Pos5->8
CH451_Send5(0x907); // Pos6->7
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF00); // Pos0->0
CH451_Send6(0xE00); // Pos1->0
CH451_Send6(0xD00); // Pos2->0
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

delay(62);  // Frame delay
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
CH451_Send2(0xC5B); // Pos3->2
CH451_Send2(0xB6D); // Pos4->5
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB7F); // Pos4->8
CH451_Send3(0xA4F); // Pos5->3
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE06); // Pos1->1
CH451_Send4(0xD4F); // Pos2->3
CH451_Send4(0xC5B); // Pos3->2
CH451_Send4(0xB7F); // Pos4->8
CH451_Send4(0xA7F); // Pos5->8
CH451_Send4(0x907); // Pos6->7
CH451_Send4(0x84F); // Pos7->3
ch451_init_config5();
CH451_Send5(0xF00); // Pos0->0
CH451_Send5(0xE00); // Pos1->0
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x906); // Pos6->1
CH451_Send5(0x806); // Pos7->1
ch451_init_config6();
CH451_Send6(0xF00); // Pos0->0
CH451_Send6(0xE00); // Pos1->0
CH451_Send6(0xD00); // Pos2->0
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

delay(62);  // Frame delay
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
CH451_Send2(0xC06); // Pos3->1
CH451_Send2(0xB66); // Pos4->4
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD06); // Pos2->1
CH451_Send3(0xC06); // Pos3->1
CH451_Send3(0xB7F); // Pos4->8
CH451_Send3(0xA5B); // Pos5->2
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC06); // Pos3->1
CH451_Send4(0xB4F); // Pos4->3
CH451_Send4(0xA4F); // Pos5->3
CH451_Send4(0x95B); // Pos6->2
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

delay(62);  // Frame delay
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
CH451_Send2(0xC06); // Pos3->1
CH451_Send2(0xB4F); // Pos4->3
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC5B); // Pos3->2
CH451_Send3(0xB07); // Pos4->7
CH451_Send3(0xA4F); // Pos5->3
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA06); // Pos5->1
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

delay(62);  // Frame delay
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
CH451_Send2(0xC06); // Pos3->1
CH451_Send2(0xB4F); // Pos4->3
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC06); // Pos3->1
CH451_Send3(0xB07); // Pos4->7
CH451_Send3(0xA66); // Pos5->4
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA06); // Pos5->1
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

delay(62);  // Frame delay
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
CH451_Send2(0xC06); // Pos3->1
CH451_Send2(0xB4F); // Pos4->3
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC06); // Pos3->1
CH451_Send3(0xB07); // Pos4->7
CH451_Send3(0xA66); // Pos5->4
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

delay(62);  // Frame delay
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
CH451_Send2(0xC5B); // Pos3->2
CH451_Send2(0xB4F); // Pos4->3
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD06); // Pos2->1
CH451_Send3(0xC5B); // Pos3->2
CH451_Send3(0xB07); // Pos4->7
CH451_Send3(0xA6D); // Pos5->5
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

delay(62);  // Frame delay
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
CH451_Send2(0xC5B); // Pos3->2
CH451_Send2(0xB4F); // Pos4->3
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD06); // Pos2->1
CH451_Send3(0xC5B); // Pos3->2
CH451_Send3(0xB7D); // Pos4->6
CH451_Send3(0xA6D); // Pos5->5
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

delay(62);  // Frame delay
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
CH451_Send2(0xC5B); // Pos3->2
CH451_Send2(0xB4F); // Pos4->3
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD06); // Pos2->1
CH451_Send3(0xC5B); // Pos3->2
CH451_Send3(0xB07); // Pos4->7
CH451_Send3(0xA66); // Pos5->4
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

delay(62);  // Frame delay
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
CH451_Send2(0xC5B); // Pos3->2
CH451_Send2(0xB5B); // Pos4->2
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD06); // Pos2->1
CH451_Send3(0xC5B); // Pos3->2
CH451_Send3(0xB07); // Pos4->7
CH451_Send3(0xA4F); // Pos5->3
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB06); // Pos4->1
CH451_Send4(0xA06); // Pos5->1
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

delay(62);  // Frame delay
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
CH451_Send2(0xC06); // Pos3->1
CH451_Send2(0xB06); // Pos4->1
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD06); // Pos2->1
CH451_Send3(0xC5B); // Pos3->2
CH451_Send3(0xB7D); // Pos4->6
CH451_Send3(0xA06); // Pos5->1
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB5B); // Pos4->2
CH451_Send4(0xA4F); // Pos5->3
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

delay(62);  // Frame delay
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
CH451_Send2(0xC06); // Pos3->1
CH451_Send2(0xB06); // Pos4->1
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD06); // Pos2->1
CH451_Send3(0xC5B); // Pos3->2
CH451_Send3(0xB07); // Pos4->7
CH451_Send3(0xA5B); // Pos5->2
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB5B); // Pos4->2
CH451_Send4(0xA4F); // Pos5->3
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

delay(62);  // Frame delay
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
CH451_Send2(0xC06); // Pos3->1
CH451_Send2(0xB4F); // Pos4->3
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC5B); // Pos3->2
CH451_Send3(0xB07); // Pos4->7
CH451_Send3(0xA4F); // Pos5->3
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA06); // Pos5->1
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

delay(62);  // Frame delay
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
CH451_Send2(0xC06); // Pos3->1
CH451_Send2(0xB66); // Pos4->4
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC06); // Pos3->1
CH451_Send3(0xB07); // Pos4->7
CH451_Send3(0xA6D); // Pos5->5
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

delay(62);  // Frame delay
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
CH451_Send2(0xB7D); // Pos4->6
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC06); // Pos3->1
CH451_Send3(0xB7D); // Pos4->6
CH451_Send3(0xA6D); // Pos5->5
CH451_Send3(0x94F); // Pos6->3
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

delay(62);  // Frame delay
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
CH451_Send2(0xB06); // Pos4->1
CH451_Send2(0xA07); // Pos5->7
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC06); // Pos3->1
CH451_Send3(0xB5B); // Pos4->2
CH451_Send3(0xA7F); // Pos5->8
CH451_Send3(0x96D); // Pos6->5
CH451_Send3(0x866); // Pos7->4
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x806); // Pos7->1
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

delay(62);  // Frame delay
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
CH451_Send2(0xA7D); // Pos5->6
CH451_Send2(0x906); // Pos6->1
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA6D); // Pos5->5
CH451_Send3(0x96D); // Pos6->5
CH451_Send3(0x84F); // Pos7->3
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB06); // Pos4->1
CH451_Send4(0xA4F); // Pos5->3
CH451_Send4(0x96D); // Pos6->5
CH451_Send4(0x87D); // Pos7->6
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

delay(62);  // Frame delay
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
CH451_Send2(0xA4F); // Pos5->3
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA07); // Pos5->7
CH451_Send3(0x95B); // Pos6->2
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB06); // Pos4->1
CH451_Send4(0xA7D); // Pos5->6
CH451_Send4(0x907); // Pos6->7
CH451_Send4(0x800); // Pos7->0
ch451_init_config5();
CH451_Send5(0xF66); // Pos0->4
CH451_Send5(0xE66); // Pos1->4
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x800); // Pos7->0
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD00); // Pos2->0
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

delay(62);  // Frame delay
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
CH451_Send2(0xA5B); // Pos5->2
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA07); // Pos5->7
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA6D); // Pos5->5
CH451_Send4(0x94F); // Pos6->3
CH451_Send4(0x800); // Pos7->0
ch451_init_config5();
CH451_Send5(0xF07); // Pos0->7
CH451_Send5(0xE6D); // Pos1->5
CH451_Send5(0xD4F); // Pos2->3
CH451_Send5(0xC06); // Pos3->1
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x800); // Pos7->0
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC06); // Pos3->1
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

delay(62);  // Frame delay
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
CH451_Send2(0xA4F); // Pos5->3
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA07); // Pos5->7
CH451_Send3(0x906); // Pos6->1
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA6D); // Pos5->5
CH451_Send4(0x95B); // Pos6->2
CH451_Send4(0x800); // Pos7->0
ch451_init_config5();
CH451_Send5(0xF07); // Pos0->7
CH451_Send5(0xE6D); // Pos1->5
CH451_Send5(0xD4F); // Pos2->3
CH451_Send5(0xC06); // Pos3->1
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x800); // Pos7->0
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC06); // Pos3->1
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

delay(62);  // Frame delay
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
CH451_Send2(0xA4F); // Pos5->3
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA07); // Pos5->7
CH451_Send3(0x906); // Pos6->1
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF06); // Pos0->1
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA4F); // Pos5->3
CH451_Send4(0x906); // Pos6->1
CH451_Send4(0x800); // Pos7->0
ch451_init_config5();
CH451_Send5(0xF07); // Pos0->7
CH451_Send5(0xE6D); // Pos1->5
CH451_Send5(0xD5B); // Pos2->2
CH451_Send5(0xC5B); // Pos3->2
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x800); // Pos7->0
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC5B); // Pos3->2
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

delay(62);  // Frame delay
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
CH451_Send2(0xB06); // Pos4->1
CH451_Send2(0xA4F); // Pos5->3
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB06); // Pos4->1
CH451_Send3(0xA7F); // Pos5->8
CH451_Send3(0x906); // Pos6->1
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF06); // Pos0->1
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA4F); // Pos5->3
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x800); // Pos7->0
ch451_init_config5();
CH451_Send5(0xF7D); // Pos0->6
CH451_Send5(0xE7D); // Pos1->6
CH451_Send5(0xD5B); // Pos2->2
CH451_Send5(0xC5B); // Pos3->2
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x800); // Pos7->0
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC4F); // Pos3->3
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

delay(62);  // Frame delay
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
CH451_Send2(0xB06); // Pos4->1
CH451_Send2(0xA5B); // Pos5->2
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB06); // Pos4->1
CH451_Send3(0xA07); // Pos5->7
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF06); // Pos0->1
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB06); // Pos4->1
CH451_Send4(0xA66); // Pos5->4
CH451_Send4(0x906); // Pos6->1
CH451_Send4(0x800); // Pos7->0
ch451_init_config5();
CH451_Send5(0xF7D); // Pos0->6
CH451_Send5(0xE7D); // Pos1->6
CH451_Send5(0xD5B); // Pos2->2
CH451_Send5(0xC5B); // Pos3->2
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x800); // Pos7->0
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC66); // Pos3->4
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

delay(62);  // Frame delay
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
CH451_Send2(0xB06); // Pos4->1
CH451_Send2(0xA5B); // Pos5->2
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB06); // Pos4->1
CH451_Send3(0xA7D); // Pos5->6
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF06); // Pos0->1
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB06); // Pos4->1
CH451_Send4(0xA6D); // Pos5->5
CH451_Send4(0x906); // Pos6->1
CH451_Send4(0x800); // Pos7->0
ch451_init_config5();
CH451_Send5(0xF7D); // Pos0->6
CH451_Send5(0xE7D); // Pos1->6
CH451_Send5(0xD5B); // Pos2->2
CH451_Send5(0xC4F); // Pos3->3
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x800); // Pos7->0
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6D); // Pos3->5
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

delay(62);  // Frame delay
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
CH451_Send2(0xA06); // Pos5->1
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB06); // Pos4->1
CH451_Send3(0xA6D); // Pos5->5
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF06); // Pos0->1
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB5B); // Pos4->2
CH451_Send4(0xA7D); // Pos5->6
CH451_Send4(0x906); // Pos6->1
CH451_Send4(0x800); // Pos7->0
ch451_init_config5();
CH451_Send5(0xF7D); // Pos0->6
CH451_Send5(0xE07); // Pos1->7
CH451_Send5(0xD4F); // Pos2->3
CH451_Send5(0xC4F); // Pos3->3
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x800); // Pos7->0
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC7D); // Pos3->6
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

delay(62);  // Frame delay
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
CH451_Send2(0xB06); // Pos4->1
CH451_Send2(0xA06); // Pos5->1
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB06); // Pos4->1
CH451_Send3(0xA6D); // Pos5->5
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF06); // Pos0->1
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB06); // Pos4->1
CH451_Send4(0xA7D); // Pos5->6
CH451_Send4(0x906); // Pos6->1
CH451_Send4(0x800); // Pos7->0
ch451_init_config5();
CH451_Send5(0xF7D); // Pos0->6
CH451_Send5(0xE07); // Pos1->7
CH451_Send5(0xD4F); // Pos2->3
CH451_Send5(0xC4F); // Pos3->3
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x800); // Pos7->0
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC7D); // Pos3->6
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

delay(62);  // Frame delay
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
CH451_Send2(0xB06); // Pos4->1
CH451_Send2(0xA06); // Pos5->1
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB5B); // Pos4->2
CH451_Send3(0xA7D); // Pos5->6
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF06); // Pos0->1
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB06); // Pos4->1
CH451_Send4(0xA66); // Pos5->4
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x800); // Pos7->0
ch451_init_config5();
CH451_Send5(0xF7D); // Pos0->6
CH451_Send5(0xE07); // Pos1->7
CH451_Send5(0xD4F); // Pos2->3
CH451_Send5(0xC4F); // Pos3->3
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x800); // Pos7->0
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC07); // Pos3->7
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

delay(62);  // Frame delay
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
CH451_Send2(0xB5B); // Pos4->2
CH451_Send2(0xA06); // Pos5->1
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB5B); // Pos4->2
CH451_Send3(0xA7D); // Pos5->6
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF06); // Pos0->1
CH451_Send4(0xE06); // Pos1->1
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB06); // Pos4->1
CH451_Send4(0xA4F); // Pos5->3
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x800); // Pos7->0
ch451_init_config5();
CH451_Send5(0xF7D); // Pos0->6
CH451_Send5(0xE07); // Pos1->7
CH451_Send5(0xD66); // Pos2->4
CH451_Send5(0xC66); // Pos3->4
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x800); // Pos7->0
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC7F); // Pos3->8
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

delay(62);  // Frame delay
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
CH451_Send2(0xB5B); // Pos4->2
CH451_Send2(0xA4F); // Pos5->3
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB06); // Pos4->1
CH451_Send3(0xA07); // Pos5->7
CH451_Send3(0x906); // Pos6->1
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF06); // Pos0->1
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB06); // Pos4->1
CH451_Send4(0xA66); // Pos5->4
CH451_Send4(0x906); // Pos6->1
CH451_Send4(0x800); // Pos7->0
ch451_init_config5();
CH451_Send5(0xF7D); // Pos0->6
CH451_Send5(0xE7D); // Pos1->6
CH451_Send5(0xD06); // Pos2->1
CH451_Send5(0xC5B); // Pos3->2
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x800); // Pos7->0
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

delay(62);  // Frame delay
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
CH451_Send2(0xA07); // Pos5->7
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA7F); // Pos5->8
CH451_Send3(0x96D); // Pos6->5
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB06); // Pos4->1
CH451_Send4(0xA07); // Pos5->7
CH451_Send4(0x97F); // Pos6->8
CH451_Send4(0x806); // Pos7->1
ch451_init_config5();
CH451_Send5(0xF66); // Pos0->4
CH451_Send5(0xE00); // Pos1->0
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x800); // Pos7->0
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE00); // Pos1->0
CH451_Send6(0xD00); // Pos2->0
CH451_Send6(0xC5B); // Pos3->2
CH451_Send6(0xB06); // Pos4->1
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF00); // Pos0->0
CH451_Send1(0xE00); // Pos1->0
CH451_Send1(0xD00); // Pos2->0
CH451_Send1(0xC00); // Pos3->0
CH451_Send1(0xB00); // Pos4->0
CH451_Send1(0xA06); // Pos5->1
CH451_Send1(0x97F); // Pos6->8
CH451_Send1(0x806); // Pos7->1
ch451_init_config2();
CH451_Send2(0xF00); // Pos0->0
CH451_Send2(0xE00); // Pos1->0
CH451_Send2(0xD00); // Pos2->0
CH451_Send2(0xC00); // Pos3->0
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA66); // Pos5->4
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x87D); // Pos7->6
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB06); // Pos4->1
CH451_Send3(0xA66); // Pos5->4
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86D); // Pos7->5
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF00); // Pos0->0
CH451_Send5(0xE00); // Pos1->0
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA7D); // Pos5->6
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF00); // Pos0->0
CH451_Send6(0xE00); // Pos1->0
CH451_Send6(0xD00); // Pos2->0
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x94F); // Pos6->3
CH451_Send6(0x86D); // Pos7->5

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF00); // Pos0->0
CH451_Send1(0xE00); // Pos1->0
CH451_Send1(0xD00); // Pos2->0
CH451_Send1(0xC00); // Pos3->0
CH451_Send1(0xB00); // Pos4->0
CH451_Send1(0xA5B); // Pos5->2
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF00); // Pos0->0
CH451_Send2(0xE00); // Pos1->0
CH451_Send2(0xD00); // Pos2->0
CH451_Send2(0xC00); // Pos3->0
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x906); // Pos6->1
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC06); // Pos3->1
CH451_Send3(0xB7D); // Pos4->6
CH451_Send3(0xA7D); // Pos5->6
CH451_Send3(0x97F); // Pos6->8
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB06); // Pos4->1
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x87D); // Pos7->6
ch451_init_config5();
CH451_Send5(0xF00); // Pos0->0
CH451_Send5(0xE00); // Pos1->0
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x866); // Pos7->4
ch451_init_config6();
CH451_Send6(0xF00); // Pos0->0
CH451_Send6(0xE00); // Pos1->0
CH451_Send6(0xD00); // Pos2->0
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x966); // Pos6->4
CH451_Send6(0x87D); // Pos7->6

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF00); // Pos0->0
CH451_Send1(0xE00); // Pos1->0
CH451_Send1(0xD00); // Pos2->0
CH451_Send1(0xC00); // Pos3->0
CH451_Send1(0xB00); // Pos4->0
CH451_Send1(0xA00); // Pos5->0
CH451_Send1(0x95B); // Pos6->2
CH451_Send1(0x84F); // Pos7->3
ch451_init_config2();
CH451_Send2(0xF00); // Pos0->0
CH451_Send2(0xE00); // Pos1->0
CH451_Send2(0xD00); // Pos2->0
CH451_Send2(0xC00); // Pos3->0
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x84F); // Pos7->3
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC7D); // Pos3->6
CH451_Send3(0xB7D); // Pos4->6
CH451_Send3(0xA66); // Pos5->4
CH451_Send3(0x97D); // Pos6->6
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC6D); // Pos3->5
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA66); // Pos5->4
CH451_Send4(0x94F); // Pos6->3
CH451_Send4(0x84F); // Pos7->3
ch451_init_config5();
CH451_Send5(0xF00); // Pos0->0
CH451_Send5(0xE00); // Pos1->0
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC06); // Pos3->1
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

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF00); // Pos0->0
CH451_Send1(0xE00); // Pos1->0
CH451_Send1(0xD00); // Pos2->0
CH451_Send1(0xC00); // Pos3->0
CH451_Send1(0xB00); // Pos4->0
CH451_Send1(0xA00); // Pos5->0
CH451_Send1(0x900); // Pos6->0
CH451_Send1(0x806); // Pos7->1
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
CH451_Send3(0xC66); // Pos3->4
CH451_Send3(0xB07); // Pos4->7
CH451_Send3(0xA7D); // Pos5->6
CH451_Send3(0x94F); // Pos6->3
CH451_Send3(0x87F); // Pos7->8
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC66); // Pos3->4
CH451_Send4(0xB5B); // Pos4->2
CH451_Send4(0xA66); // Pos5->4
CH451_Send4(0x97D); // Pos6->6
CH451_Send4(0x866); // Pos7->4
ch451_init_config5();
CH451_Send5(0xF00); // Pos0->0
CH451_Send5(0xE00); // Pos1->0
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC06); // Pos3->1
CH451_Send5(0xB06); // Pos4->1
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

delay(62);  // Frame delay
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
CH451_Send2(0xB5B); // Pos4->2
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD06); // Pos2->1
CH451_Send3(0xC7D); // Pos3->6
CH451_Send3(0xB7D); // Pos4->6
CH451_Send3(0xA7F); // Pos5->8
CH451_Send3(0x97D); // Pos6->6
CH451_Send3(0x807); // Pos7->7
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC5B); // Pos3->2
CH451_Send4(0xB06); // Pos4->1
CH451_Send4(0xA06); // Pos5->1
CH451_Send4(0x96D); // Pos6->5
CH451_Send4(0x866); // Pos7->4
ch451_init_config5();
CH451_Send5(0xF00); // Pos0->0
CH451_Send5(0xE00); // Pos1->0
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC06); // Pos3->1
CH451_Send5(0xB5B); // Pos4->2
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

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF00); // Pos0->0
CH451_Send1(0xE00); // Pos1->0
CH451_Send1(0xD00); // Pos2->0
CH451_Send1(0xC5B); // Pos3->2
CH451_Send1(0xB5B); // Pos4->2
CH451_Send1(0xA06); // Pos5->1
CH451_Send1(0x900); // Pos6->0
CH451_Send1(0x800); // Pos7->0
ch451_init_config2();
CH451_Send2(0xF00); // Pos0->0
CH451_Send2(0xE00); // Pos1->0
CH451_Send2(0xD06); // Pos2->1
CH451_Send2(0xC6D); // Pos3->5
CH451_Send2(0xB7D); // Pos4->6
CH451_Send2(0xA7F); // Pos5->8
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x94F); // Pos6->3
CH451_Send3(0x866); // Pos7->4
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
CH451_Send5(0xC6D); // Pos3->5
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x800); // Pos7->0
ch451_init_config6();
CH451_Send6(0xF00); // Pos0->0
CH451_Send6(0xE00); // Pos1->0
CH451_Send6(0xD00); // Pos2->0
CH451_Send6(0xC4F); // Pos3->3
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

delay(62);  // Frame delay
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
CH451_Send3(0xC5B); // Pos3->2
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF00); // Pos0->0
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD4F); // Pos2->3
CH451_Send4(0xC4F); // Pos3->3
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

delay(62);  // Frame delay
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
CH451_Send2(0xC06); // Pos3->1
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF00); // Pos0->0
CH451_Send3(0xE00); // Pos1->0
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC6D); // Pos3->5
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

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC66); // Pos3->4
CH451_Send1(0xB00); // Pos4->0
CH451_Send1(0xA00); // Pos5->0
CH451_Send1(0x900); // Pos6->0
CH451_Send1(0x800); // Pos7->0
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC66); // Pos3->4
CH451_Send2(0xB07); // Pos4->7
CH451_Send2(0xA66); // Pos5->4
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB6F); // Pos4->9
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x907); // Pos6->7
CH451_Send3(0x85B); // Pos7->2
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB6F); // Pos4->9
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB6F); // Pos4->9
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB6F); // Pos4->9
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC07); // Pos3->7
CH451_Send1(0xB66); // Pos4->4
CH451_Send1(0xA7F); // Pos5->8
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB7F); // Pos4->8
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB6F); // Pos4->9
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB6F); // Pos4->9
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB6F); // Pos4->9
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB6F); // Pos4->9
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA66); // Pos5->4
CH451_Send1(0x907); // Pos6->7
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB6F); // Pos4->9
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB6F); // Pos4->9
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB6F); // Pos4->9
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB6F); // Pos4->9
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB6F); // Pos4->9
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA00); // Pos5->0
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB6F); // Pos4->9
CH451_Send2(0xA66); // Pos5->4
CH451_Send2(0x97D); // Pos6->6
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB6F); // Pos4->9
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB6F); // Pos4->9
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB6F); // Pos4->9
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB6F); // Pos4->9
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC7D); // Pos3->6
CH451_Send2(0xB7D); // Pos4->6
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC4F); // Pos3->3
CH451_Send3(0xB06); // Pos4->1
CH451_Send3(0xA7D); // Pos5->6
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB7D); // Pos4->6
CH451_Send4(0xA06); // Pos5->1
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB6F); // Pos4->9
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB6F); // Pos4->9
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB6F); // Pos4->9
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD7D); // Pos2->6
CH451_Send3(0xC06); // Pos3->1
CH451_Send3(0xB06); // Pos4->1
CH451_Send3(0xA7F); // Pos5->8
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD66); // Pos2->4
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB6F); // Pos4->9
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB6F); // Pos4->9
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB6F); // Pos4->9
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD7F); // Pos2->8
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB6F); // Pos4->9
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE7F); // Pos1->8
CH451_Send3(0xD5B); // Pos2->2
CH451_Send3(0xC7F); // Pos3->8
CH451_Send3(0xB6F); // Pos4->9
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE7F); // Pos1->8
CH451_Send4(0xD4F); // Pos2->3
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB6F); // Pos4->9
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6D); // Pos1->5
CH451_Send5(0xD6D); // Pos2->5
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB6F); // Pos4->9
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE7F); // Pos1->8
CH451_Send6(0xD7F); // Pos2->8
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB6F); // Pos4->9
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE07); // Pos1->7
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB6F); // Pos4->9
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE66); // Pos1->4
CH451_Send3(0xD7D); // Pos2->6
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB6F); // Pos4->9
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE5B); // Pos1->2
CH451_Send4(0xD07); // Pos2->7
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB6F); // Pos4->9
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE4F); // Pos1->3
CH451_Send5(0xD7D); // Pos2->6
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB6F); // Pos4->9
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE7D); // Pos1->6
CH451_Send6(0xD07); // Pos2->7
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB6F); // Pos4->9
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE4F); // Pos1->3
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB6F); // Pos4->9
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE06); // Pos1->1
CH451_Send3(0xD7D); // Pos2->6
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB6F); // Pos4->9
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF7F); // Pos0->8
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB6F); // Pos4->9
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE06); // Pos1->1
CH451_Send5(0xD07); // Pos2->7
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB6F); // Pos4->9
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE5B); // Pos1->2
CH451_Send6(0xD7D); // Pos2->6
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB6F); // Pos4->9
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE5B); // Pos1->2
CH451_Send2(0xD6D); // Pos2->5
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB6F); // Pos4->9
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE5B); // Pos1->2
CH451_Send3(0xD4F); // Pos2->3
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB6F); // Pos4->9
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE00); // Pos1->0
CH451_Send4(0xD6D); // Pos2->5
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB6F); // Pos4->9
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE5B); // Pos1->2
CH451_Send5(0xD66); // Pos2->4
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB6F); // Pos4->9
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE5B); // Pos1->2
CH451_Send6(0xD4F); // Pos2->3
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB6F); // Pos4->9
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD7D); // Pos2->6
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE7D); // Pos1->6
CH451_Send2(0xD06); // Pos2->1
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB6F); // Pos4->9
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE7D); // Pos1->6
CH451_Send3(0xD00); // Pos2->0
CH451_Send3(0xC07); // Pos3->7
CH451_Send3(0xB6F); // Pos4->9
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE66); // Pos1->4
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB6F); // Pos4->9
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE7D); // Pos1->6
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC7F); // Pos3->8
CH451_Send5(0xB6F); // Pos4->9
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE66); // Pos1->4
CH451_Send6(0xD00); // Pos2->0
CH451_Send6(0xC07); // Pos3->7
CH451_Send6(0xB6F); // Pos4->9
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD7D); // Pos2->6
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD06); // Pos2->1
CH451_Send2(0xC7D); // Pos3->6
CH451_Send2(0xB6F); // Pos4->9
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD06); // Pos2->1
CH451_Send3(0xC4F); // Pos3->3
CH451_Send3(0xB6F); // Pos4->9
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE7F); // Pos1->8
CH451_Send4(0xD00); // Pos2->0
CH451_Send4(0xC6D); // Pos3->5
CH451_Send4(0xB6F); // Pos4->9
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD00); // Pos2->0
CH451_Send5(0xC66); // Pos3->4
CH451_Send5(0xB6F); // Pos4->9
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE7F); // Pos1->8
CH451_Send6(0xD00); // Pos2->0
CH451_Send6(0xC66); // Pos3->4
CH451_Send6(0xB6F); // Pos4->9
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6D); // Pos3->5
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD7F); // Pos2->8
CH451_Send2(0xC00); // Pos3->0
CH451_Send2(0xB7F); // Pos4->8
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD7F); // Pos2->8
CH451_Send3(0xC00); // Pos3->0
CH451_Send3(0xB6D); // Pos4->5
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD7D); // Pos2->6
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB07); // Pos4->7
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD7F); // Pos2->8
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB07); // Pos4->7
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD07); // Pos2->7
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB7D); // Pos4->6
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC07); // Pos3->7
CH451_Send1(0xB7F); // Pos4->8
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC4F); // Pos3->3
CH451_Send2(0xB66); // Pos4->4
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC4F); // Pos3->3
CH451_Send3(0xB06); // Pos4->1
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC5B); // Pos3->2
CH451_Send4(0xB6D); // Pos4->5
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC06); // Pos3->1
CH451_Send5(0xB66); // Pos4->4
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB5B); // Pos4->2
CH451_Send6(0xA6F); // Pos5->9
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB07); // Pos4->7
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC07); // Pos3->7
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC07); // Pos3->7
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA6D); // Pos5->5
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC7D); // Pos3->6
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA7F); // Pos5->8
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC6D); // Pos3->5
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6D); // Pos3->5
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA07); // Pos5->7
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB7D); // Pos4->6
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA07); // Pos5->7
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC7F); // Pos3->8
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA66); // Pos5->4
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC7F); // Pos3->8
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA7F); // Pos5->8
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC7F); // Pos3->8
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA07); // Pos5->7
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC07); // Pos3->7
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA6D); // Pos5->5
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6D); // Pos4->5
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC07); // Pos3->7
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA07); // Pos5->7
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD7D); // Pos2->6
CH451_Send3(0xC5B); // Pos3->2
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA4F); // Pos5->3
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC07); // Pos3->7
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA7D); // Pos5->6
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC7F); // Pos3->8
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA7D); // Pos5->6
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC7F); // Pos3->8
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA66); // Pos5->4
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6D); // Pos4->5
CH451_Send1(0xA7F); // Pos5->8
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC7F); // Pos3->8
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA6D); // Pos5->5
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD4F); // Pos2->3
CH451_Send3(0xC4F); // Pos3->3
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA06); // Pos5->1
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB06); // Pos4->1
CH451_Send4(0xA4F); // Pos5->3
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB06); // Pos4->1
CH451_Send5(0xA4F); // Pos5->3
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA5B); // Pos5->2
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB66); // Pos4->4
CH451_Send1(0xA07); // Pos5->7
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC7F); // Pos3->8
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA66); // Pos5->4
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE7D); // Pos1->6
CH451_Send3(0xD66); // Pos2->4
CH451_Send3(0xC4F); // Pos3->3
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA06); // Pos5->1
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE7F); // Pos1->8
CH451_Send4(0xD7F); // Pos2->8
CH451_Send4(0xC7D); // Pos3->6
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA5B); // Pos5->2
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA66); // Pos5->4
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC07); // Pos3->7
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA4F); // Pos5->3
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB66); // Pos4->4
CH451_Send1(0xA07); // Pos5->7
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC07); // Pos3->7
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA66); // Pos5->4
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD7D); // Pos2->6
CH451_Send3(0xC6D); // Pos3->5
CH451_Send3(0xB00); // Pos4->0
CH451_Send3(0xA06); // Pos5->1
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD7D); // Pos2->6
CH451_Send4(0xC7D); // Pos3->6
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC7F); // Pos3->8
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC07); // Pos3->7
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA4F); // Pos5->3
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6D); // Pos4->5
CH451_Send1(0xA7D); // Pos5->6
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB5B); // Pos4->2
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x907); // Pos6->7
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC7D); // Pos3->6
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x96D); // Pos6->5
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x96D); // Pos6->5
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB7F); // Pos4->8
CH451_Send1(0xA7F); // Pos5->8
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB06); // Pos4->1
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x97F); // Pos6->8
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB4F); // Pos4->3
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x907); // Pos6->7
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB4F); // Pos4->3
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x97F); // Pos6->8
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x97D); // Pos6->6
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC7F); // Pos3->8
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x907); // Pos6->7
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB07); // Pos4->7
CH451_Send1(0xA7F); // Pos5->8
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC7F); // Pos3->8
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA06); // Pos5->1
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB5B); // Pos4->2
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB06); // Pos4->1
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x907); // Pos6->7
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC4F); // Pos3->3
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x96D); // Pos6->5
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC4F); // Pos3->3
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x96D); // Pos6->5
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB7F); // Pos4->8
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB00); // Pos4->0
CH451_Send2(0xA06); // Pos5->1
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB5B); // Pos4->2
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6D); // Pos3->5
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD66); // Pos2->4
CH451_Send5(0xC4F); // Pos3->3
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x97D); // Pos6->6
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x97D); // Pos6->6
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB7F); // Pos4->8
CH451_Send1(0xA07); // Pos5->7
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB5B); // Pos4->2
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x907); // Pos6->7
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD07); // Pos2->7
CH451_Send3(0xC7D); // Pos3->6
CH451_Send3(0xB4F); // Pos4->3
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x97F); // Pos6->8
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6D); // Pos2->5
CH451_Send4(0xC66); // Pos3->4
CH451_Send4(0xB06); // Pos4->1
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x97F); // Pos6->8
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB06); // Pos4->1
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB5B); // Pos4->2
CH451_Send6(0xA06); // Pos5->1
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6D); // Pos5->5
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD07); // Pos2->7
CH451_Send2(0xC7F); // Pos3->8
CH451_Send2(0xB66); // Pos4->4
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x96D); // Pos6->5
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD07); // Pos2->7
CH451_Send3(0xC06); // Pos3->1
CH451_Send3(0xB5B); // Pos4->2
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x96D); // Pos6->5
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB06); // Pos4->1
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x97D); // Pos6->6
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x966); // Pos6->4
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x96D); // Pos6->5
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC7F); // Pos3->8
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA07); // Pos5->7
CH451_Send1(0x907); // Pos6->7
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC66); // Pos3->4
CH451_Send2(0xB07); // Pos4->7
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC4F); // Pos3->3
CH451_Send3(0xB5B); // Pos4->2
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x906); // Pos6->1
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6F); // Pos3->9
CH451_Send4(0xB06); // Pos4->1
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x95B); // Pos6->2
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC6F); // Pos3->9
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x906); // Pos6->1
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC6F); // Pos3->9
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x87F); // Pos7->8

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA4F); // Pos5->3
CH451_Send1(0x906); // Pos6->1
CH451_Send1(0x87F); // Pos7->8
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB66); // Pos4->4
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x866); // Pos7->4
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB07); // Pos4->7
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x85B); // Pos7->2
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC6D); // Pos3->5
CH451_Send4(0xB6D); // Pos4->5
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x800); // Pos7->0
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC7D); // Pos3->6
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x800); // Pos7->0
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC7F); // Pos3->8
CH451_Send6(0xB06); // Pos4->1
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA5B); // Pos5->2
CH451_Send1(0x900); // Pos6->0
CH451_Send1(0x800); // Pos7->0
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB6D); // Pos4->5
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD7F); // Pos2->8
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB66); // Pos4->4
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6D); // Pos2->5
CH451_Send4(0xC7D); // Pos3->6
CH451_Send4(0xB6F); // Pos4->9
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x800); // Pos7->0
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD07); // Pos2->7
CH451_Send5(0xC5B); // Pos3->2
CH451_Send5(0xB07); // Pos4->7
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x800); // Pos7->0
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC5B); // Pos3->2
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB7F); // Pos4->8
CH451_Send1(0xA00); // Pos5->0
CH451_Send1(0x900); // Pos6->0
CH451_Send1(0x85B); // Pos7->2
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC7F); // Pos3->8
CH451_Send2(0xB06); // Pos4->1
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC07); // Pos3->7
CH451_Send3(0xB66); // Pos4->4
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD7D); // Pos2->6
CH451_Send4(0xC4F); // Pos3->3
CH451_Send4(0xB7D); // Pos4->6
CH451_Send4(0xA00); // Pos5->0
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x800); // Pos7->0
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD7F); // Pos2->8
CH451_Send5(0xC5B); // Pos3->2
CH451_Send5(0xB6D); // Pos4->5
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x800); // Pos7->0
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC5B); // Pos3->2
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA00); // Pos5->0
CH451_Send1(0x900); // Pos6->0
CH451_Send1(0x800); // Pos7->0
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB66); // Pos4->4
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC07); // Pos3->7
CH451_Send3(0xB7D); // Pos4->6
CH451_Send3(0xA00); // Pos5->0
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6D); // Pos2->5
CH451_Send4(0xC66); // Pos3->4
CH451_Send4(0xB07); // Pos4->7
CH451_Send4(0xA06); // Pos5->1
CH451_Send4(0x900); // Pos6->0
CH451_Send4(0x800); // Pos7->0
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD07); // Pos2->7
CH451_Send5(0xC5B); // Pos3->2
CH451_Send5(0xB66); // Pos4->4
CH451_Send5(0xA00); // Pos5->0
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x800); // Pos7->0
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC4F); // Pos3->3
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA5B); // Pos5->2
CH451_Send1(0x900); // Pos6->0
CH451_Send1(0x800); // Pos7->0
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB66); // Pos4->4
CH451_Send2(0xA00); // Pos5->0
CH451_Send2(0x900); // Pos6->0
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD07); // Pos2->7
CH451_Send3(0xC6F); // Pos3->9
CH451_Send3(0xB7F); // Pos4->8
CH451_Send3(0xA06); // Pos5->1
CH451_Send3(0x900); // Pos6->0
CH451_Send3(0x800); // Pos7->0
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD5B); // Pos2->2
CH451_Send4(0xC7F); // Pos3->8
CH451_Send4(0xB6F); // Pos4->9
CH451_Send4(0xA4F); // Pos5->3
CH451_Send4(0x906); // Pos6->1
CH451_Send4(0x800); // Pos7->0
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6D); // Pos2->5
CH451_Send5(0xC4F); // Pos3->3
CH451_Send5(0xB7F); // Pos4->8
CH451_Send5(0xA06); // Pos5->1
CH451_Send5(0x900); // Pos6->0
CH451_Send5(0x800); // Pos7->0
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC66); // Pos3->4
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA00); // Pos5->0
CH451_Send6(0x900); // Pos6->0
CH451_Send6(0x800); // Pos7->0

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x95B); // Pos6->2
CH451_Send1(0x800); // Pos7->0
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB6F); // Pos4->9
CH451_Send2(0xA07); // Pos5->7
CH451_Send2(0x97D); // Pos6->6
CH451_Send2(0x800); // Pos7->0
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC7F); // Pos3->8
CH451_Send3(0xB6D); // Pos4->5
CH451_Send3(0xA7D); // Pos5->6
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x87F); // Pos7->8
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD6F); // Pos2->9
CH451_Send4(0xC5B); // Pos3->2
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA7F); // Pos5->8
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC4F); // Pos3->3
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC7F); // Pos3->8
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA66); // Pos5->4
CH451_Send6(0x97F); // Pos6->8
CH451_Send6(0x866); // Pos7->4

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6D); // Pos2->5
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB6F); // Pos4->9
CH451_Send2(0xA6F); // Pos5->9
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD07); // Pos2->7
CH451_Send3(0xC66); // Pos3->4
CH451_Send3(0xB6F); // Pos4->9
CH451_Send3(0xA6F); // Pos5->9
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD4F); // Pos2->3
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB6D); // Pos4->5
CH451_Send4(0xA6F); // Pos5->9
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD06); // Pos2->1
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB4F); // Pos4->3
CH451_Send5(0xA6F); // Pos5->9
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD7F); // Pos2->8
CH451_Send6(0xC00); // Pos3->0
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA7D); // Pos5->6
CH451_Send6(0x96F); // Pos6->9
CH451_Send6(0x86F); // Pos7->9

delay(62);  // Frame delay
ch451_init_config1();
CH451_Send1(0xF6F); // Pos0->9
CH451_Send1(0xE6F); // Pos1->9
CH451_Send1(0xD6F); // Pos2->9
CH451_Send1(0xC6F); // Pos3->9
CH451_Send1(0xB6F); // Pos4->9
CH451_Send1(0xA6F); // Pos5->9
CH451_Send1(0x96F); // Pos6->9
CH451_Send1(0x86F); // Pos7->9
ch451_init_config2();
CH451_Send2(0xF6F); // Pos0->9
CH451_Send2(0xE6F); // Pos1->9
CH451_Send2(0xD6F); // Pos2->9
CH451_Send2(0xC6F); // Pos3->9
CH451_Send2(0xB66); // Pos4->4
CH451_Send2(0xA7F); // Pos5->8
CH451_Send2(0x96F); // Pos6->9
CH451_Send2(0x86F); // Pos7->9
ch451_init_config3();
CH451_Send3(0xF6F); // Pos0->9
CH451_Send3(0xE6F); // Pos1->9
CH451_Send3(0xD6F); // Pos2->9
CH451_Send3(0xC6D); // Pos3->5
CH451_Send3(0xB06); // Pos4->1
CH451_Send3(0xA7F); // Pos5->8
CH451_Send3(0x96F); // Pos6->9
CH451_Send3(0x86F); // Pos7->9
ch451_init_config4();
CH451_Send4(0xF6F); // Pos0->9
CH451_Send4(0xE6F); // Pos1->9
CH451_Send4(0xD7D); // Pos2->6
CH451_Send4(0xC00); // Pos3->0
CH451_Send4(0xB00); // Pos4->0
CH451_Send4(0xA7D); // Pos5->6
CH451_Send4(0x96F); // Pos6->9
CH451_Send4(0x86F); // Pos7->9
ch451_init_config5();
CH451_Send5(0xF6F); // Pos0->9
CH451_Send5(0xE6F); // Pos1->9
CH451_Send5(0xD6F); // Pos2->9
CH451_Send5(0xC00); // Pos3->0
CH451_Send5(0xB00); // Pos4->0
CH451_Send5(0xA07); // Pos5->7
CH451_Send5(0x96F); // Pos6->9
CH451_Send5(0x86F); // Pos7->9
ch451_init_config6();
CH451_Send6(0xF6F); // Pos0->9
CH451_Send6(0xE6F); // Pos1->9
CH451_Send6(0xD6F); // Pos2->9
CH451_Send6(0xC4F); // Pos3->3
CH451_Send6(0xB00); // Pos4->0
CH451_Send6(0xA5B); // Pos5->2
CH451_Send6(0x97F); // Pos6->8
CH451_Send6(0x86F); // Pos7->9

}

