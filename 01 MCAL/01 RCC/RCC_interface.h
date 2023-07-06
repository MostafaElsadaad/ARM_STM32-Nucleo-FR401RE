#ifndef _RCC_INTERFACE_H_
#define _RCC_INTERFACE_H_



#define		RCC_AHB1			0
#define		RCC_APB1			1
#define		RCC_APB2			2

#include "STD_TYPES.h"


void	RCC_voidSysClkInit(void);

void	RCC_voidEnablePerClk(u8 BusId , u8 PerId);

void	RCC_voidDisablePerClk(u8 BusId , u8 PerId);





#endif
