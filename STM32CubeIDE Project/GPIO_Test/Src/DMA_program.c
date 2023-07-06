
#include "DMA_private.h"
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "DMA_interface.h"

void DMA_voidStart(u32* source, u32* destination, u16 block){
	/* CHANNEL SELECTION */
	CLR_bit(DMA_S0CR,25);
	CLR_bit(DMA_S0CR,26);
	CLR_bit(DMA_S0CR,27);

	/* MEMORY BURST TRANSFER CONFIG  ( SINGLE TRANSFER )*/
	CLR_bit(DMA_S0CR,23);
	CLR_bit(DMA_S0CR,24);


	SET_bit(DMA_S0CR,16);
	SET_bit(DMA_S0CR,17);

	CLR_bit(DMA_S0CR,13);
	SET_bit(DMA_S0CR,14);

	CLR_bit(DMA_S0CR,11);
	SET_bit(DMA_S0CR,12);

	SET_bit(DMA_S0CR,10);
	SET_bit(DMA_S0CR,9);

	CLR_bit(DMA_S0CR,6);
	SET_bit(DMA_S0CR,7);

	SET_bit(DMA_S0CR,4);
	DMA_S0NDTR = block;
	DMA_S0M0AR = source;
	DMA_S0PAR  = destination;

	SET_bit(DMA_S0CR,0);

}


