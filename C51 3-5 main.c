#include <REGX52.H>
#include <intrins.h>
void Delay1ms(int x)		//@12.000MHz
{
	unsigned char i, j;
	while(x)
	{
	i = 12;
	j = 169;
	do
	{
		while (--j);
	} while (--i);
	x--;
	}
}
void main()
{
	unsigned char num =0;
	P2=~(0x01);
	while(1)
{
		if(P3_1==0)
	{
		Delay1ms(10);
		while(P3_1==0);
		Delay1ms(10);
		 num++;
		if(num>=8)
		{
			num=0;
		}
		P2=~(0x01<<num) ;		
	}
		if(P3_0==0)
	{
		Delay1ms(10);
		while(P3_0==0);
		Delay1ms(10);
		if(num==0)
		{
		num=7;
		}
		else 
		num--;
		P2=~(0x01<<num) ;
	}
}
}