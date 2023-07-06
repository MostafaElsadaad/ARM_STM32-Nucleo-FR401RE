#ifndef STK_PRIVATE_H
#define STK_PRIVATE_H

#include "STD_TYPES.h"
typedef struct
{
		volatile u32	CTRL;
		volatile u32	LOAD;
		volatile u32	VAL;
		volatile u32	CALIB;
}STK_type;


#define		STK		((volatile STK_type *)(0xE000E010))


#define 	SINGLE_INTERVAL			0
#define 	PERIOD_INTERVAL			1


#define			SINGLE_INTERVALE			0
#define			PERIOD_INTERVALE			1

#endif

