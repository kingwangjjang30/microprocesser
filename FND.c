/*
 * FND.c
 *
 * Created: 2023-04-03 ¿ÀÀü 9:28:05
 * Author: user
 */

#include <mega128a.h>
#include <delay.h>

void main(void)
{
    // Please write your application code here
    DDRB=0xF0;
    DDRD=0xF0;
    DDRG=0x0F;
    
    PORTB=0x60;
    PORTD=0xF0;
    
    while(1)
    {
        PORTG=0b00001000;
        delay_ms(500);
        
        
        PORTG=0b00000100;
        delay_ms(500);
        
        
        PORTG=0b00000010;
        delay_ms(500);
        
        
        PORTG=0b00000001;
        delay_ms(500);

    }
}
