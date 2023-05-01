
#include <mega128a.h>

void main(void)
{
    unsigned char o_sw, n_sw;
    unsigned char led = 0x7F;
    
    DDRE=0x00;
    DDRC=0xff;
    
    PORTC=0xff;  
    
    o_sw=PINE&0xf0;
    
while (1)
    {  
        n_sw=PINE&0xf0;
        if(o_sw==0b11110000 && n_sw==0b11100000)                                    
        {
            led=(led>>1)|1;
            if(led==0xff)
            {
                led=0x7F;
            }
            PORTC=led;
        }     
         o_sw=n_sw;

    }
}
