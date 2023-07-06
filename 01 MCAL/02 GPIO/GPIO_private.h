#ifndef		GPIO_PRIVATE_H_
#define		GPIO_PRIVATE_H_


#define		GPIOA_BASE_ADD		((u32)0x40020000)
#define		GPIOB_BASE_ADD		((u32)0x40020400)
#define		GPIOC_BASE_ADD		((u32)0x40020800)
#define		GPIOD_BASE_ADD		((u32)0x40020C00)
#define		GPIOE_BASE_ADD		((u32)0x40021000)
#define		GPIOH_BASE_ADD		((u32)0x40021C00)


#define		GPIOA_MODE			*((volatile u32 *)(GPIOA_BASE_ADD + 0x00))
#define		GPIOB_MODE			*((volatile u32 *)(GPIOB_BASE_ADD + 0x00))
#define		GPIOC_MODE			*((volatile u32 *)(GPIOC_BASE_ADD + 0x00))
#define		GPIOD_MODE			*((volatile u32 *)(GPIOD_BASE_ADD + 0x00))
#define		GPIOE_MODE			*((volatile u32 *)(GPIOE_BASE_ADD + 0x00))
#define		GPIOH_MODE			*((volatile u32 *)(GPIOH_BASE_ADD + 0x00))


#define		GPIOA_OTYPER		*((volatile u32 *)(GPIOA_BASE_ADD + 0x04))

#define 	GPIOA_ODR			*((volatile u32 *)(GPIOA_BASE_ADD + 0x14))





#endif
