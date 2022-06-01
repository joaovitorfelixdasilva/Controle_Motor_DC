#include <xc.h>
#include "config.h"
#include "delay.h"
#include "lcd.h"
#include "teclado.h"
#include "motorDC.h"
#include "Timers.h"
#include "Temporizador.h"

void main( void )
{
    char tecla;
    char dutycycle = 0;
    
    lcd_init();
    teclado_init();
    motorDC_init();

    lcd_print(0,0, "Controle Motor  " );
    delay(1000);
    motorDC(0);

    while( 1 )
    {   
        tecla = teclado();

        switch( tecla )
        {
            case '0': 
                        motorDC(0);
                        break;
            case '1': 
                        motorDC(25);
                        break;
            case '2': 
                        motorDC(50);
                        break;
            case '3': 
                        motorDC(75);
                        break;
            case 'A': 
                        motorDC(100);
                        break;
            case 'C': 
                        motorDC_inc();
                        break;
            case 'D': 
                        motorDC_dec();
                        break;                       
            case '*':
                        Reversao = 0;
                        break;
            case '#':
                        Reversao = 1;
                        break;
            case '4':
                        Inc_seg;
                        break;
            case '7':
                        Dec_seg;
                        break;
            case '5':
                        Inc_min;
                        break;
            case '8':
                        Dec_min;
                        break;
        }

        if( tecla )
        {
            if ( motorDC_dutycycle() == 0)
                lcd_print(0,0, "   DESLIGADO    " );
            else
                lcd_print(0,0, "     LIGADO     " );
            lcd_print(1,0, " VELOCIDADE    %" );
            lcd_num (1,12,(int)motorDC_dutycycle(),3 );

            if( Reversao )
                lcd_print(0,14, " >" );
            else
                lcd_print(0,14, "< " );

            lcd_num (0,0,min,2 );
            lcd_num (0,2,seg,2 );
            
        }
    }
}
