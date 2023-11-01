/***************************************************/
/* Author              :  Mohamed AShraf           */
/* Origin Date         :  26/10/2023               */
/* Layer               :  HAL LAYER                */
/* SWC                 :  LDR                      */
/* Version             :  1.0.0                    */
/***************************************************/

#include "../../01-LIB/STD_TYPES.h"
#include "../../02-MCAL/01-DIO/DIO_interface.h"
#include "../../02-MCAL/04-ADC/ADC_Interface.h"
#include "LDR_Interface.h"

void LDR_init(void){
	ADC_voidInit();
}

uint16 LDR_CallValue(void){
	uint16 Local_u16Digital = ADC_u8StartConversion(ADC_CHANNEL);
 	if (Local_u16Digital > 512){
		DIO_voidSetPinValue(DIO_u8PORTD,DIO_u8PIN0,DIO_u8LOW);
	}else {
		DIO_voidSetPinValue(DIO_u8PORTD,DIO_u8PIN0,DIO_u8LOW);
	}
	return Local_u16Digital;
}
