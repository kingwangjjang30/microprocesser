/*
 * INT_EX4.c
 *
 * Created: 2023-05-15 ¿ÀÀü 10:54:14
 * Author: user
 */

#include <mega128a.h>
#include <delay.h>

flash char seg_pat[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
unsigned char N1=0;

void main(void)
{
    DDRB=0xf0;
    DDRD=0xf0;
    DDRG=0x0f;
    
    PORTG=0x08;
    PORTB=0x0;
    PORTD=0x0;
    
    EIMSK=0b00010000;
    EICRB=0b00000010;
    SREG=0x80;
    

    while(1)
    {
        PORTD=(seg_pat[N1]&0x0f)<<4;
        PORTB=(seg_pat[N1]&0xf0);
    }
    
}
interrupt [EXT_INT4] void LED_TEST(void)
{
    N1=(N1+1)%1;
       

}