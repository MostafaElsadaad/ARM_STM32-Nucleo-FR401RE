
#include "STD_TYPES.h"
#include "BIT_MATH.h"


#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"

void	RCC_voidSysClkInit(void)
{
	/*	RCC_CR + RCC_CFGR	/ /	HSI internal 		*/
	RCC_CR		=	0x00000001	;
	RCC_CFGR	=	0x00000000	;
	SET_bit(RCC_CFGR,7);
	CLR_bit(RCC_CFGR,6);
	CLR_bit(RCC_CFGR,5);
	CLR_bit(RCC_CFGR,4);
}

//RCC_voidEnablePerClk(RCC_AHB1,0);

void	RCC_voidEnablePerClk(u8 BusId , u8 PerId)
{
	/*		Range Check		*/
	if(BusId < 3 && PerId < 32)
	{
		switch(BusId)
		{
			case RCC_AHB1 :	SET_bit(RCC_AHB1ENR,PerId);		break;
			case RCC_APB1 :	SET_bit(RCC_APB1ENR,PerId);		break;
			case RCC_APB2 :	SET_bit(RCC_APB2ENR,PerId);		break;
		}
	}else{	/*	Report Error  */}
	
}

void	RCC_voidDisablePerClk(u8 BusId , u8 PerId)
{
		/*		Range Check		*/
	if(BusId < 3 && PerId < 32)
	{
		switch(BusId)
		{
			case RCC_AHB1 :	CLR_bit(RCC_AHB1ENR,PerId);		break;
			case RCC_APB1 :	CLR_bit(RCC_APB1ENR,PerId);		break;
			case RCC_APB2 :	CLR_bit(RCC_APB2ENR,PerId);		break;
		}
	}else{	/*	Report Error  */}

}


/*
void RCC_voidDisablePerClk(void){
	


}*/



