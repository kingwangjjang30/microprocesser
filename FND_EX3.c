#include <mega128a.h>
#include <delay.h>
flash unsigned char seg[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
void main(void)
{
    int i;
    
    DDRB=0b11110000;
    DDRD=0b11110000;
    DDRG=0b00001111;
    
    PORTG=0b00001000;
    PORTB=0x0;
    PORTD=0X0;
    while(1)
    {
        for(i=9;i>=0;i--)
        {
            PORTD=(seg[i]&0x0F)<<4;
            PORTB=(seg[i]&0xF0);
            delay_ms(500);
        }
    }
}