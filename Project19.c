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
	if (strcmp(x, "���ҽ�����") == 0 || strcmp(x, "����") == 0 || strcmp(x, "��") == 0 || strcmp(x, "����") == 0 || strcmp(x, "z") == 0)
	{
		return 1;
	}
	else if (strcmp(x, "�벨����") == 0 || strcmp(x, "�벨") == 0 || strcmp(x, "b") == 0)
	{
		return 2;
	}
	else if (strcmp(x, "ȫ������") == 0 || strcmp(x, "ȫ��") == 0 || strcmp(x, "q") == 0)
	{
		return 3;
	}
	else if (strcmp(x, "���ǲ�") == 0 || strcmp(x, "����") == 0 || strcmp(x, "s") == 0)
	{
		return 4;
	}
	else if (strcmp(x, "��ݲ�") == 0 || strcmp(x, "���") == 0 || strcmp(x, "j") == 0)
	{
		return 5;
	}
	else if (strcmp(x, "����") == 0 || strcmp(x, "��") == 0 || strcmp(x, "f") == 0)
	{
		return 6;
	}
	else
		return 0;
}
int judge2(char* x)
{
	if (strcmp(x, "��Чֵ") == 0 || strcmp(x, "y") == 0)
	{
		return 1;
	}
	else if (strcmp(x, "ƽ��ֵ") == 0 || strcmp(x, "p") == 0)
	{
		return 2;
	}
	else if (strcmp(x, "���ֵ") == 0 || strcmp(x, "z") == 0)
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
		printf("���Ҳ�\n");
		color(16);
		printf("����������Kf)��1.11 ����������Kp��:1.414\n");
		printf("��Ҫ��������ݣ���Чֵ��ƽ��ֵ�����ֵ����");
		scanf("%6s", datal);
		if (judge2(datal) == 1)
		{
			printf("���������ֵ��");
			scanf("%lf", &max);
			printf("\n");
			vaild = max / sqrt(2.0);
			printf("��ЧֵΪ��%lf\n", vaild);
		}
		else if (judge2(datal) == 2)
		{
			printf("���������ֵ��");
			scanf("%lf", &max);
			printf("\n");
			average = (2 / pi) * max;
			printf("ƽ��ֵΪ��%lf\n", average);
		}
		else if (judge2(datal) == 3)
		{
			printf("������ֵ���ͣ���Чֵ/ƽ��ֵ����");
			scanf("%4s", lx2);
			if (judge2(lx2) == 1)
			{
				printf("������ֵ��");
				scanf("%lf", &vaild);
				printf("\n");
				max = vaild * sqrt(2.0);
				printf("���ֵ�ǣ�%lf", max);
			}
			else if (judge2(lx2) == 2)
			{
				printf("������ֵ��");
				scanf("%lf", &average);
				printf("\n");
				max = average * (pi / 2);
				printf("���ֵ�ǣ�%lf", max);
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
		printf("�벨����\n");
		color(16);
		printf("����������Kf)��1.57 ����������Kp��:2\n");
		printf("��Ҫ��������ݣ���Чֵ��ƽ��ֵ�����ֵ����");
		scanf("%6s", datal);
		if (judge2(datal) == 1)
		{
			printf("���������ֵ��");
			scanf("%lf", &max);
			printf("\n");
			vaild = max / sqrt(2.0);
			printf("��ЧֵΪ��%lf\n", vaild);
		}
		else if (judge2(datal) == 2)
		{
			printf("���������ֵ��");
			scanf("%lf", &max);
			printf("\n");
			average = (1 / pi) * max;
			printf("ƽ��ֵΪ��%lf\n", average);
		}
		else if (judge2(datal) == 3)
		{
			printf("������ֵ���ͣ���Чֵ/ƽ��ֵ����");
			scanf("%4s", lx2);
			if (judge2(lx2) == 1)
			{
				printf("������ֵ��");
				scanf("%lf", &vaild);
				printf("\n");
				max = vaild * sqrt(2.0);
				printf("���ֵ�ǣ�%lf", max);
			}
			else if (judge2(lx2) == 2)
			{
				printf("������ֵ��");
				scanf("%lf", &average);
				printf("\n");
				max = average * pi;
				printf("���ֵ�ǣ�%lf", max);
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
		printf("ȫ������\n");
		color(16);
		printf("����������Kf)��1.11 ����������Kp��:1.414\n");
		printf("��Ҫ��������ݣ���Чֵ��ƽ��ֵ�����ֵ����");
		scanf("%6s", datal);
		if (judge2(datal) == 1)
		{
			printf("���������ֵ��");
			scanf("%lf", &max);
			printf("\n");
			vaild = max / sqrt(2.0);
			printf("��ЧֵΪ��%lf\n", vaild);
		}
		else if (judge2(datal) == 2)
		{
			printf("���������ֵ��");
			scanf("%lf", &max);
			printf("\n");
			average = (2 / pi) * max;
			printf("ƽ��ֵΪ��%lf\n", average);
		}
		else if (judge2(datal) == 3)
		{
			printf("������ֵ���ͣ���Чֵ/ƽ��ֵ����");
			scanf("%4s", lx2);
			if (judge2(lx2) == 1)
			{
				printf("������ֵ��");
				scanf("%lf", &vaild);
				printf("\n");
				max = vaild * sqrt(2.0);
				printf("���ֵ�ǣ�%lf", max);
			}
			else if (judge2(lx2) == 2)
			{
				printf("������ֵ��");
				scanf("%lf", &average);
				printf("\n");
				max = average * (pi / 2);
				printf("���ֵ�ǣ�%lf", max);
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
		printf("���ǲ�\n");
		color(16);
		printf("����������Kf)��1.15 ����������Kp��:1.73\n");
		printf("��Ҫ��������ݣ���Чֵ��ƽ��ֵ�����ֵ����");
		scanf("%6s", datal);
		if (judge2(datal) == 1)
		{
			printf("���������ֵ��");
			scanf("%lf", &max);
			printf("\n");
			vaild = max / sqrt(3.0);
			printf("��ЧֵΪ��%lf\n", vaild);
		}
		else if (judge2(datal) == 2)
		{
			printf("���������ֵ��");
			scanf("%lf", &max);
			printf("\n");
			average = max / 2;
			printf("ƽ��ֵΪ��%lf\n", average);
		}
		else if (judge2(datal) == 3)
		{
			printf("������ֵ���ͣ���Чֵ/ƽ��ֵ����");
			scanf("%4s", lx2);
			if (judge2(lx2) == 1)
			{
				printf("������ֵ��");
				scanf("%lf", &vaild);
				printf("\n");
				max = vaild * sqrt(3.0);
				printf("���ֵ�ǣ�%lf", max);
			}
			else if (judge2(lx2) == 2)
			{
				printf("������ֵ��");
				scanf("%lf", &average);
				printf("\n");
				max = average * 2;
				printf("���ֵ�ǣ�%lf", max);
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
		printf("��ݲ�\n");
		color(16);
		printf("����������Kf)��1.15 ����������Kp��:1.73\n");
		printf("��Ҫ��������ݣ���Чֵ��ƽ��ֵ�����ֵ����");
		scanf("%6s", datal);
		if (judge2(datal) == 1)
		{
			printf("���������ֵ��");
			scanf("%lf", &max);
			printf("\n");
			vaild = max / sqrt(3.0);
			printf("��ЧֵΪ��%lf\n", vaild);
		}
		else if (judge2(datal) == 2)
		{
			printf("���������ֵ��");
			scanf("%lf", &max);
			printf("\n");
			average = max / sqrt(2);
			printf("ƽ��ֵΪ��%lf\n", average);
		}
		else if (judge2(datal) == 3)
		{
			printf("������ֵ���ͣ���Чֵ/ƽ��ֵ����");
			scanf("%4s", lx2);
			if (judge2(lx2) == 1)
			{
				printf("������ֵ��");
				scanf("%lf", &vaild);
				printf("\n");
				max = vaild * sqrt(3.0);
				printf("���ֵ�ǣ�%lf", max);
			}
			else if (judge2(lx2) == 2)
			{
				printf("������ֵ��");
				scanf("%lf", &average);
				printf("\n");
				max = average * sqrt(2.0);
				printf("���ֵ�ǣ�%lf", max);
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
		printf("����\n");
		color(16);
		printf("����������Kf)��1 ����������Kp��:1\n");
		printf("��Ҫ��������ݣ���Чֵ��ƽ��ֵ�����ֵ����");
		scanf("%6s", datal);
		if (judge2(datal) == 1)
		{
			printf("���������ֵ��");
			scanf("%lf", &max);
			printf("\n");
			vaild = max;
			printf("��ЧֵΪ��%lf\n", vaild);
		}
		else if (judge2(datal) == 2)
		{
			printf("���������ֵ��");
			scanf("%lf", &max);
			printf("\n");
			average = max;
			printf("ƽ��ֵΪ��%lf\n", average);
		}
		else if (judge2(datal) == 3)
		{
			printf("������ֵ���ͣ���Чֵ/ƽ��ֵ����");
			scanf("%4s", lx2);
			if (judge2(lx2) == 1)
			{
				printf("������ֵ��");
				scanf("%lf", &vaild);
				printf("\n");
				max = vaild;
				printf("���ֵ�ǣ�%lf", max);
			}
			else if (judge2(lx2) == 2)
			{
				printf("������ֵ��");
				scanf("%lf", &average);
				printf("\n");
				max = average;
				printf("���ֵ�ǣ�%lf", max);
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
			printf("���ҽ����� �벨���� ȫ������ ���ǲ� ��ݲ� ����\n���뽻�������ͣ�");
			scanf("%99s", lx);
			data(judge(lx));
			printf("\n����Ҫ������Y/N����");
			scanf("%s", ar);
			if (strcmp(ar, "n") == 0)
			{
				break;
			}
		}	
		return 0;
	}