

#include "Task_Scheduler.h"
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "STK_interface.h"

#define		NUM_OF_TASKS		3

static		u16		Ticks;
/*	Configure Num of Tasks							*/
static Task	Arr_Tasks[NUM_OF_TASKS];
static void	Scheduler(void);

void	RTO_voidInit(void)
{
	/*	Configure the Systick "Interrupt with 1 msec"	*/
	STK_voidPeriodicInterval(1000,Scheduler);
}

void	RTO_voidCreateTask(u8 priority , u16 Period , void (*Copy_pf)(void))
{
	Arr_Tasks[priority].Periodicity	= 	Period;
	Arr_Tasks[priority].pf			= 	Copy_pf;
}

static void	Scheduler(void)
{
	for(u8 i = 0 ; i < NUM_OF_TASKS ; i++)
	{

		if((Ticks%Arr_Tasks[i].Periodicity) == 0)
		{
			Arr_Tasks[i].pf();
		}
	}
	Ticks++;
}
