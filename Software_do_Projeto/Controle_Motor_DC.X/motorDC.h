#ifndef MOTORDC_H
#define	MOTORDC_H

#define INCREMENTO 5

#define Motor_DC        PORTCbits.RC1
#define Reversao        PORTCbits.RC0


void motorDC_init( void );
void motorDC( unsigned char c );
unsigned char motorDC_dutycycle( void );
void motorDC_inc( void );
void motorDC_dec( void );

#endif	/* MOTORDC_H */

