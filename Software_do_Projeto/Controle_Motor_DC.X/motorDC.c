#include <xc.h>
#include "delay.h"
#include "Timers.h"
#include "motorDC.h"

char motorDC_dc = 0;
void motorDC_init( void )
{
    TRISCbits.TRISC1 = 0;
    TRISCbits.TRISC0 = 0; // Reversão

    T2_init();
    T2_start( 100 );
}

void motorDC( unsigned char c )
{
   // if( motorDC_dc < 100)
        
    motorDC_dc = c;
}

unsigned char motorDC_dutycycle( void )
{
    return(motorDC_dc);
}

void motorDC_inc( void )
{
    delay(150);
    motorDC_dc += (motorDC_dc < 100) ? INCREMENTO : 0; 
}

void motorDC_dec( void )
{
    delay(150);
    motorDC_dc -= (motorDC_dc > 0) ? INCREMENTO : 0; 
}