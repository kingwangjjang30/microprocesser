/*
 * slkghdslgh9iopaoigwe4gbo4ebn.c
 *
 * Created: 2023-06-19 ¿ÀÀü 9:16:50
 * Author: user
 */

#include <mega128a.h>

unsigned char led = 0xFE;

void main(void)
{
    DDRC=0xff;
    PORTC=led;
    
    TCCR0=0x0f;
    TIMSK=0x02;
    OCR0=155;
    SREG=0x80;
    while(1);
}
interrupt [TIM0_COMP] void timer_comp0(void)
{
    led=led<<1|0x01;
    if(led==0xFF)led=0xFE;
    PORTC=led;

}
