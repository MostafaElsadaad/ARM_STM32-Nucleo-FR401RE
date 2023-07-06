#ifndef _NVIC_PRIVATE_H_
#define	_NVIC_PRIVATE_H_

#define		GRP_16_SUB_0		((u32)0x5FA00300)
#define		GRP_8_SUB_2			((u32)0x5FA00400)
#define		GRP_4_SUB_4			((u32)0x5FA00500)
#define		GRP_2_SUB_8			((u32)0x5FA00600)
#define		GRP_0_SUB_16		((u32)0x5FA00700)


/*
#define		NVIC_BASE_ADD		((u32)0xE000E100)

#define 	NVIC_ISER0			*((volatile u32 *)(NVIC_BASE_ADD + 0x100))

#define		NVIC_IPR			((volatile u8 *) (NVIC_BASE_ADD + 0x100))

*/

#define    NVIC_IPR_ADD        ((u32)0xE000E400)

#define		NVIC_IPR			((volatile u8 *) (NVIC_IPR_ADD + 0x100))


#define	   NVIC_ISER_ADD		((u32)0xE000E100)
#define    NVIC_ICER_ADD        ((u32)0xE000E180)
#define    NVIC_ISPR_ADD        ((u32)0xE000E200)
#define    NVIC_ICPR_ADD        ((u32)0xE000E280)
#define    NVIC_IABR_ADD        ((u32)0xE000E300)


#define		NVIC_ISER0			*((volatile u32 *)(NVIC_ISER_ADD + 0x00))
#define		NVIC_ISER1			*((volatile u32 *)(NVIC_ISER_ADD + 0x04))

#define     NVIC_ICER0          *((volatile u32 *)(NVIC_ICER_ADD + 0x00))
#define     NVIC_ICER1          *((volatile u32 *)(NVIC_ICER_ADD + 0x04))

#define     NVIC_ISPR0          *((volatile u32 *)(NVIC_ICPR_ADD + 0x00))
#define     NVIC_ISPR1          *((volatile u32 *)(NVIC_ICPR_ADD + 0x04))

#define     NVIC_ICPR0          *((volatile u32 *)(NVIC_ISPR_ADD + 0x00))
#define     NVIC_ICPR1          *((volatile u32 *)(NVIC_ISPR_ADD + 0x04))

#define     NVIC_IABR0          *((volatile u32 *)(NVIC_IABR_ADD + 0x00))
#define     NVIC_IABR1          *((volatile u32 *)(NVIC_IABR_ADD + 0x04))




#endif
