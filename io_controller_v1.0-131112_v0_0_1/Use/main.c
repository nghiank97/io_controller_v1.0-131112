
#include "main.h"

void interrupt isr(){
    timer_callback();
}

void main(void){
    setup();
    while (1)
    {
        loop();
    }
}