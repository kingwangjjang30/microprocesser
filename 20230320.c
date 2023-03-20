/*
 * 20230320.c
 *
 * Created: 2023-03-20 ¿ÀÀü 9:16:14
 * Author: user
 */

#include <mega128a.h>

void main(void)
{
    DDRC=0B11111111;//0xFF
    
    PORTC=0B01010101;//0X55
    
    while (1);

}
