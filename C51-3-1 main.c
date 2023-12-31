#include <REGX52.H>
#include <intrins.h>
void main()
{
	while(1)
	{
		if(P3_1==0 && P3_0==0)
		{
			P2=0;
		}
		if(P3_1==0)
		{
			P2_0=0;
		}
		else
			P2=0xFF;
		}
}