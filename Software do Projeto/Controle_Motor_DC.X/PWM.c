#include <xc.h>

char Valor = 127;
void Inicializa_PWM(void){
   TRISCbits.TRISC2 = 0;    // Usando o módulo CCP1 (pino C2)
   T2CON = 0x04;            // Timer2 desligado, Prescaler = 1 (p. 137 do datasheet)
   PR2 = 0xFF;              // Registrador que contém o período do Timer2 (p. 137 do datasheet)
   CCP1CON = 0x3F;          // PWM com uma saída (P1A - Pino C2) (p. 151 do datasheet)
   CCPR1L = 0x00;           // Duty Cycle (junto com os bits 4 e 5 de CCP1CON para formar 10 bits)
}
// -----------------------------------------------------


// -----------------------------------------------------
// Rotina de configuração do Periodo do PWM
// -----------------------------------------------------
// Para cálculo do período do PWM (p. 153 do datasheet):
// Periodo = [(PR2) + 1] * 4 * Tosc * (Timer2 Prescaler)
// -----------------------------------------------------
void Periodo_PWM(unsigned char Valor){
   T2CON = 0x04;         // Timer2 desligado, Prescaler = 1 (p. 137 do datasheet)
   PR2 = Valor;          // Registrador que contém o período do Timer2 (p. 137 do datasheet)
}
// -----------------------------------------------------


// -----------------------------------------------------
// Rotina de configuração de Duty Cycle do PWM
// -----------------------------------------------------
// Para cálculo do Duty Cycle do PWM (p.154 do datasheet):
// DutyCycle = (CCPR1L:CCP1CON) * TOSC * (TMR2 Prescaler)
// -----------------------------------------------------
void DutyCycle_PWM(unsigned int Valor){
   CCP1CONbits.DC1B0 = Valor;
   CCP1CONbits.DC1B1 = Valor >> 1;
   CCPR1L = Valor >> 2;
}
