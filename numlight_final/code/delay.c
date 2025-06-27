#include "stm32f10x.h"                  // Device header


// 微秒级延时（基于 CPU 循环）
void delay_us(uint32_t nus) {
  uint32_t i;
  for(i=0; i<nus*8; i++); // 需根据主频调整系数
}

// 毫秒级延时
void delay(uint32_t nms) {
  while(nms--) {
    delay_us(1000);
  }
}

