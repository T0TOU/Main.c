#define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>	
	
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	if (a > b)
	{
		printf("max:%d\n", a);
	}
	if (a < b)
	{
		printf("Max:%d\n", b);
	}
	if (a == b)
	{

		printf("X1=X2=%d\n",a);
	
		return 0;
}