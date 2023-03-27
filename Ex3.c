/*
 * Ex3.c
 *
 * Created: 2023-03-27 ¿ÀÀü 8:54:16
 * Author: user
 */

#include <mega128a.h>
#include <delay.h>

void main(void)
{
    int i;
    unsigned char led;
    DDRC=0xFF;
while (1)
    {
    // Please write your application code here 
        led=0b11111110;
        for(i=0;i<=9;i++)
        {
            PORTC=led;
            delay_ms(500);
            led<<=1;
        }

    }
}
