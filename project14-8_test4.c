#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
	char arr1[] = "Hello,World";
	            //01234567891011
	char arr2[] = "###########";
	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//������strlen - 1;,Ҫ��ͷ�ļ�<string.h>
	int left = 0;
	while (left <= right)
	{
		arr2[right] = arr1[right];
		arr2[left] = arr1[left];
		printf("%s\n", arr2);
		right--;	
		left++;
		Sleep(40);
		system("cls");//system ִ��ϵͳ����ĺ���
	}
	printf("%s\n", arr2);
	//ģ���û���������-----------------------------------------------------------------------------------------------------
	char arr3[] = "2008426j";
	char arr4[10] = { 0 };
	int i = 1;
	while (i <= 3)
	{	
		printf("����������>:");
		scanf("%s", &arr4);
		if (strcmp(arr4, arr3) == 0)//�ȺŲ��������ж������ַ����Ƿ���ȣ�Ӧ��ʹ�ÿ⺯��---strcmp
		{
			printf("������ȷ\n");
			break;
		}
		else if (strcmp(arr3, arr4) != 0)
		{
			printf("�������-����\n");
			Sleep(500);
			system("cls");
			i++;
		}
	}
	if (strcmp(arr4, arr3) != 0)
		printf("�������˳�����");

	return 0;
}