/***************************************************/
/* Author              :  Mohamed AShraf           */
/* Origin Date         :  26/10/2023               */
/* Layer               :  HAL LAYER                */
/* SWC                 :  LDR                      */
/* Version             :  1.0.0                    */
/***************************************************/

#ifndef LDR_INTERFACE_H_
#define LDR_INTERFACE_H_

#define ADC_CHANNEL ADC_CHANNEL_A0

void LDR_init(void);
uint16 LDR_CallValue(void);

#endif /* LDR_INTERFACE_H_ */
