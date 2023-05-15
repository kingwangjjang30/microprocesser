/*
 * INT_EX.c
 *
 * Created: 2023-05-15 ¿ÀÀü 10:19:26
 * Author: user
 */

#include <mega128a.h>
unsigned char led=0x7f;

void main(void)
{
    DDRC=0xff;
    PORTC=led;
    EIMSK=0b11000000;
    EICRB=0b10100000;
    SREG=0x80;
    while (1);
}
interrupt [EXT_INT6] void LED_TEST1(void)
{
    led=led<<1;
    led=led|0b00000001;
    if(led==0xff)led=0xfe;
    PORTC=led;
}
interrupt [EXT_INT7] void LED_TEST2(void)
{
    led=led>>1;
    led=led|0b10000000;
    if(led==0xff)led=0x7f;
    PORTC=led;
}
