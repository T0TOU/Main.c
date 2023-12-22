#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d\n", a, b, c);
	while (1)
	{
		if (a % b == 0)
		{
			printf("最大公约数: %d\n", b);
			break;
		}
		b = a % b;
	}
	int i = 0;
	printf("1000年-2000年间 闰年为：\n");
	int all = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0)
		{
			printf("%d ", i);
			all++;
		}
		if (i % 400 == 0)
		{
			printf("%d ", i);
			all++;
		}
	}
	printf("\n闰年共有：%d\n", all);
	printf("0-100中能被2整除的数\n");
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
			printf("%d ", i);
	}
	printf("\n100-200中的所质数：\n");
	int stio = 0;
	for (i = 100; i <= 200; i++)
	{
		int cosn = 0;
		for (cosn = 2; cosn <= sqrt(i); cosn++) //sqrt--是一个开平方的数学库函数 i的平方跟
		{
			if (i % cosn == 0)
			break;
		}
		if (cosn >= sqrt(i))
		{
			printf("%d ", i);
			stio++;
		}
	}
	printf("质数有%d个\n", stio);
	int cale = 0;
	for (i = 1; i <= 100; i++)
	{
		if ((i - 9) % 10 == 0 ) 
		{
			printf("%d ", i);
			cale++;
		}
		if (i / 10 == 9)
		{
			printf("%d ", i);
			cale++;
		}
	}
	printf("\nhave :%d\n", cale);
	double sum = 1;
	for (i = 2; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			sum = sum - 1.0 / i;
		}
		else
		{
			sum = sum + 1.0 / i;
		}
	}
	printf("sum = %lf\n", sum);
	double sum2 = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum2 = sum2 += flag * 1.0 / i;
		flag = -flag; 
	}
	printf("sum2 = %lf\n", sum2);
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int max = arr[0];
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("Max = %d\n", max);
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
	//普通方法查找出数组中数的下标；
	char arr2[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
	int e = 0;
	int P = 0;
	scanf("%d", &e);
	for (P = 0; P <= sizeof(arr2)-1; P++)
	{
		if (arr[P] == e)
		{
		printf("arr[%d] = %d\n", P, e);
		break;
		}
	}
	if (P > sizeof(arr2) - 1)
	{
		printf("No\n");
	}
	return 0;
}