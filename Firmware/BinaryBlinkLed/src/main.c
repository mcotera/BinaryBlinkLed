/*
 * main.c
 *
 *  Created on: Jun 19, 2017
 *      Author: mcotera
 */

#include <avr/io.h>
#include <util/delay.h>

<<<<<<< HEAD
#define	DDR_LED01	DDRB
#define	DDR_LED02	DDRB
#define	DDR_LED03	DDRB

#define	PORT_LED01	PORTB
#define	PORT_LED02	PORTB
#define	PORT_LED03	PORTB

#define	LED01		PB3
#define	LED02		PB4
#define	LED03		PB0
=======
#define	DDR_LED01	DDB3
#define	DDR_LED02	DDB4
#define	LED01		PB3
#define	LED02		PB4
>>>>>>> d9f55497498c56131bf9ad110a10242d37c13790

int main(void){

	// Set up Port B pin 3 and 4 mode to output
<<<<<<< HEAD
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
=======
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
>>>>>>> d9f55497498c56131bf9ad110a10242d37c13790
		_delay_ms(500);

	}
	return 0;
}
