/*
 * File:   delay.c
 * Author: 20185074
 *
 * Created on 4 de Março de 2021, 15:41
 */


#include <xc.h>
#include "config.h"

void delay( int t)
{
    while( t )
    {   
        __delay_ms(1);  
        --t;
    }
}