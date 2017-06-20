/*
 * main.c
 *
 *  Created on: Jun 19, 2017
 *      Author: mcotera
 */

#include <avr/io.h>
#include <util/delay.h>

#define	DDR_LED01	DDB3
#define	DDR_LED02	DDB4
#define	LED01		PB3
#define	LED02		PB4

int main(void){

	// Set up Port B pin 3 and 4 mode to output
	DDRB |= (1 << DDR_LED01);
	DDRB |= (1 << DDR_LED02);

	for (;;) {
		// 0 binary
		PORTB &= ~(1 << PB3);
		PORTB &= ~(1 << PB4);
		_delay_ms(500);

		// 1 binary
		PORTB |= (1 << PB3);
		PORTB &= ~(1 << PB4);
		_delay_ms(500);

		// 2 binary
		PORTB &= ~(1 << PB3);
		PORTB |= (1 << PB4);
		_delay_ms(500);

		// 1 binary
		PORTB |= (1 << PB3);
		PORTB |= (1 << PB4);
		_delay_ms(500);

	}
	return 0;
}
