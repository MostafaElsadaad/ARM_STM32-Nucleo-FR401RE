#ifndef		GPIO_INTERFACE_H_

#define		GPIO_INTERFACE_H_


#define PA0 	0
#define PA1 	1
#define PA2 	2
#define PA3 	3
#define PA4 	4
#define PA5 	5
#define PA6 	6
#define PA7 	7
#define PA8 	8
#define PA9		9
#define PA10	10
#define PA11	11
#define PA12	12
#define PA13	13
#define PA14	14
#define PA15	15


#define PB0 	20
#define PB1 	21
#define PB2 	22
#define PB3 	23
#define PB4 	24
#define PB5 	25
#define PB6 	26
#define PB7 	27
#define PB8		28
#define PB9		29
#define PB10	30
#define PB11	31
#define PB12	32
#define PB13	33
#define PB14	34
#define PB15	35

#define PC0 	40
#define PC1 	41
#define PC2 	42
#define PC3 	43
#define PC4 	44
#define PC5 	45
#define PC6 	46
#define PC7 	47
#define PC8		48
#define PC9		49
#define PC10	50
#define PC11	51
#define PC12	52
#define PC13	53
#define PC14	54
#define PC15	55

#define PD0 	60
#define PD1 	61
#define PD2 	62
#define PD3 	63
#define PD4 	64
#define PD5 	65
#define PD6 	66
#define PD7 	67
#define PD8		68
#define PD9		69
#define PD10	70
#define PD11	71
#define PD12	72
#define PD13	73
#define PD14	74
#define PD15	75

#define LOW	 0
#define HIGH 1

#define INPUT  0
#define OUTPUT 1
#define INPUT_PULLUP 3



u8 pinMode(u8 pin,u8 direction);
u8 digitalWrite(u8 pin,u8 value);
u8 digitalRead(u8 pin);



#endif
