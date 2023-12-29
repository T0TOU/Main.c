#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void menu()
{
	printf("  ********0--100数字猜取********\n");
	printf("***    1.Play Game   0.Exit    ***\n");
	printf("**********************************\n");
}
int game(int x)
{
	                         //srand((unsigned int)time(NULL));//放这是没次进入game函数都要进行一次rand的起点定义
	int c = (rand()) % 100 + 1;                                //注：srand(int)所以将long整形 time 直接定义成无负数整形；
	while (1)                                                  //(NULL)是空指针
	{
		if (x < c)
		{
			printf("猜小了\n");
			printf("请猜数字 >:");
			scanf("%d", &x);
			continue;
		}
		if (x > c)
		{
			printf("猜大了\n");
			printf("请猜数字 >:");
			scanf("%d", &x);
			continue;
		}
		if (x == c)
		{
			printf("恭喜你！猜对了！\n");
			break;
		}
	}
	Sleep(1000);
	system("cls");
	printf("Last---X = %d\n", c);
}
int main()
{
	srand((unsigned int)time(NULL));//srand作用是生成一个随机起点 --time是一个时间戳 rand是一个起点然后--1次--2次...，如果每次起点更改的话，
	int a = 0;						//每一次随机都是第一次随机,随机的范围一样；如果两段时间相近，那么数字也就相近
	do
	{
		menu();
		printf("输入 : 1 或 0 >:");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			printf("请猜数字>:");
			int b = 0;
			scanf("%d", &b);
			game(b);
			break;
		case 0:
			break;
		default :
			printf("输入错误\n");
			Sleep(1000);
			system("cls");
			break;
		}
	} while (a);
	printf("退出游戏\n");
	return 0;
}