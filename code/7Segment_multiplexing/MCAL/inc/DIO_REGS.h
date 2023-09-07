/*  	Author: Abdelfattah
 * 		 FILE : DIO_REGS.h
 *		Model :
 * Description:
 *  Created on: Aug 29, 2023
 *
 */

/*Guard*/
#ifndef MCAL_INC_DIO_REGS_H_
#define MCAL_INC_DIO_REGS_H_

#include "STD_TYPES.h"

#define PORTA *((volatile uint8 *)(0x3B))
#define DDRA  *((volatile uint8 *)(0x3A))
#define PINA  *((volatile uint8 *)(0x39))
#define PORTB *((volatile uint8 *)(0x38))
#define DDRB  *((volatile uint8 *)(0x37))
#define PINB  *((volatile uint8 *)(0x36))
#define PORTC *((volatile uint8 *)(0x35))
#define DDRC  *((volatile uint8 *)(0x34))
#define PINC  *((volatile uint8 *)(0x33))
#define PORTD *((volatile uint8 *)(0x32))
#define DDRD  *((volatile uint8 *)(0x31))
#define PIND  *((volatile uint8 *)(0x30))



#endif /* MCAL_INC_DIO_REGS_H_ */
