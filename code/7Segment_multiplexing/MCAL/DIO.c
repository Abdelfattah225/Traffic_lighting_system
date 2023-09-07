/* FIEL DISCRIBTION :
 * FILE  		: DIO.c
 * Author		: ABDELFATTH MOAWED
 * Created on	: Aug 29, 2023
 */



/* INCLUDE :
 * ****************************************************************
 * ************************* include ******************************
 * ****************************************************************
 */


#include "DIO_TYPES.h"
#include "Common_Marcos.h"
#include "STD_TYPES.h"
#include <avr/io.h>

/* IMPELEMENTATION :
 * ********************************************************
 * *********************  impelementaion    ***************
 *  * *****************************************************
 *
 */

/* Defination :
 *
 * function will setup any pin to input/output
 * it will take port , pin , direction(INPUT OR OUTPUT)
 */
void GPIO_SetupPinDirection(MCAL_GPIO_PortType port , MCAL_GPIO_PinType pin , MCAL_GIPO_DirectionType direction )
{
	switch(port)
	{
	/*set direction register DDRA*/
	case PORTA_ID:

		if(direction== OUTPUT)
		{
			set_bit(DDRA,pin);
		}
		else if(direction==INPUT)
		{
			clear_bit(DDRA,pin);
		}

			break;
	/*set direction register DDRB*/
	case PORTB_ID:

		if(direction== OUTPUT)
			{
				set_bit(DDRB,pin);
			}
			else if(direction==INPUT)
			{
				clear_bit(DDRB,pin);
			}
			break;

	/*set direction register DDRC*/
	case PORTC_ID:
		if(direction== OUTPUT)
			{
				set_bit(DDRC,pin);
			}
			else if(direction==INPUT)
			{
				clear_bit(DDRC,pin);
			}
			break;
	/*set direction register DDRD*/
	case PORTD_ID:
		if(direction== OUTPUT)
			{
				set_bit(DDRD,pin);
			}
			else if(direction==INPUT)
			{
				clear_bit(DDRD,pin);
			}
			break;
	}
}


/* Defintation :
 *
 * function will setup status of the pin if it was ouput-----> it will (HIGH OR LOW)
 * function take port , pin and status
 */

void GPIO_WritePin(MCAL_GPIO_PortType port ,MCAL_GPIO_PinType pin , MCAL_GPIO_OutputValueType value)
{

	switch(port)
	{
	/*set ouput of register DDRA*/

	case PORTA_ID:
		if(value==LOW)
		{
			clear_bit(PORTA,pin);
		}
		else if(value==HIGH)
		{
			set_bit(PORTA,pin);
		}
			break;
	/*set ouput of register DDRB*/

	case PORTB_ID:
		if(value==LOW)
			{
				clear_bit(PORTB,pin);
			}
			else if(value==HIGH)
			{
				set_bit(PORTB,pin);
			}
			break;
	/*set ouput of register DDRC*/

	case PORTC_ID:
		if(value==LOW)
			{
				clear_bit(PORTC,pin);
			}
			else if(value==HIGH)
			{
				set_bit(PORTC,pin);
			}
			break;
	/*set ouput of register DDRA*/

	case PORTD_ID:

		if(value==LOW)
			{
				clear_bit(PORTD,pin);
			}
			else if(value==HIGH)
			{
				set_bit(PORTD,pin);
			}

			break;

	}
}

/* Defintation :
 * fucntion to read Is pin contain 1 or 0?
 * function takes port and pin
 */
uint8 GPIO_ReadPin(MCAL_GPIO_PortType port , MCAL_GPIO_PinType pin)
{
	switch(port)
	{
		uint8 localReading = 0x00;
	case PORTA_ID:
		localReading=get_bit(PORTA,pin);
		return localReading;
		break;
	case PORTB_ID:
		localReading=get_bit(PORTB,pin);
		return localReading;
			break;
	case PORTC_ID:
		localReading=get_bit(PORTC,pin);
		return localReading;
			break;
	case PORTD_ID:
		localReading=get_bit(PORTD,pin);
		return localReading;
			break;

	}
}

/* Defination :
 *
 *  * function will setup any port to input/output
 * it will take port and direction(INPUT 0  OR OUTPUT 1)
 */

void GPIO_PortDirection(MCAL_GPIO_PortType port , uint8 value)
{
	if(port>PORTD_ID||port<PORTA_ID)
		{
			/*do noting*/
		}

		else
		{
	switch(port)
	{
	case PORTA_ID:
			DDRA=value;
			break;
		case PORTB_ID:
			DDRB=value;
				break;
		case PORTC_ID:
			DDRC=value;
				break;
		case PORTD_ID:
			DDRD=value;
				break;
	}
		}
}
/* Defination :
* function will setup status of the port if it was ouput-----> it will (HIGH OR LOW)
 * function take port and  (HIGH OR LOW)
 */
void GPIO_WritePort(MCAL_GPIO_PortType port , uint8 value)
{
	if(port>PORTD_ID||port<PORTA_ID)
			{
				/*do noting*/
			}

			else
			{
	switch(port)
		{
		case PORTA_ID:
				PORTA=value;
				break;
			case PORTB_ID:
				PORTB=value;

					break;
			case PORTC_ID:
				PORTC=value;

				break;
			case PORTD_ID:
				PORTD=value;

				break;
		}

			}
}
/* Defination :
* fucntion to read port
 * function takes port and read it
*/
uint8 GPIO_ReadPort(uint8 port)
{
	if(port>PORTD_ID||port<PORTA_ID)
	{
		return 0;
	}

	else
	{
		switch(port)
		{
		case PORTA_ID:
			return PINA;
		case PORTB_ID:
			return PINB;
		case PORTC_ID:
			return PINC;
		default:
			return PIND;
		}
	}
}

