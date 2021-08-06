#ifndef HEADER4_H_INCLUDED
#define HEADER4_H_INCLUDED

#define F_CPU 16000000UL /**< Clock Frequency of MCU is 16 MHz */
#define USART_BAUDRATE 9600 /**< Baud rate for serial communication  */
#define UBRR_VALUE (((F_CPU / (USART_BAUDRATE * 16UL))) - 1) /**< Formula to calculate UBRR value */


#include <util/delay.h>
#include <avr/io.h>


void USART_Init();
int USART_Read();
void USART_Write(uint16_t temp);


#endif // HEADER4_H_INCLUDED
