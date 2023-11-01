/***************************************************/
/* Author              :  Mohamed AShraf           */
/* Origin Date         :  28/10/2023               */
/* Layer               :  MCAL LAYER               */
/* SWC                 :  SPI  		               */
/* Version             :  1.0.0                    */
/***************************************************/


#include "../../01-LIB/STD_TYPES.h"
#include "../../01-LIB/BIT_MATH.h"

#include "SPI_Config.h"
#include "SPI_Interface.h"
#include "SPI_Private.h"

void SPI_init(){
#if SPI_MODE == SLAVE_MODE
	 /* Set MISO output, all others input */
	 /* Enable SPI */
	 //SPCR = 0b01000000;
	SET_BIT(SPCR, SPE);
#elif SPI_MODE == MASTER_MODE
	 /* Set MOSI and SCK output, all others input */
	 /* Enable SPI, Master, set clock rate fck/16 */
	 //SPCR = 0b01010001;
	SET_BIT(SPCR, SPR0);
	SET_BIT(SPCR, MSTR);
	SET_BIT(SPCR, SPE);

#endif

}

void SPI_MasterInit(void){
	 /* Set MOSI and SCK output, all others input */
	 /* Enable SPI, Master, set clock rate fck/16 */
	 //SPCR = 0b01010001;
	SET_BIT(SPCR, SPR0);
	SET_BIT(SPCR, MSTR);
	SET_BIT(SPCR, SPE);
}

void SPI_SlaveInit(void){
	 /* Set MISO output, all others input */
	 /* Enable SPI */
	 //SPCR = 0b01000000;
	SET_BIT(SPCR, SPE);
}

void SPI_SendData(uint8 Copy_U8Data){
	 /*  initiates data transmission */
	SPDR = Copy_U8Data;
	 /* Wait for transmission complete */
	while(GET_BIT(SPSR, SPIE) == 0);
}

uint8 SPI_ReceiveData(void){
	 /* Wait for receive complete */
	while(GET_BIT(SPSR, SPIE) == 0);
	 /* Return data register */
	return SPDR;
}

uint8 SPI_Send_ReceiveData(uint8 Copy_U8Data){
	SPDR = Copy_U8Data;
	while(GET_BIT(SPSR, SPIE) == 0);
	return SPDR;
}
