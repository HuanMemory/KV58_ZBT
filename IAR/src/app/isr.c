/*
* isr.c
*
*  Created on: Feb 18, 2018
*      Author: ZBT
*/

#include "include.h"
#include "isr.h"
void Error_handler(unsigned char* Log)  //������ASSERT��HARDFAULT�������˺���
{
  DisableInterrupts;
  //��������
  
  while(1);//��ֹ��������
}

void HardFault_Handler(void)
{
  Error_handler("HardFault");
}