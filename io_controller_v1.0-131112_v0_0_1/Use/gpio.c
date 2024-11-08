
#include "gpio.h"

void mcu_gpio_write_pin(u08 pin, u08 value){

}
u08 mcu_gpio_read_pin(void){
    
}

void gpio_write_pin(gpio_out_pin pin, gpio_level value){
    switch (pin)
    {
        case OS01:
            /* code */
            break;
        case OS02:
            /* code */
            break;
        case OS03:
            /* code */
            break;
        case OS04:
            /* code */
            break;
        case OS05:
            /* code */
            break;
        case OS06:
            /* code */
            break;
        case OS07:
            /* code */
            break;
        case OS08:
            /* code */
            break;
        case OS09:
            /* code */
            break;
        case OS10:
            /* code */
            break;
        case OS11:
            /* code */
            break;
        case OS12:
            /* code */
            break;
        case OS13:
            /* code */
            break;
        case OS14:
            /* code */
            break;
        case OS15:
            /* code */
            break;
        case OS16:
            /* code */
            break;
        default:
            break;
    }
}

gpio_level gpio_read_pin(gpio_in_pin pin){
    switch (pin)
    {
        case SI01:
            /* code */
            break;
        case SI02:
            /* code */
            break;
        case SI03:
            /* code */
            break;
        case SI04:
            /* code */
            break;
        case SI05:
            /* code */
            break;
        case SI06:
            /* code */
            break;
        case SI07:
            /* code */
            break;
        case SI08:
            /* code */
            break;
        case SI09:
            /* code */
            break;
        case SI10:
            /* code */
            break;
        case SI11:
            /* code */
            break;
        case SI12:
            /* code */
            break;
        case SI13:
            /* code */
            break;
        case SI14:
            /* code */
            break;
        case SI15:
            /* code */
            break;
        case SI16:
            /* code */
            break;
        default:
            break;
    }
    return LOW;
}