#include <xc.h>
#include "motorDC.h"

#define TMR0_RELOAD     (256-250)
#define TMR1_RELOAD     (0xFFFF-1000+1)
#define TMR2_RELOAD     (100)

unsigned int T0count;
unsigned int T1count;
unsigned int T2count;



void T0_init( void )
{
    INTCONbits.GIE = 0;
    OPTION_REGbits.PSA = 0;
    OPTION_REGbits.PS = 0x1;
    OPTION_REGbits.T0CS = 0;
    TMR0 = TMR0_RELOAD; 
    INTCONbits.T0IE = 0;
    INTCONbits.GIE = 1;
}


void T0_int( void )
{
    TMR0 = TMR0_RELOAD;
    if( T0count )
    {
        --T0count;
    }
}

void T0_start( unsigned int c )
{
    TMR0 = TMR0_RELOAD;
    T0count = c;
    INTCONbits.T0IE = 1;
}

void T0_pause( void )
{
    INTCONbits.T0IE = 0;
}

void T0_play( void )
{
    INTCONbits.T0IE = 1;
}

unsigned int T0_status( void )
{
    return( T0count );
}




void T1_init(void)
{
    INTCONbits.GIE = 0;
    T1CONbits.TMR1GE = 0;
    T1CONbits.TMR1ON = 0;
    T1CONbits.TMR1CS = 0;
    T1CONbits.T1CKPS = 0;
    INTCONbits.PEIE = 1;
    PIE1bits.TMR1IE = 1;
    INTCONbits.GIE = 1;
}
    

void T1_int( void )
{
    TMR1H = (TMR1_RELOAD >> 8) & 0x00FF;
    TMR1L = (TMR1_RELOAD >> 0) & 0x00FF;
    if( T1count )
    {
        --T1count;
    }
}

void T1_start( unsigned int c )
{
    T1CONbits.TMR1ON = 0;
    TMR1H = (TMR1_RELOAD >> 8) & 0x00FF;
    TMR1L = (TMR1_RELOAD >> 0) & 0x00FF;
    T1count = c;
    T1CONbits.TMR1ON = 1;
}

void T1_pause( void )
{
    T1CONbits.TMR1ON = 0;
}

void T1_play( void )
{
    T1CONbits.TMR1ON = 1;
}

unsigned int T1_status( void )
{
    return( T1count );
}





void T2_init(void)
{
    INTCONbits.GIE = 0;
    PR2 = TMR2_RELOAD;
    TMR2 = 0;
    T2CONbits.T2CKPS = 0x1; // 1:4
    T2CONbits.TOUTPS = 0x1; // 1:2
    INTCONbits.PEIE = 1;
    PIE1bits.TMR2IE = 1;
    INTCONbits.GIE = 1;
}


    
void T2_int( void )
{
    ++T2count;
    T2count %= 100;
    Motor_DC = (T2count < motorDC_dutycycle()) ? 1 : 0 ;
}

void T2_start( unsigned int c )
{
    T2count = c;
    T2CONbits.TMR2ON = 1;
}

void T2_pause( void )
{
    T2CONbits.TMR2ON = 0;
}

void T2_play( void )
{
    T2CONbits.TMR2ON = 1;
}

unsigned int T2_status( void )
{
    return( T2count );
}
