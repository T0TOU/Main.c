#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("How old are you?(联合国世界卫生组织对年龄的划分的规定)\n");
	int a = 0;
	scanf("a=%d", &a);
	if (a < 18)
	{
		printf("未成年\n");
		printf("(未达到法定婚龄)\n");
	}
	else if (a >= 18 && a <= 20)
		printf("青年\n");
	else if (a >= 21 && a <= 44)
		printf("青年\n");
	else if (a > 44 && a <= 59)
		printf("中年\n");
	else if (a > 59 && a < 74)
		printf("轻老年\n");
	else if (a > 74 && a < 89)
		printf("老年\n");
	else
		printf("高龄老人\n");
	printf("birthday year:%d\n", 2023 - a);
	while (a >= 21)
	{
		printf("(达到法定婚龄)\n");
		a = 1;
		a--;
	}
	printf("--------------------------------------------------------------------------------------------\n");
	int e = 0;
	scanf("%d", &e);
	if (e % 2 == 1)
	{
		printf("e=%d(奇数)\n", e);
	}
	else
		printf("e=%d(偶数)\n", e);

	return 0;
}