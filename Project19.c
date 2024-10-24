#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<Windows.h> 
void color(const unsigned short textColor)
{
	if (textColor >= 0 && textColor <= 15)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), textColor);
	else
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
int judge(char* x)
{
	if (strcmp(x, "正弦交流电") == 0 || strcmp(x, "正弦") == 0 || strcmp(x, "正") == 0 || strcmp(x, "余弦") == 0 || strcmp(x, "z") == 0)
	{
		return 1;
	}
	else if (strcmp(x, "半波整流") == 0 || strcmp(x, "半波") == 0 || strcmp(x, "b") == 0)
	{
		return 2;
	}
	else if (strcmp(x, "全波整流") == 0 || strcmp(x, "全波") == 0 || strcmp(x, "q") == 0)
	{
		return 3;
	}
	else if (strcmp(x, "三角波") == 0 || strcmp(x, "三角") == 0 || strcmp(x, "s") == 0)
	{
		return 4;
	}
	else if (strcmp(x, "锯齿波") == 0 || strcmp(x, "锯齿") == 0 || strcmp(x, "j") == 0)
	{
		return 5;
	}
	else if (strcmp(x, "方波") == 0 || strcmp(x, "方") == 0 || strcmp(x, "f") == 0)
	{
		return 6;
	}
	else
		return 0;
}
int judge2(char* x)
{
	if (strcmp(x, "有效值") == 0 || strcmp(x, "y") == 0)
	{
		return 1;
	}
	else if (strcmp(x, "平均值") == 0 || strcmp(x, "p") == 0)
	{
		return 2;
	}
	else if (strcmp(x, "最大值") == 0 || strcmp(x, "z") == 0)
	{
		return 3;
	}
	else
		return 0;
}
int data(int x)
{
	char datal[6];
	char lx2[4];
	double max = 0;
	double vaild = 0;
	double average = 0;
	double pi = 3.14159265358979323846;
	if (x == 0)
	{
		color(4);
		printf("error");
		color(16);
	}
	if (x == 1)
	{
		color(9);
		printf("正弦波\n");
		color(16);
		printf("波形因数（Kf)：1.11 波峰因数（Kp）:1.414\n");
		printf("需要计算的内容（有效值、平均值、最大值）：");
		scanf("%6s", datal);
		if (judge2(datal) == 1)
		{
			printf("请输入最大值：");
			scanf("%lf", &max);
			printf("\n");
			vaild = max / sqrt(2.0);
			printf("有效值为；%lf\n", vaild);
		}
		else if (judge2(datal) == 2)
		{
			printf("请输入最大值：");
			scanf("%lf", &max);
			printf("\n");
			average = (2 / pi) * max;
			printf("平均值为：%lf\n", average);
		}
		else if (judge2(datal) == 3)
		{
			printf("输入数值类型（有效值/平均值）：");
			scanf("%4s", lx2);
			if (judge2(lx2) == 1)
			{
				printf("输入数值：");
				scanf("%lf", &vaild);
				printf("\n");
				max = vaild * sqrt(2.0);
				printf("最大值是：%lf", max);
			}
			else if (judge2(lx2) == 2)
			{
				printf("输入数值：");
				scanf("%lf", &average);
				printf("\n");
				max = average * (pi / 2);
				printf("最大值是：%lf", max);
			}
			else
			{
				color(4);
				printf("error");
				color(16);
			}
		}
		else
		{
			color(4);
			printf("error");
			color(16);
		}		
	}
	if (x == 2)
	{
		color(9);
		printf("半波整流\n");
		color(16);
		printf("波形因数（Kf)：1.57 波峰因数（Kp）:2\n");
		printf("需要计算的内容（有效值、平均值、最大值）：");
		scanf("%6s", datal);
		if (judge2(datal) == 1)
		{
			printf("请输入最大值：");
			scanf("%lf", &max);
			printf("\n");
			vaild = max / sqrt(2.0);
			printf("有效值为；%lf\n", vaild);
		}
		else if (judge2(datal) == 2)
		{
			printf("请输入最大值：");
			scanf("%lf", &max);
			printf("\n");
			average = (1 / pi) * max;
			printf("平均值为：%lf\n", average);
		}
		else if (judge2(datal) == 3)
		{
			printf("输入数值类型（有效值/平均值）：");
			scanf("%4s", lx2);
			if (judge2(lx2) == 1)
			{
				printf("输入数值：");
				scanf("%lf", &vaild);
				printf("\n");
				max = vaild * sqrt(2.0);
				printf("最大值是：%lf", max);
			}
			else if (judge2(lx2) == 2)
			{
				printf("输入数值：");
				scanf("%lf", &average);
				printf("\n");
				max = average * pi;
				printf("最大值是：%lf", max);
			}
			else
			{
				color(4);
				printf("error");
				color(16);
			}
		}
		else
		{
			color(4);
			printf("error");
			color(16);
		}
	}
	if (x == 3)
	{
		color(9);
		printf("全波整流\n");
		color(16);
		printf("波形因数（Kf)：1.11 波峰因数（Kp）:1.414\n");
		printf("需要计算的内容（有效值、平均值、最大值）：");
		scanf("%6s", datal);
		if (judge2(datal) == 1)
		{
			printf("请输入最大值：");
			scanf("%lf", &max);
			printf("\n");
			vaild = max / sqrt(2.0);
			printf("有效值为；%lf\n", vaild);
		}
		else if (judge2(datal) == 2)
		{
			printf("请输入最大值：");
			scanf("%lf", &max);
			printf("\n");
			average = (2 / pi) * max;
			printf("平均值为：%lf\n", average);
		}
		else if (judge2(datal) == 3)
		{
			printf("输入数值类型（有效值/平均值）：");
			scanf("%4s", lx2);
			if (judge2(lx2) == 1)
			{
				printf("输入数值：");
				scanf("%lf", &vaild);
				printf("\n");
				max = vaild * sqrt(2.0);
				printf("最大值是：%lf", max);
			}
			else if (judge2(lx2) == 2)
			{
				printf("输入数值：");
				scanf("%lf", &average);
				printf("\n");
				max = average * (pi / 2);
				printf("最大值是：%lf", max);
			}
			else
			{
				color(4);
				printf("error");
				color(16);
			}
		}
		else
		{
			color(4);
			printf("error");
			color(16);
		}
	}
	if (x == 4)
	{
		color(9);
		printf("三角波\n");
		color(16);
		printf("波形因数（Kf)：1.15 波峰因数（Kp）:1.73\n");
		printf("需要计算的内容（有效值、平均值、最大值）：");
		scanf("%6s", datal);
		if (judge2(datal) == 1)
		{
			printf("请输入最大值：");
			scanf("%lf", &max);
			printf("\n");
			vaild = max / sqrt(3.0);
			printf("有效值为；%lf\n", vaild);
		}
		else if (judge2(datal) == 2)
		{
			printf("请输入最大值：");
			scanf("%lf", &max);
			printf("\n");
			average = max / 2;
			printf("平均值为：%lf\n", average);
		}
		else if (judge2(datal) == 3)
		{
			printf("输入数值类型（有效值/平均值）：");
			scanf("%4s", lx2);
			if (judge2(lx2) == 1)
			{
				printf("输入数值：");
				scanf("%lf", &vaild);
				printf("\n");
				max = vaild * sqrt(3.0);
				printf("最大值是：%lf", max);
			}
			else if (judge2(lx2) == 2)
			{
				printf("输入数值：");
				scanf("%lf", &average);
				printf("\n");
				max = average * 2;
				printf("最大值是：%lf", max);
			}
			else
			{
				color(4);
				printf("error");
				color(16);
			}
		}
		else
		{
			color(4);
			printf("error");
			color(16);
		}
	}
	if (x == 5)
	{
		color(9);
		printf("锯齿波\n");
		color(16);
		printf("波形因数（Kf)：1.15 波峰因数（Kp）:1.73\n");
		printf("需要计算的内容（有效值、平均值、最大值）：");
		scanf("%6s", datal);
		if (judge2(datal) == 1)
		{
			printf("请输入最大值：");
			scanf("%lf", &max);
			printf("\n");
			vaild = max / sqrt(3.0);
			printf("有效值为；%lf\n", vaild);
		}
		else if (judge2(datal) == 2)
		{
			printf("请输入最大值：");
			scanf("%lf", &max);
			printf("\n");
			average = max / sqrt(2);
			printf("平均值为：%lf\n", average);
		}
		else if (judge2(datal) == 3)
		{
			printf("输入数值类型（有效值/平均值）：");
			scanf("%4s", lx2);
			if (judge2(lx2) == 1)
			{
				printf("输入数值：");
				scanf("%lf", &vaild);
				printf("\n");
				max = vaild * sqrt(3.0);
				printf("最大值是：%lf", max);
			}
			else if (judge2(lx2) == 2)
			{
				printf("输入数值：");
				scanf("%lf", &average);
				printf("\n");
				max = average * sqrt(2.0);
				printf("最大值是：%lf", max);
			}
			else
			{
				color(4);
				printf("error");
				color(16);
			}

		}
		else
		{
			color(4);
			printf("error");
			color(16);
		}
	}
	if (x == 6)
	{
		color(9);
		printf("方波\n");
		color(16);
		printf("波形因数（Kf)：1 波峰因数（Kp）:1\n");
		printf("需要计算的内容（有效值、平均值、最大值）：");
		scanf("%6s", datal);
		if (judge2(datal) == 1)
		{
			printf("请输入最大值：");
			scanf("%lf", &max);
			printf("\n");
			vaild = max;
			printf("有效值为；%lf\n", vaild);
		}
		else if (judge2(datal) == 2)
		{
			printf("请输入最大值：");
			scanf("%lf", &max);
			printf("\n");
			average = max;
			printf("平均值为：%lf\n", average);
		}
		else if (judge2(datal) == 3)
		{
			printf("输入数值类型（有效值/平均值）：");
			scanf("%4s", lx2);
			if (judge2(lx2) == 1)
			{
				printf("输入数值：");
				scanf("%lf", &vaild);
				printf("\n");
				max = vaild;
				printf("最大值是：%lf", max);
			}
			else if (judge2(lx2) == 2)
			{
				printf("输入数值：");
				scanf("%lf", &average);
				printf("\n");
				max = average;
				printf("最大值是：%lf", max);
			}
			else
			{
				color(4);
				printf("error");
				color(16);
			}
		}
		else
		{
			color(4);
			printf("error");
			color(16);
		}
	}
}
	int main()
	{
		char ar[2];
		while (*ar)
		{
			system("cls");
			int ar2 = 0;
			char lx[100];
			printf("正弦交流电 半波整流 全波整流 三角波 锯齿波 方波\n输入交流电类型：");
			scanf("%99s", lx);
			data(judge(lx));
			printf("\n还需要计算吗（Y/N）：");
			scanf("%s", ar);
			if (strcmp(ar, "n") == 0)
			{
				break;
			}
		}	
		return 0;
	}