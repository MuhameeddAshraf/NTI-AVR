/***************************************************/
/* Author              :  Mohamed AShraf           */
/* Origin Date         :  28/10/2023               */
/* Layer               :  MCAL LAYER               */
/* SWC                 :  SPI  		               */
/* Version             :  1.0.0                    */
/***************************************************/

#ifndef SPI_INTERFACE_H_
#define SPI_INTERFACE_H_

void SPI_init(void);
void SPI_MasterInit(void);
void SPI_SlaveInit(void);
void SPI_SendData(uint8 Copy_U8Data); //Master is Send
uint8 SPI_ReceiveData(void); //Slave is Receive
uint8 SPI_Send_ReceiveData(uint8 Copy_U8Data);

#endif /* SPI_INTERFACE_H_ */
