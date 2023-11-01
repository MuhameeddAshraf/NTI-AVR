/***************************************************/
/* Author              :  Mohamed AShraf           */
/* Origin Date         :  28/10/2023               */
/* Layer               :  MCAL LAYER               */
/* SWC                 :  SPI  		               */
/* Version             :  1.0.0                    */
/***************************************************/

#ifndef SPI_PRIVATE_H_
#define SPI_PRIVATE_H_

#define SPCR    *((volatile uint8*)0x2D)
#define SPSR    *((volatile uint8*)0x2E)
#define SPDR    *((volatile uint8*)0x0F)

#define SPIE  7
#define SPE   6
#define MSTR  4
#define SPR0  0

#endif /* SPI_PRIVATE_H_ */
