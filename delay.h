/********************************************************
 * delay.h
 *
 * this file provides function declarations for SER486
 * timer-based delay library functions.
 *
 * Author:   Raymond Acevedo
 * Date:     3/24/2020
 * Revision: 1.0
 *
 *
 *
 */
#ifndef DELAY_H_INCLUDED
#define DELAY_H_INCLUDED

/* get the current tick counter value for the specified instance */
unsigned delay_get(unsigned num);

/* set the counter limit and reset the count for the specified instance */
void     delay_set(unsigned int num, unsigned int msec);

/* return 1 if the specified instance of the counter has reached its
* limit, otherwise, return 0 */
unsigned delay_isdone(unsigned int num);

#endif // DELAY_H_INCLUDED