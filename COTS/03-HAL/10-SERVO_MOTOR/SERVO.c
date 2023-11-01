/***************************************************/
/* Author              :  Mohamed AShraf           */
/* Origin Date         :  27/10/2023               */
/* Layer               :  HAL LAYER                */
/* SWC                 :  SERVO MOTOR              */
/* Version             :  1.0.0                    */
/***************************************************/

#include "../../01-LIB/STD_TYPES.h"
#include "../../01-LIB/BIT_MATH.h"
#include "../../02-MCAL/06-TIMER1/Timer1_registers.h"
#include "SERVO_INTERFACE.h"

void Timer1_FPWM(void)
{
	/*FAST PWM*/
	CLR_BIT(TIMER_u8_TCCR1A_REG ,TCCR1A_WGM10);
	SET_BIT(TIMER_u8_TCCR1A_REG ,TCCR1A_WGM11);
	SET_BIT(TIMER_u8_TCCR1B_REG ,TCCR1B_WGM12);
	SET_BIT(TIMER_u8_TCCR1B_REG ,TCCR1B_WGM13);

	/*clear OSR1A*/
	CLR_BIT(TIMER_u8_TCCR1A_REG, TCCR1A_COM1A0);
	SET_BIT(TIMER_u8_TCCR1A_REG, TCCR1A_COM1A1);

	/*Time over flow */
	TIMER_u16_ICR1_REG = 19999;

	/*CLOCK/8*/
	CLR_BIT(TIMER_u8_TCCR1B_REG ,TCCR1B_CS10);
	SET_BIT(TIMER_u8_TCCR1B_REG ,TCCR1B_CS11);
	CLR_BIT(TIMER_u8_TCCR1B_REG ,TCCR1B_CS12);


}


void Servo_Angle(uint8 angle )
{
	TIMER_u16_OCR1A_REG = ((50*angle )+8991)/9;

}
