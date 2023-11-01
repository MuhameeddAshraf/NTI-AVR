/***************************************************/
/* Author              :  Mohamed AShraf           */
/* Origin Date         :  29/10/2023               */
/* Layer               :  MCAL LAYER               */
/* SWC                 :  UART  	               */
/* Version             :  1.0.0                    */
/***************************************************/


#ifndef UART_INTERFACE_H_
#define UART_INTERFACE_H_

void USART_voidInit(void);
void USART_voidSendData(uint8 Copy_U8Data);
uint8 USART_u8ReceiveData(void);

#endif /* UART_INTERFACE_H_ */
