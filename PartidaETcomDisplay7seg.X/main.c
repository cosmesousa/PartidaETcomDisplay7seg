/*
 * File:   main.c
 * Author: 20185074
 *
 * Created on 4 de Março de 2021, 15:01
 */


#include "delay.h"
#include "display7seg.h"
#include "contatores.h"
#include "botoesk.h"
#include <xc.h>
#include "config.h"

void main(void) 
{
    int cont = 0;
    int estado = 0;
    contatores_init();
    botoesk_init();
    diplay7seg_init();
    int t; 
    
    while(1)
    {    
        switch(estado)
        {        
            case 0:
                estado = 1;
                break;
                
             case 1:
                if(s1() == 1 && k1_status()== 0 )
                    estado = 2;
                break;
            case 2:
                k1(1);
                k2(1);
                estado = 3;
                break;
            case 3:
                t = 3000;
                estado = 4;
                break;
            case 4:
                delay(1);
                --t;
                estado = 5;
                break;
            case 5:
                ++cont;
                if(s0()==1)
                    estado = 7;
                estado = 6;
            case 6:
                 k1(1);
                 k2(0);
                 k3(1);
                 if (s0()==1)
                     estado = 7;
                break;
            case 7:
                k1(0);
                k2(0);
                k3(0);
                estado = 1;
                break;
  
    
        }
        display7seg(cont);
        
        if(cont>=10)
            cont=0;
    } 
}