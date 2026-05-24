/*void delay_ms(unsigned int ms_dly)
{
	unsigned int i;
	for(;ms_dly>0;ms_dly--)
		for(i=12000;i>0;i--);	   
                               
}*/
#include "types.h"
void delay_s(u32 dlyS){
	dlyS*=12000000;
	while(dlyS--);
}
void delay_ms(u32 dlyMs){
	dlyMs*=12000;
	while(dlyMs--);
}
void delay_us(u32 dlyUs){
	dlyUs*=12;
	while(dlyUs--);
}

