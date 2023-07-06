#ifndef DMA_PRIVATE_H
#define DMA_PRIVATE_H


#include "STD_TYPES.h"
/*
typedef struct
{
		volatile u32	DMA_SxCR; //0x10


}DMA_type;

*/

#define		DMA_BASE_ADD		((u32)0x40026000)

#define		DMA_S0CR				*((volatile u32 *)(DMA_BASE_ADD + 0x10))
#define		DMA_HISR				*((volatile u32 *)(DMA_BASE_ADD + 0x00))
#define		DMA_S0M0AR				*((volatile u32 *)(DMA_BASE_ADD + 0x1C)) //source
#define		DMA_S0NDTR				*((volatile u32 *)(DMA_BASE_ADD + 0x14))
#define		DMA_S0PAR				*((volatile u32 *)(DMA_BASE_ADD + 0x18)) //Destination

#endif
