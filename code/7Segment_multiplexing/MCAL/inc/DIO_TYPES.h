/*
 * DIO_TYPES.h
 *
 *  Created on: Aug 29, 2023
 *      Author: Administrator
 */

#ifndef MCAL_INC_DIO_TYPES_H_
#define MCAL_INC_DIO_TYPES_H_

typedef enum
{
	PORTA_ID=0,
	PORTB_ID=1,
	PORTC_ID=2,
	PORTD_ID=3
}MCAL_GPIO_PortType;

typedef enum
{
	PIN0_ID=0,
	PIN1_ID=1,
	PIN2_ID=2,
	PIN3_ID=3,
	PIN4_ID=4,
	PIN5_ID=5,
	PIN6_ID=6,
	PIN7_ID=7
}MCAL_GPIO_PinType;

typedef enum
{
	INPUT=0,
	OUTPUT=1
}MCAL_GIPO_DirectionType;

typedef enum
{
	LOW=0,
	HIGH=1
}MCAL_GPIO_OutputValueType;

typedef enum
{
	ENABLE=1,
	DISABLE=0
}MCAL_GPIO_EnternalPullupStatus;

#endif /* MCAL_INC_DIO_TYPES_H_ */
