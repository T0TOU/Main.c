#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
void color(const unsigned short textColor)      //自定义函根据参数改变颜色 
	{
		if (textColor >= 0 && textColor <= 15)     //参数在0-15的范围颜色
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), textColor);  //用一个参数，改变字体颜色
		else   //默认的字体颜色是白色
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
double bypass(double x, double y)
{
	double Bup = x * y;
	double Bdow = x + y;
	return Bup / Bdow;
}
int main()
{
	double r1 = 0;
	double r2 = 0;
	char connect[10];
	int a = 1;
	color(9);
	printf("请输入R%d的阻值>:", a);
	scanf("%lf", &r1);
	'\n';
	while (1)
	{
		color(9);
		a++;
		printf("请输入R%d的阻值>:", a);
		scanf("%lf", &r2);
		'\n';
		if (r2 == 0)
			break;
		color(3);
		printf("请输入连接方式（并联“//”，串联“=”）)>:", a);
		scanf("%s", &connect);
		'\n';
		if (strcmp(connect, "//") == 0)
		{
			r1 = bypass(r1, r2);
			color(0xE);
			printf("电路中的等效电阻为>:%lf Ω\n", r1);
		}
		else if (strcmp(connect, "=") == 0)
		{
			color(0xE);
			r1 += r2;
			printf("电路中的等效电阻为>:%lf Ω\n", r1);
		}
	}
	color(6);
	printf("电路中的总等效电阻为>:%lf Ω", r1);
	return 0;
}	