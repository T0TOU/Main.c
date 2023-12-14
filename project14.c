#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("输入周几\n");
	int a = 0;
	scanf("%d", &a);
	switch (a)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		printf("距离放假还剩:%d\n", 5 - a);
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("输入错误!\n");
	}
	return 0;
}