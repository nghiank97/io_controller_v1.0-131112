
#ifndef _GPIO_H
#define _GPIO_H

#include "binary.h"
#include "utils.h"

/* output pin */
// OS1	RD5
// OS2	RD4
// OS3	RD3
// OS4	RD2
// OS5	RD1
// OS6	RD0
// OS7	RE7
// OS8	RE6
// OS9	RE5
// OS10	RE4
// OS11	RE3
// OS12	RE2
// OS13	RH0
// OS14	RH1
// OS15	RH2
// OS16	RH3
/* pin pin */
// SI1	RB0
// SI2	RB1
// SI3	RB2
// SI4	RB3
// SI5	RG6
// SI6	RG5
// SI7	RF0
// SI8	RG4
// SI9	RF7
// SI10	RF6
// SI11	RF5
// SI12	RF4
// SI13	RF3
// SI14	RF2
// SI15	RH7
// SI16	RH6

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

extern void gpio_init(void);
extern void gpio_write_pin(gpio_out_pin pin, gpio_level value);
extern gpio_level gpio_read_pin(gpio_in_pin pin);

#endif /* _GPIO_H */