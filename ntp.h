/********************************************************
 * ntp.h
 *
 * this file provides function declarations for SER486
 * ntp time synchronization functions.
 *
 * Author:   Raymond Acevedo
 * Date:     3/24/2020
 * Revision: 1.0
 *
 *
 */
#ifndef NTP_H_INCLUDED
#define NTP_H_INCLUDED

/* Attempt to synchronize with the network time server located at 192.168.1.2,
* retrying every 1 second until the number of retries is exhausted or
* synchronization is achieved. Return 1 on success, otherwise, 0.
*
* On exit, the rtc time will be automatically synchronized from the ntp server.
*/
int ntp_sync_network_time(unsigned char retries);

#endif // NTP_H_INCLUDED
