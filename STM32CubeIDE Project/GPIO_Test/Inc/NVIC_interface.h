#ifndef _NVIC_INTERFACE_H_
#define	_NVIC_INTERFACE_H_



void NVIC_voidSetInterruptEnable(u8 Int_Num);
void NVIC_voidInit();
void NVIC_voidSetInterruptDisable(u8 Int_Num);
void NVIC_voidSetPending(u8 Int_Num);
void NVIC_voidClrPending(u8 Int_Num);
u8 NVIC_u8GetACtiveFlag(u8 Int_Num);
void NVIC_voidSetIntPriotity(u8 Int_Num,u8 Int_Priority);







#endif
