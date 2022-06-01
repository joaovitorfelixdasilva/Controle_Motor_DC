#include <xc.h>
#include "Botoes.h"
#define NUM_COL         4
#define NUM_LIN         4
#define L0_MASK         0x01
#define C0_MASK         0x10

void teclado_init( void )
{
    TRISB = 0xF0;
    ANSELH = 0x00;
    OPTION_REGbits.nRBPU = 0;
    WPUB = 0xFF;
    PORTB = 0xFF;
}

const char tecladoMatriz[4][4] = {  {'1','2','3','A'},
                                    {'4','5','6','B'},
                                    {'7','8','9','C'},
                                    {'*','0','#','D'} };

char teclado( void )
{
char aux = 0;
char l,c;
    
    for( l=0; l<NUM_LIN; l++ )
    {
        PORTB = (char)~(L0_MASK << l);
        for( c=0; c<NUM_COL; c++ )
        {
            if( ~PORTB & (C0_MASK<<c) )
                aux = tecladoMatriz[l][c];
        }
    }   
    if ( aux == 0 )
    {
        if (  b0_bordaSubida() )
        {
            aux = 'C';
        }                
        else if ( b1_bordaSubida() ) 
        {
            aux = 'D';
        }
    }
    return( aux );
}