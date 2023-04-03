#include <mega128a.h>
#include <delay.h>
void main(void)
{
    DDRB=0xF0;
    DDRD=0xF0;
    DDRG=0x0F;
    while(1)
    {     
        PORTG=0b00000001;
        PORTB=0x00;
        PORTD=0x60;
        delay_ms(5);
        
        PORTG=0b00000010;
        PORTB=0b11000000;
        PORTD=0x60;
        delay_ms(5);
        
        PORTG=0b00000100;
        PORTB=0x00;
        PORTD=0x60;
        delay_ms(5);
        
        PORTG=0b00001000;
        PORTB=0x00;
        PORTD=0x60;
        delay_ms(5);   
    }
        
}