
#include "gpio.h"

extern void gpio_init(void){
/* output pin */
// OS1	RD5
// OS2	RD4
// OS3	RD3
// OS4	RD2
// OS5	RD1
// OS6	RD0
    TRISD &=~(1<<0);
    TRISD &=~(1<<1);
    TRISD &=~(1<<2);
    TRISD &=~(1<<3);
    TRISD &=~(1<<4);
    TRISD &=~(1<<5);
// OS7	RE7
// OS8	RE6
// OS9	RE5
// OS10	RE4
// OS11	RE3
// OS12	RE2
    TRISE &=~(1<<2);
    TRISE &=~(1<<3);
    TRISE &=~(1<<4);
    TRISE &=~(1<<5);
    TRISE &=~(1<<6);
    TRISE &=~(1<<7);
// OS13	RH0
// OS14	RH1
// OS15	RH2
// OS16	RH3
    TRISH &=~(1<<0);
    TRISH &=~(1<<1);
    TRISH &=~(1<<2);
    TRISH &=~(1<<3);
/* pin pin */
// SI1	RB0
// SI2	RB1
// SI3	RB2
// SI4	RB3
    TRISB |= (1<<0);
    TRISB |= (1<<1);
    TRISB |= (1<<2);
    TRISB |= (1<<3);
// SI5	RG6
// SI6	RG5
    TRISG |= (1<<6);
    TRISG |= (1<<5);
// SI7	RF0
    TRISF |= (1<<0);
// SI8	RG4
    TRISG |= (1<<4);
// SI9	RF7
// SI10	RF6
// SI11	RF5
// SI12	RF4
// SI13	RF3
// SI14	RF2
    TRISF |= (1<<7);
    TRISF |= (1<<6);
    TRISF |= (1<<5);
    TRISF |= (1<<4);
    TRISF |= (1<<3);
    TRISF |= (1<<2);
// SI15	RH7
// SI16	RH6
    TRISH |= (1<<7);
    TRISH |= (1<<6);
}

extern void gpio_write_pin(gpio_out_pin pin, gpio_level value){
    switch (pin)
    {
        case OS01:
            PORTD |= (1<<5);
            break;
        case OS02:
            PORTD |= (1<<4);
            break;
        case OS03:
            PORTD |= (1<<3);
            break;
        case OS04:
            PORTD |= (1<<2);
            break;
        case OS05:
            PORTD |= (1<<1);
            break;
        case OS06:
            PORTD |= (1<<0);
            break;
        case OS07:
            PORTE |= (1<<7);
            break;
        case OS08:
            PORTE |= (1<<6);
            break;
        case OS09:
            PORTE |= (1<<5);
            break;
        case OS10:
            PORTE |= (1<<4);
            break;
        case OS11:
            PORTE |= (1<<3);
            break;
        case OS12:
            PORTE |= (1<<2);
            break;
        case OS13:
            PORTH |= (1<<0);
            break;
        case OS14:
            PORTH |= (1<<1);
            break;
        case OS15:
            PORTH |= (1<<2);
            break;
        case OS16:
            PORTH |= (1<<3);
            break;
        default:
            break;
    }
}

extern gpio_level gpio_read_pin(gpio_in_pin pin){
    switch (pin)
    {
        case SI01:
            return (gpio_level)((PORTB&(1<<0)) != 0);
        case SI02:
            return (gpio_level)((PORTB&(1<<1)) != 0);
        case SI03:
            return (gpio_level)((PORTB&(1<<2)) != 0);
        case SI04:
            return (gpio_level)((PORTB&(1<<3)) != 0);
        case SI05:
            return (gpio_level)((PORTG&(1<<6)) != 0);
        case SI06:
            return (gpio_level)((PORTG&(1<<5)) != 0);
        case SI07:
            return (gpio_level)((PORTF&(1<<0)) != 0);
        case SI08:
            return (gpio_level)((PORTG&(1<<4)) != 0);
        case SI09:
            return (gpio_level)((PORTF&(1<<7)) != 0);
        case SI10:
            return (gpio_level)((PORTF&(1<<6)) != 0);
        case SI11:
            return (gpio_level)((PORTF&(1<<5)) != 0);
        case SI12:
            return (gpio_level)((PORTF&(1<<4)) != 0);
        case SI13:
            return (gpio_level)((PORTF&(1<<3)) != 0);
        case SI14:
            return (gpio_level)((PORTF&(1<<2)) != 0);
        case SI15:
            return (gpio_level)((PORTH&(1<<7)) != 0);
        case SI16:
            return (gpio_level)((PORTH&(1<<6)) != 0);
        default:
            break;
    }
    return LOW;
}