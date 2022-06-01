#ifndef BOTOES_H
#define	BOTOES_H
#include "lcd.h"

#ifdef LCD_IHM
#define B0      PORTDbits.RD6
#define B1      PORTDbits.RD7
#else
#define B0      PORTDbits.RD0
#define B1      PORTDbits.RD1
#endif    

void botao_init( void );
char b0_bordaSubida( void );
char b0_bordaDescida( void );
char b0_borda( void );
char b0( void );
char b1( void );
char b1_bordaSubida( void );
char b1_bordaDescida( void );
char b1_borda( void );


#endif	/* BOTOES_H */

