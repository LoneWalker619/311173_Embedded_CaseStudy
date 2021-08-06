/**
 * @file main.c
 * @author Sourav Sudarshan (s.sourav.sourav3@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include<util/delay.h>
#include"header1.h"
#include"header2.h"
#include"header3.h"
#include"header4.h"
int main(void)
{
    uint16_t temp;
    peripheral_init();


    while(1)
    {
        if(!(PIND&(1<<BUTTON_SENSOR )) && !(PIND&(1<<HEATER_SWITCH))) //Check if both the switches are pressed
        {

            PORTD|=(1<<PD3);
            temp=Get_ADC(); //Get the ADC value
            PWM_OUTPUT(temp); //PWM output based on temperature
		    USART_Write(temp);

        }
        else  //in all other cases
        {
            PORTD&=~(1<<PD3);//Turn LED OFF
		    _delay_ms(200);
        }

    }
    return 0;
}
