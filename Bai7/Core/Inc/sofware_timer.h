/*
 * sofware_timer.h
 *
 *  Created on: Nov 1, 2023
 *      Author: Dell
 */

#ifndef INC_SOFWARE_TIMER_H_
#define INC_SOFWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void timerRun();

#endif /* INC_SOFWARE_TIMER_H_ */
