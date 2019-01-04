/*
 * Timer.h
 *
 * Created: 1/4/2019 10:51:15 AM
 *  Author: user
 */ 


#include <avr/io.h>

#include <avr/interrupt.h>
#ifndef TIMER_H_
#define TIMER_H_

void Timer0_FastPWM_Init(char parDuty);
void PWM_vSetDutyCycle(char parDuty);


#endif /* TIMER_H_ */