#ifndef PWM_H
#define	PWM_H

#define saidaPWM PORTCbits.RC2

char Valor = 127;

void Inicializa_PWM(void);
void Periodo_PWM(unsigned char Valor);
void DutyCycle_PWM(unsigned int Valor);

#endif	/* PWM_H */
