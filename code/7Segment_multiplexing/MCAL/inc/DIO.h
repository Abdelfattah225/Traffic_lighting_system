/*
 * DIO.h
 *
 *  Created on: Aug 29, 2023
 *      Author: Administrator
 */

#ifndef MCAL_INC_DIO_H_
#define MCAL_INC_DIO_H_
#include"DIO_TYPES.h"
#include"STD_TYPES.h"
/* Discription :
 *
 * setup the direction of the required pin input/output
 * if port number or pin number is not correct the function will not handle the request
 *
 */
void GPIO_SetupPinDirection(MCAL_GPIO_PortType port , MCAL_GPIO_PinType pin , MCAL_GIPO_DirectionType direction );

/* Discription :
 *
 *  setup the output of the required pin LOW/HIGH
 *  * if port number or pin number is not correct the function will not handle the request
 *
 */
void GPIO_WritePin(MCAL_GPIO_PortType port ,MCAL_GPIO_PinType pin , MCAL_GPIO_OutputValueType value);
/* Discription :
 * Read the vlaue of the pin that you need
 * it will return 0/1
 */
char GPIO_ReadPin(MCAL_GPIO_PortType port , MCAL_GPIO_PinType pin);

/* Discription :
 *
 * setup the direction of the required port input/output
 *
 */
void GPIO_PortDirection(MCAL_GPIO_PortType port , uint8 value);

/* Discription :
 *
 * to write all port together
 *
 */
void GPIO_WritePort(MCAL_GPIO_PortType port , uint8 value);

/*  Discription :
 *
 *	to read all port together
 *
*/
void GPIO_ReadPort(MCAL_GPIO_PortType port);




#endif /* MCAL_INC_DIO_H_ */
