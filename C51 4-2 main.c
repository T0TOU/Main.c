#include <REGX52.H>
#include <intrins.h>
#include <stdio.h>
unsigned char c[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F,0x40,0x80};
void Delay(int x)		//@12.000MHz
{
	unsigned char i, j;
	while(x)
{
	i = 2;
	j = 239;
	do
	{
		while (--j);
	} while (--i);
	x--;
}
}

void LightH(unsigned char a,b)
{
	switch(a)
	{
		case 1:P2_4=1;P2_3=1;P2_2=1;break;      //10是“-”；
		case 2:P2_4=1;P2_3=1;P2_2=0;break;      //11是“.”；
		case 3:P2_4=1;P2_3=0;P2_2=1;break;
		case 4:P2_4=1;P2_3=0;P2_2=0;break;
		case 5:P2_4=0;P2_3=1;P2_2=1;break;
		case 6:P2_4=0;P2_3=1;P2_2=0;break;
		case 7:P2_4=0;P2_3=0;P2_2=1;break;
		case 8:P2_4=0;P2_3=0;P2_2=0;break;
	}		
	P0 = c[b];
	//Delay(1);//因为单片机速度太快会出现晶体管重影
	//P0=0x00; //所以延迟一毫秒清零
}
void main()
{
	while(1)
	{
	LightH(1,5);
	Delay(1);
	LightH(2,2);
	Delay(1);
	LightH(3,0);
	Delay(1);
	LightH(4,0xA);
	Delay(1);
	LightH(5,1);
	Delay(1);
	LightH(6,3);
	Delay(1);
	LightH(7,1);
	Delay(1);
	LightH(8,4);
	Delay(1);
	}

	
}	
	