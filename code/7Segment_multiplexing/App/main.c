/* FIEL DISCRIBTION :
 * FILE  		: main.c
 * Author		: ABDELFATTH MOAWED
 * Created on	: Sep 7, 2023
 */



/* INCLUDE :
 * ****************************************************************
 * ************************* include ******************************
 * ****************************************************************
 */

#include<avr/io.h>
#include<avr/delay.h>
#include"STD_TYPES.h"
#include"Common_Marcos.h"
#include"DIO.h"

#define F_CPU 8000000UL
#define COMMON_ANODE1_PIN PIN0_ID
#define COMMON_ANODE2_PIN PIN1_ID

/* Main :
 * ****************************************************************
 * ************************* Main ******************************
 * ****************************************************************
 */

// Define 7-segment display patterns for digits 0-9 (common anode)
const uint8 digitPatterns[10] = {
    0b11000000, // 0
    0b11111001, // 1
    0b10100100, // 2
    0b10110000, // 3
    0b10011001, // 4
    0b10010010, // 5
    0b10000010, // 6
    0b11111000, // 7
    0b10000000, // 8
    0b10010000  // 9
};
void main(void)
{
	/* Configration */

	uint8 i ;
	uint8 k ;
	/*LDSES'S PORT*/
GPIO_SetupPinDirection(PORTA_ID, PIN0_ID, OUTPUT);
GPIO_SetupPinDirection(PORTA_ID, PIN1_ID, OUTPUT);
GPIO_SetupPinDirection(PORTA_ID, PIN2_ID, OUTPUT);

	/*7SEG'S PORT*/
GPIO_PortDirection(PORTC_ID,0b01111111);
	/*COMMON'S PORT*/
GPIO_SetupPinDirection(PORTD_ID,PIN0_ID,OUTPUT);
GPIO_SetupPinDirection(PORTD_ID,PIN1_ID,OUTPUT);
	/* Code */
	while(1)
	{
		GPIO_WritePort(PORTA_ID,0b00000100);    //  Green LED is ON
		for(i=0 ; i<=10 ; i++)
		{
			for(k=1 ; k<=50 ; k++ )
			{
				switch(i)
				{
				case 10:
							GPIO_WritePin(PORTD_ID,COMMON_ANODE1_PIN,LOW);
							GPIO_WritePin(PORTD_ID,COMMON_ANODE2_PIN,HIGH);
							GPIO_WritePort(PORTC_ID,digitPatterns[0]);
							_delay_ms(10);
							GPIO_WritePin(PORTD_ID,COMMON_ANODE2_PIN,LOW);
							GPIO_WritePin(PORTD_ID,COMMON_ANODE1_PIN,HIGH);
							GPIO_WritePort(PORTC_ID,digitPatterns[1]);
							_delay_ms(10);
					break;
				default:
							GPIO_WritePin(PORTD_ID,COMMON_ANODE1_PIN,LOW);
							GPIO_WritePin(PORTD_ID,COMMON_ANODE2_PIN,HIGH);
							GPIO_WritePort(PORTC_ID,digitPatterns[i]);
							_delay_ms(10);
							GPIO_WritePin(PORTD_ID,COMMON_ANODE2_PIN,LOW);
							GPIO_WritePin(PORTD_ID,COMMON_ANODE1_PIN,HIGH);
							GPIO_WritePort(PORTC_ID,digitPatterns[0]);
							_delay_ms(10);


				}
			}
		}



		GPIO_WritePort(PORTA_ID,0b00000010);    //  Yellow LED is ON
				for(i=0 ; i<=3 ; i++)
				{
					for(k=1 ; k<=50 ; k++ )
					{
									GPIO_WritePin(PORTD_ID,COMMON_ANODE1_PIN,LOW);
									GPIO_WritePin(PORTD_ID,COMMON_ANODE2_PIN,HIGH);
									GPIO_WritePort(PORTC_ID,digitPatterns[i]);
									_delay_ms(10);
									GPIO_WritePin(PORTD_ID,COMMON_ANODE2_PIN,LOW);
									GPIO_WritePin(PORTD_ID,COMMON_ANODE1_PIN,HIGH);
									GPIO_WritePort(PORTC_ID,digitPatterns[0]);
									_delay_ms(10);

					}
				}


		GPIO_WritePort(PORTA_ID,0b00000001);    //  RED LED is ON
				for(i=0 ; i<=10 ; i++)
				{
					for(k=0 ; k<=50 ; k++ )
					{
						switch(i)
						{
						case 10:
									GPIO_WritePin(PORTD_ID,COMMON_ANODE1_PIN,LOW);
									GPIO_WritePin(PORTD_ID,COMMON_ANODE2_PIN,HIGH);
									GPIO_WritePort(PORTC_ID,digitPatterns[0]);
									_delay_ms(10);
									GPIO_WritePin(PORTD_ID,COMMON_ANODE2_PIN,LOW);
									GPIO_WritePin(PORTD_ID,COMMON_ANODE1_PIN,HIGH);
									GPIO_WritePort(PORTC_ID,digitPatterns[1]);
									_delay_ms(10);
							break;
						default:
									GPIO_WritePin(PORTD_ID,COMMON_ANODE1_PIN,LOW);
									GPIO_WritePin(PORTD_ID,COMMON_ANODE2_PIN,HIGH);
									GPIO_WritePort(PORTC_ID,digitPatterns[i]);
									_delay_ms(10);
									GPIO_WritePin(PORTD_ID,COMMON_ANODE2_PIN,LOW);
									GPIO_WritePin(PORTD_ID,COMMON_ANODE1_PIN,HIGH);
									GPIO_WritePort(PORTC_ID,digitPatterns[0]);
									_delay_ms(10);


						}
					}
				}



	}
}




