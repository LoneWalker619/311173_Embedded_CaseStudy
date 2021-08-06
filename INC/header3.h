#ifndef HEADER3_H_INCLUDED
#define HEADER3_H_INCLUDED

#define PWM_20_PERCENT (200) /**< Output PWM for 20% duty cycle */
#define PWM_40_PERCENT (400) /**< Output PWM for 40% duty cycle */
#define PWM_70_PERCENT (750) /**< Output PWM for 70% duty cycle */
#define PWM_95_PERCENT (900) /**< Output PWM for 95% duty cycle */


#include <util/delay.h>
#include <avr/io.h>


void Init_TIMER();


void PWM_OUTPUT(uint16_t temp);

#endif // HEADER3_H_INCLUDED
