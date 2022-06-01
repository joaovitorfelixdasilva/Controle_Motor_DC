#include <xc.h>
#include "Timers.h"
#include "Temporizador.h"


char Dec_seg( void )
{
    if ( seg <= 60)
    {
        seg--;
    } 
}
char Inc_seg ( void )
{
    if ( seg >= 0)
    {
        seg++;
    }
}
char Dec_min( void )
{
    if ( min <= 60)
    {
        min--;
    } 
}
char Inc_min ( void )
{
    if ( min >= 0)
    {
        min++;
    }
}