#include <mega128a.h>
#include <delay.h>
void    main(void)
{
    DDRC=0xff;
    while(1)
    {
        PORTC=0x55;
        delay_ms(500);
        
        
        PORTC=0xAA;
        delay_ms(500);
        
    }
}