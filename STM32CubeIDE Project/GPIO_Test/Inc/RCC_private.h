#ifndef		RCC_PRIVATE_H_
#define		RCC_PRIVATE_H_


#define		RCC_BASE_ADD		((u32)0x40023800)

#define		RCC_CR				*((volatile u32 *)(RCC_BASE_ADD + 0x00))
#define		RCC_PLLCFGR			*((volatile u32 *)(RCC_BASE_ADD + 0x04))
#define		RCC_CFGR			*((volatile u32 *)(RCC_BASE_ADD + 0x08))

#define		RCC_AHB1ENR			*((volatile u32 *)(RCC_BASE_ADD + 0x30))
#define		RCC_APB1ENR			*((volatile u32 *)(RCC_BASE_ADD + 0x40))
#define		RCC_APB2ENR			*((volatile u32 *)(RCC_BASE_ADD + 0x44))




#endif
