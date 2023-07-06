#ifndef STK_INTERFACE_H
#define STK_INTERFACE_H

void	STK_voidInit();
void	STK_voidBusyWait(u32 Ticks);
void	STK_voidSingleInterval(u32 Ticks , void (*Pf)(void));
void	STK_voidPeriodicInterval(u32 Ticks , void (*Pf)(void));
void	STK_voidStopInterval();
void	Systick_Handler(void);


#endif
