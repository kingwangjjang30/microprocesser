#include <mega128a.h>
#include <delay.h>
void main(void)
{
    int i;
    unsigned char led;
    DDRC=0xFF;
    while(1)
    {
        led=0b11111111;
        for(i=1;i<=9;i++)
        {
             PORTC = led;
             delay_ms(500);
             led >>= 1;
        }
    }
}