/********************************************************
 * config.h
 *
 * this file provides public declarations for SER486
 * W51 (Wiznet W5100 Ethernet Controller) class library functions.
 *
 * Author:   Raymond Acevedo
 * Date:     3/24/2020
 * Revision: 1.0
 *
 *
 */

#ifndef  W51_H
#define  W51_H

/* initialize the W5100 Ethernet network controller */
void           W5x_init(void);

/* configure the Ethernet contoller mac address, ip address, network gateway address,
* and network subnet mask from the specified parameters.
*/
unsigned char  W5x_config(unsigned char*mac_addr, unsigned char *ip_addr, unsigned char *gtw_addr, unsigned char *sub_mask);

#endif
