#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void menu()
{
	printf("  ********0--100���ֲ�ȡ********\n");
	printf("***    1.Play Game   0.Exit    ***\n");
	printf("**********************************\n");
}
int game(int x)
{
	                         //srand((unsigned int)time(NULL));//������û�ν���game������Ҫ����һ��rand����㶨��
	int c = (rand()) % 100 + 1;                                //ע��srand(int)���Խ�long���� time ֱ�Ӷ�����޸������Σ�
	while (1)                                                  //(NULL)�ǿ�ָ��
	{
		if (x < c)
		{
			printf("��С��\n");
			printf("������� >:");
			scanf("%d", &x);
			continue;
		}
		if (x > c)
		{
			printf("�´���\n");
			printf("������� >:");
			scanf("%d", &x);
			continue;
		}
		if (x == c)
		{
			printf("��ϲ�㣡�¶��ˣ�\n");
			break;
		}
	}
	Sleep(1000);
	system("cls");
	printf("Last---X = %d\n", c);
}
int main()
{
	srand((unsigned int)time(NULL));//srand����������һ�������� --time��һ��ʱ��� rand��һ�����Ȼ��--1��--2��...�����ÿ�������ĵĻ���
	int a = 0;						//ÿһ��������ǵ�һ�����,����ķ�Χһ�����������ʱ���������ô����Ҳ�����
	do
	{
		menu();
		printf("���� : 1 �� 0 >:");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			printf("�������>:");
			int b = 0;
			scanf("%d", &b);
			game(b);
			break;
		case 0:
			break;
		default :
			printf("�������\n");
			Sleep(1000);
			system("cls");
			break;
		}
	} while (a);
	printf("�˳���Ϸ\n");
	return 0;
}