#include <mega128A.h>
unsigned char led = 0xff;
unsigned char cnt = 0;

void main(void)
{
    DDRC=0xff;
    PORTC=led;
    
    TCCR0=0x06;
    TIMSK=0x01;
    TCNT0=6;
    SREG=0x80;
    
    while(1);
}
interrupt [TIM0_OVF] void timer_int0(void)
{

    cnt++;
    if(cnt==250)
    {
        led=led^0xff;
        PORTC=led;
        cnt=0;
    }

}