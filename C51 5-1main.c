#include <REGX52.H>
#include "Delay.h"
#include "LightH.h"
void main()
{
	int t = 100;
	int i;
	for(i=0;i<=3;i++)
	{
		P2_7=1;
		P2_0=0;
		Delay(t);
		P2_0=1;
		P2_1=0;
		Delay(t);
		P2_2=0;
		P2_1=1;
		Delay(t);
		P2_3=0;
		P2_2=1;
		Delay(t);
		P2_4=0;
		P2_3=1;
		Delay(t);
		P2_5=0;
		P2_4=1;
		Delay(t);
		P2_5=1;
		P2_6=0;
		Delay(t);
		P2_6=1;
		P2_7=0;
		Delay(t);
	}
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
