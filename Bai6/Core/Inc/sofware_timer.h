/*
 * sofware_timer.h
 *
 *  Created on: Nov 1, 2023
 *      Author: Dell
 */

#ifndef INC_SOFWARE_TIMER_H_
#define INC_SOFWARE_TIMER_H_

extern int timer0_flag;
extern int timer1_flag;


void setTimer1(int duration);
void timerRun();

#endif /* INC_SOFWARE_TIMER_H_ */
