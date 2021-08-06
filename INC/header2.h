#ifndef HEADER2_H_INCLUDED
#define HEADER2_H_INCLUDED

#include <util/delay.h>
#include <avr/io.h>


void Init_ADC();
uint16_t Read_ADC(uint8_t ch);
uint16_t Get_ADC(void);


#endif // HEADER2_H_INCLUDED
