#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("�����ܼ�\n");
	int a = 0;
	scanf("%d", &a);
	switch (a)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		printf("����żٻ�ʣ:%d\n", 5 - a);
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		printf("�������!\n");
	}
	return 0;
}