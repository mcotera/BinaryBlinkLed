/*
 * main.c
 *
 *  Created on: Jun 19, 2017
 *      Author: mcotera
 */

#include <avr/io.h>
#include <util/delay.h>


#define	DDR_LED01	DDRB
#define	DDR_LED02	DDRB
#define	DDR_LED03	DDRB

#define	PORT_LED01	PORTB
#define	PORT_LED02	PORTB
#define	PORT_LED03	PORTB

#define	LED01		PB3
#define	LED02		PB4
#define	LED03		PB0

int main(void){

	// Set up Port B pin 3 and 4 mode to output
	DDR_LED01 |= (1 << LED01);
	DDR_LED02 |= (1 << LED02);
	DDR_LED03 |= (1 << LED03);

	for (;;) {
		// 0 binary
		PORT_LED01 &= ~(1 << LED01);
		PORT_LED02 &= ~(1 << LED02);
		PORT_LED03 &= ~(1 << LED03);
		_delay_ms(500);

		// 1 binary
		PORT_LED01 |= (1 << LED01);
		PORT_LED02 &= ~(1 << LED02);
		PORT_LED03 &= ~(1 << LED03);
		_delay_ms(500);

		// 2 binary
		PORT_LED01 &= ~(1 << LED01);
		PORT_LED02 |= (1 << LED02);
		PORT_LED03 &= ~(1 << LED03);
		_delay_ms(500);

		// 3 binary
		PORT_LED01 |= (1 << LED01);
		PORT_LED02 |= (1 << LED02);
		PORT_LED03 &= ~(1 << LED03);
		_delay_ms(500);

		// 4 binary
		PORT_LED01 &= ~(1 << LED01);
		PORT_LED02 &= ~(1 << LED02);
		PORT_LED03 |= (1 << LED03);
		_delay_ms(500);

		// 5 binary
		PORT_LED01 |= (1 << LED01);
		PORT_LED02 &= ~(1 << LED02);
		PORT_LED03 |= (1 << LED03);
		_delay_ms(500);

		// 6 binary
		PORT_LED01 &= ~(1 << LED01);
		PORT_LED02 |= (1 << LED02);
		PORT_LED03 |= (1 << LED03);
		_delay_ms(500);

		// 7 binary
		PORT_LED01 |= (1 << LED01);
		PORT_LED02 |= (1 << LED02);
		PORT_LED03 |= (1 << LED03);
		_delay_ms(500);

	}
	return 0;
}
