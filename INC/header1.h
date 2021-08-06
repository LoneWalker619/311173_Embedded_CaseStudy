#ifndef HEADER1_H_INCLUDED
#define HEADER1_H_INCLUDED

#define BUTTON_SENSOR  (PORTD0)   /**< Port for Button Sensor  */
#define HEATER_SWITCH  (PORTD1)   /**< Port for Temperature Sensor   */


#include <util/delay.h>
#include <avr/io.h>


void peripheral_init(void);


#endif // HEADER1_H_INCLUDED
