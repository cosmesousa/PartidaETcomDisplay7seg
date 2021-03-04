/*
 * File:   botoesk.c
 * Author: 20185074
 *
 * Created on 4 de Março de 2021, 15:07
 */


#include <xc.h>

void botoesk_init(void)
{
    TRISDbits.TRISD1 = 1;
    TRISDbits.TRISD0 = 1;
    
    PORTDbits.RD1 = 0;
    PORTDbits.RD0 = 0;
        
}

int s1(void)
{
    return(PORTDbits.RD1);
}

int s0(void)
{
    return(PORTDbits.RD0);
}