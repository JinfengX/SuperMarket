#ifndef __BSP_SRAM_H__
#define __BSP_SRAM_H__															    

/* ����ͷ�ļ� ----------------------------------------------------------------*/
#include "headfile.h"

/* ���Ͷ��� ------------------------------------------------------------------*/
/* �궨�� --------------------------------------------------------------------*/
//ʹ��NOR/SRAM�� Bank1.sector3
//��IS61LV51216/IS62WV51216,��ַ�߷�ΧΪA0~A18
#define EXSRAM_BANK_ADDR    ((uint32_t)(0x68000000))

/* ��չ���� ------------------------------------------------------------------*/
extern SRAM_HandleTypeDef hexSRAM;

/* �������� ------------------------------------------------------------------*/		  
void MX_FSMC_exSRAM_Init(void);

#endif  /* __BSP_SRAM_H__ */

/******************* (C) COPYRIGHT 2015-2020 ӲʯǶ��ʽ�����Ŷ� *****END OF FILE****/