#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_interface.h"
#include "GPIO_config.h"
#include "GPIO_private.h"




u8 pinMode(u8 pin,u8 direction){  // Sets Pin Direction

	if(direction == INPUT)
		switch(pin){
			case PA0 ... PA15: CLR_bit(GPIOA_MODE,pin);			 break;
			case PB0 ... PB15: CLR_bit(GPIOB_MODE,(pin-PB0));	 break;
			case PC0 ... PC15: CLR_bit(GPIOC_MODE,(pin-PC0));	 break;
			case PD0 ... PD15: CLR_bit(GPIOD_MODE,(pin-PD0));	 break;
		}

	else if(direction == OUTPUT){
		switch(pin){
			case PA0 ... PA7: SET_bit(GPIOA_MODE,pin);	     break;
			case PB0 ... PB7: SET_bit(GPIOB_MODE,(pin-PB0)); break;
			case PC0 ... PC7: SET_bit(GPIOC_MODE,(pin-PC0)); break;
			case PD0 ... PD7: SET_bit(GPIOD_MODE,(pin-PD0)); break;
		}
	}
	/*
	else if(direction == INPUT_PULLUP){
		switch(pin){
			case PA0 ... PA7: CLR_bit(DDRA,pin);		 digitalWrite(pin,HIGH);	 break;
			case PB0 ... PB7: CLR_bit(DDRB,(pin-PB0));   digitalWrite(pin,HIGH);	 break;
			case PC0 ... PC7: CLR_bit(DDRC,(pin-PC0));   digitalWrite(pin,HIGH);	 break;
			case PD0 ... PD7: CLR_bit(DDRD,(pin-PD0));   digitalWrite(pin,HIGH);	 break;
		}
	}
	*/
	else{
		//for error handling later
	}

	return 0;
}


u8 digitalWrite(u8 pin,u8 value){  // Sets Pin Value

	if(value == LOW)
	switch(pin){
		case PA0 ... PA15: CLR_bit(GPIOA_ODR,pin);		break;
		case PB0 ... PB15: CLR_bit(GPIOA_ODR,(pin-PB0)); break;
		case PC0 ... PC15: CLR_bit(GPIOA_ODR,(pin-PC0)); break;
		case PD0 ... PD15: CLR_bit(GPIOA_ODR,(pin-PD0)); break;
		default: break;
	}

	else if(value == HIGH){
		switch(pin){
		case PA0 ... PA15: SET_bit(GPIOA_ODR,pin);	    break;
		case PB0 ... PB15: SET_bit(GPIOA_ODR,(pin-PB0)); break;
		case PC0 ... PC15: SET_bit(GPIOA_ODR,(pin-PC0)); break;
		case PD0 ... PD15: SET_bit(GPIOA_ODR,(pin-PD0)); break;
		default: break;
		}
	}

	else{
		//for error handling later
	}

	return 0;
}
/*
u8 digitalRead(u8 pin){
	u8 value=0;

	switch(pin){
		case PA0 ... PA7: value = GET_bit(PINA,pin);	   break;
		case PB0 ... PB7: value = GET_bit(PINB,(pin-PB0)); break;
		case PC0 ... PC7: value = GET_bit(PINC,(pin-PC0)); break;
		case PD0 ... PD7: value = GET_bit(PIND,(pin-PD0)); break;
		default: break;
	}


	return value;
}
*/
