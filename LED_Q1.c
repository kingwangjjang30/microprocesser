#include <mega128a.h>
void    main(void)
{
    DDRC=0xFF;
    PORTC=0xAA;
    while(1);
}