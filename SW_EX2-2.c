/*
 * SW_EX1.c
 *
 * Created: 2023-05-01 ���� 8:57:04
 * Author: user
 */

#include <mega128a.h>

void main(void)
{
    unsigned char key;
    
    DDRE=0x00;
    DDRC=0xff;
    
    PORTC=0x00;
    
while (1)
    {
    // Please write your application code here   
    key = PINE&0xf0;
    if(key==0b11100000)PORTC=0x00;
    else if(key==0b11010000)PORTC=0xff;
    else if(key==0b10110000)PORTC=0x55;
    else if(key==0b01110000)PORTC=0xAA;

    }
}
