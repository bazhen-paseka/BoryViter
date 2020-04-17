/*
 * at24cXX_local_config.h
 *
 *  Created on: 11 ???. 2020 ?.
 *      Author: Paseka
 */

#ifndef LOCAL_CONFIG_AT24CXX_LOCAL_CONFIG_H_
#define LOCAL_CONFIG_AT24CXX_LOCAL_CONFIG_H_

/*
**************************************************************************
*								    DEFINES
**************************************************************************
*/

	//#define EEPROM_DEVICE_ADDRESS 0b1010000 << 1
	#define EEPROM_DEVICE_ADDRESS 0x50 << 1

	#define	EEPROM_MAX_BYTE			32768
	#define EEPROM_PACKET_SIZE		21
	#define PACKET_START			0
	#define PACKET_END				(EEPROM_MAX_BYTE/EEPROM_PACKET_SIZE)

	#define MAGIK_CHAR				0x71
						//	0x70 "p" -  present

#endif /* LOCAL_CONFIG_AT24CXX_LOCAL_CONFIG_H_ */
