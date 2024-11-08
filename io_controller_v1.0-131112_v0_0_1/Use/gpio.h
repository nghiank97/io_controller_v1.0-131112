
#ifndef _GPIO_H
#define _GPIO_H

#include "binary.h"
#include "utils.h"

typedef enum
{
    OS01        = 0,
    OS02        = 1,
    OS03        = 2,
    OS04        = 3,
    OS05        = 4,
    OS06        = 5,
    OS07        = 6,
    OS08        = 7,
    OS09        = 8,
    OS10        = 9,
    OS11        = 10,
    OS12        = 11,
    OS13        = 12,
    OS14        = 13,
    OS15        = 14,
    OS16        = 15
}gpio_out_pin;

typedef enum
{
    SI01        = 0,
    SI02        = 1,
    SI03        = 2,
    SI04        = 3,
    SI05        = 4,
    SI06        = 5,
    SI07        = 6,
    SI08        = 7,
    SI09        = 8,
    SI10        = 9,
    SI11        = 10,
    SI12        = 11,
    SI13        = 12,
    SI14        = 13,
    SI15        = 14,
    SI16        = 15
}gpio_in_pin;

typedef enum{
    LOW         = 0,
    HIGH        = 1
}gpio_level;

void gpio_write_pin(gpio_out_pin pin, gpio_level value);
gpio_level gpio_read_pin(gpio_in_pin pin);

#endif /* _GPIO_H */