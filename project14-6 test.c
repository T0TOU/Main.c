#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int sum = 0;
	for (a = 1; a <= 10; a++)
	{
		int i = 0;
		int ret = 1;
		for (i = 1; i <= a; i++)
		{
			ret *= i;
		}
		sum += ret;
		printf("ret=%d\n", ret);
	}
	printf("sum=%d\n", sum);
	//ÓÅ»¯Ð´·¨
	int sum2 = 0;
	int ret2 = 1;
	for (a = 1; a <= 10; a++)
	{
		ret2 *= a;
		sum2 += ret2;
	}
	printf("sum2=%d\n", sum2);
	int c = 0;
	int ret3 = 1;
	scanf("%d", &c);
	for (a = 1; a <= c; a++)
	{
		ret3 = ret3 * a;
	}
	printf("sum%d=%d\n", c, ret3);
	return 0;
}