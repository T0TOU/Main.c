#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
void color(const unsigned short textColor)      //�Զ��庯���ݲ����ı���ɫ 
	{
		if (textColor >= 0 && textColor <= 15)     //������0-15�ķ�Χ��ɫ
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), textColor);  //��һ���������ı�������ɫ
		else   //Ĭ�ϵ�������ɫ�ǰ�ɫ
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
	printf("������R%d����ֵ>:", a);
	scanf("%lf", &r1);
	'\n';
	while (1)
	{
		color(9);
		a++;
		printf("������R%d����ֵ>:", a);
		scanf("%lf", &r2);
		'\n';
		if (r2 == 0)
			break;
		color(3);
		printf("���������ӷ�ʽ��������//����������=����)>:", a);
		scanf("%s", &connect);
		'\n';
		if (strcmp(connect, "//") == 0)
		{
			r1 = bypass(r1, r2);
			color(0xE);
			printf("��·�еĵ�Ч����Ϊ>:%lf ��\n", r1);
		}
		else if (strcmp(connect, "=") == 0)
		{
			color(0xE);
			r1 += r2;
			printf("��·�еĵ�Ч����Ϊ>:%lf ��\n", r1);
		}
	}
	color(6);
	printf("��·�е��ܵ�Ч����Ϊ>:%lf ��", r1);
	return 0;
}	