#include <REGX52.H>
#include <intrins.h>
void Delay1ms(unsigned int xms)		
{
	unsigned char i, j;
	while(xms)
	{
	i = 2;
	j = 239;
	do
	{
		while (--j);
	} while (--i);
	xms-=1;
}
}

void main()
{
	while(1)
	{
		if (P3_1==0)
		{
			Delay1ms(10);
			while (P3_1==0);
			Delay1ms(10);
			P2_7=~P2_7;
			P2_0=~P2_0;
		}
		if(P3_0==0)
		{
			Delay1ms(10);
			while(P3_0==0);
			Delay1ms(10);
			P2_1=~P2_1;
			P2_6=~P2_6;
		}
		if(P3_2==0)
		{
			Delay1ms(10);
			while(P3_2==0);
			Delay1ms(10);
			P2_2=~P2_2;
			P2_5=~P2_5;
		}
		if(P3_3==0)
		{
			Delay1ms(10);
		while(P3_3==0);
			Delay1ms(10);
		P2_3=~P2_3;
		P2_4=~P2_4;
		}

	}
}