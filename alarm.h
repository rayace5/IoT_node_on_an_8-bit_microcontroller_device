/********************************************************
 * alarm.h
 *
 * this file provides function declarations for SER486
 * alarm class library functions.
 *
 * Author:   Raymond Acevedo
 * Date:     3/24/2020
 * Revision: 1.0
 *
 *
 */
#ifndef ALARM_H_INCLUDED
#define ALARM_H_INCLUDED

/* initialize the alarm class */
void alarm_init();

/* send an alarm with the specified number.  The number should match
* the event type found in log.h.  Alarms will be sent to both the
* local debug port as well as a UDP multicast message on the local
* area network.
*/
void alarm_send(unsigned eventnum);

#endif // ALARM_H_INCLUDED
