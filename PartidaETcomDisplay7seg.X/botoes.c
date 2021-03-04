/*
 * File:   botoes.c
 * Author: 20185074
 *
 * Created on 4 de Março de 2021, 15:03
 */


#include <xc.h>

void botoes_init(void)
{
 PORTD = 1;
}

int botao_incrementar( void )
{
    return(PORTDbits.RD3);
}

int botao_decrementar( void )
{
    return(PORTDbits.RD2);
}