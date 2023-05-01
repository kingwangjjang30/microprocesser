/*
 * SW_EX1.c
 *
 * Created: 2023-05-01 ¿ÀÀü 8:57:04
 * Author: user
 */

#include <mega128a.h>

void main(void)
{
    unsigned char sw1;
    
    DDRE=0x00;
    DDRC=0xff;
    
    PORTC=0x00               ;
    
while (1)
    {
    // Please write your application code here   
        sw1=PINE &0b10000000;
        
        if(sw1!=0)
        {
            PORTC=0xff ;
        }             
        else
        {
            PORTC=0x00;
        }

    }
}
