/*
 * File:   Botoes.c
 * Author: 21193451
 *
 * Created on 13 de Abril de 2022, 10:01
 */


#include <xc.h>
#include "Botoes.h"
#include "lcd.h"

void botao_init( void )
{
#ifdef LCD_IHM
    TRISDbits.TRISD6 = 1;
    TRISDbits.TRISD7 = 1;
#else 
    TRISDbits.TRISD0 = 1;
    TRISDbits.TRISD1 = 1;
#endif

}

char b0Anterior=0;
char b0_bordaSubida( void )
{
    char aux;
    aux = B0 && !b0Anterior;
    b0Anterior = B0;
    return( aux );
}
char b0_bordaDescida( void )
{
    char aux;
    aux = !B0 && b0Anterior;
    b0Anterior = B0;
    return( aux );
}
char b0_borda( void )
{
    char aux;
    aux = (B0 && !b0Anterior) || (!B0 && b0Anterior);
    b0Anterior = B0;
    return( aux );
}
char b0( void )
{
    return( B0 );
}

char b1Anterior=0;
char b1_bordaSubida( void )
{
    char aux;
    aux = B1 && !b1Anterior;
    b1Anterior = B1;
    return( aux );
}
char b1_bordaDescida( void )
{
    char aux;
    aux = !B1 && b1Anterior;
    b1Anterior = B1;
    return( aux );
}
char b1_borda( void )
{
    char aux;
    aux = (B1 && !b1Anterior) || (!B1 && b1Anterior);
    b1Anterior = B1;
    return( aux );
}
char b1( void )
{
    return( B1 );
}
