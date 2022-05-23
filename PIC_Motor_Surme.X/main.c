
#include <stdio.h>
#include <stdlib.h>
#include <xc.h>



#pragma config FOSC = EXTRC     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = OFF       // Watchdog Timer (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)


#define _XTAL_FREQ 4000000


int main(int argc, char** argv) {

    TRISB &= ~(2 << 1);  // RB2 Digital Output
    TRISB |= (1 << 1);  // RB1 Digital Input
    
    while(1)
    {
        if(!RB1)
        {
            RB2 = 1;
        }
        else
        {
            RB2 = 0;
        }
    }
}

