/*
 * software_timer.h
 *
 *  Created on: Oct 5, 2023
 *      Author: HELLO
 */

#ifndef SOFTWARE_TIMER_H_
#define SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;

void setTimer1(int duration);
void setTimer2(int duration);

void timerRun1();
void timerRun2();

#endif /* SOFTWARE_TIMER_H_ */
