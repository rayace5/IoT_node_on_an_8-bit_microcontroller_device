/********************************************************
 * wdt.h
 *
 * this file provides function declarations for SER486
 * watchdog timer library functions.
 *
 * Author:   Raymond Acevedo
 * Date:     3/24/2020
 * Revision: 1.0
 *
 *
 */
#ifndef WDT_H_INCLUDED
#define WDT_H_INCLUDED

/* initialize the watchdog timer for a 2 second timeout and interrupt+reset mode */
void wdt_init();

/* reset the watchdog timer so that it does not time out. */
void wdt_reset();

/* force a system restart (reset only, no interrupt) by disabling the watchdog
* interupt and waiting for a watchdog timeout.
*/
void wdt_force_restart();

#endif // WDT_H_INCLUDED
