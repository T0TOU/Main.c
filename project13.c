#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("How old are you?(���Ϲ�����������֯������Ļ��ֵĹ涨)\n");
	int a = 0;
	scanf("a=%d", &a);
	if (a < 18)
	{
		printf("δ����\n");
		printf("(δ�ﵽ��������)\n");
	}
	else if (a >= 18 && a <= 20)
		printf("����\n");
	else if (a >= 21 && a <= 44)
		printf("����\n");
	else if (a > 44 && a <= 59)
		printf("����\n");
	else if (a > 59 && a < 74)
		printf("������\n");
	else if (a > 74 && a < 89)
		printf("����\n");
	else
		printf("��������\n");
	printf("birthday year:%d\n", 2023 - a);
	while (a >= 21)
	{
		printf("(�ﵽ��������)\n");
		a = 1;
		a--;
	}
	printf("--------------------------------------------------------------------------------------------\n");
	int e = 0;
	scanf("%d", &e);
	if (e % 2 == 1)
	{
		printf("e=%d(����)\n", e);
	}
	else
		printf("e=%d(ż��)\n", e);

	return 0;
}