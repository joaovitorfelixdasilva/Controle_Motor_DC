/* 
 * File:   Timer.h
 * Author: 21193451
 *
 * Created on 18 de Maio de 2022, 10:53
 */

#ifndef TIMERS_H
#define TIMERS_H

void T0_init( void );
void T0_int( void );
void T0_start( unsigned int c );
void T0_pause( void );
void T0_play( void );
unsigned int T0_status( void );

void T1_init(void);
void T1_int( void );
void T1_start( unsigned int c );
void T1_pause( void );
void T1_play( void );
unsigned int T1_status( void );

void T2_init(void);
void T2_int( void );
void T2_start( unsigned int c );
void T2_pause( void );
void T2_play( void );
unsigned int T2_status( void );

#endif