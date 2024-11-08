
#include "gpio.h"

extern void timer_init(void){
    //Enable 16bit timer mode before assigning value to TMR0H
    T0CON &=~ (1<<6);
    // timer mode 
    T0CON &=~ (1<<5);
    // Fosc/4 - no prescale
    T0CON &=~ (1<<4);
    // prescale value : 2
    // T0CON &=~ (B111<0);
    TMR0L = 0;
    TMR0H = 0;

    // clear flasg
    INTCON &=~ (1<<2);
    // overflow interrupt enable
    INTCON |= (1<<5);
    // global interrupt enable
    INTCON |= (1<<7);
    // start time
    T0CON |= (1<<7);
}



extern void timer_callback(void){
    if ((INTCON&(1<<2)) != 0){
        INTCON &=~ (1<<2);
    }
}