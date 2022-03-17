/*
 * File:   delay.c
 * Author: josewrpereira
 *
 * Created on 19 April 2021, 22:04
 */


#include <xc.h>
#include "delay.h"

void delay( unsigned int t )
{
    while( t )
    {
        __delay_ms( 1 );
        --t;
    }
}