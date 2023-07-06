#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "NVIC_private.h"
#include "NVIC_config.h"
#include "NVIC_interface.h"



void NVIC_voidSetInterruptEnable(u8 Int_Num){
	/* Range Check  */
	if(Int_Num<32){
		NVIC_ISER0 = (1<<Int_Num);
	}
	else if (Int_Num <64) {
		Int_Num-=32;
		NVIC_ISER1 = (1<<Int_Num);  //GET REGISTER
	}


}

void	NVIC_voidInit()
{
	#ifndef		SCB_AIRCR
		#define	SCB_AIRCR		*((volatile u32 *)(0xE000ED00+0x0C))
	#endif
	SCB_AIRCR = NUM_OF_GRP_SUB;
}


void NVIC_voidSetInterruptDisable(u8 Int_Num){
	/* Range Check  */
	if(Int_Num<32){
		NVIC_ICER0 = (1<<Int_Num);
	}
	else if (Int_Num <64) {
		Int_Num-=32;
		NVIC_ICER1 = (1<<Int_Num); // GET REGISTER IN .PRIV
	}


}




void NVIC_voidSetPending(u8 Int_Num){
	/* Range Check  */
	if(Int_Num<32){
		NVIC_ISPR0 = (1<<Int_Num);
	}
	else if (Int_Num <64) {
		Int_Num-=32;
		NVIC_ISPR1 = (1<<Int_Num); // GET REGISTER IN .PRIV
	}


}

void NVIC_voidClrPending(u8 Int_Num){
	/* Range Check  */
	if(Int_Num<32){
		NVIC_ICPR0 = (1<<Int_Num);
	}
	else if (Int_Num <64) {
		Int_Num-=32;
		NVIC_ICPR1 = (1<<Int_Num); // GET REGISTER IN .PRIV
	}


}



u8 NVIC_u8GetACtiveFlag(u8 Int_Num){
	u8 local_U8Temp = 0xAA;
	/* Range Check  */
	if(Int_Num<32){
		local_U8Temp = GET_bit(NVIC_IABR0,Int_Num);
	}
	else if (Int_Num <64) {
		Int_Num-=32;
		local_U8Temp = GET_bit(NVIC_IABR1,Int_Num);
	}
	return local_U8Temp;
}




void NVIC_voidSetIntPriotity(u8 Int_Num,u8 Int_Priority){

	NVIC_IPR[Int_Num] = (Int_Priority <<4);

}



