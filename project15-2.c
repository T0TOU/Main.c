#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include "add.h"
void jik(int x)
{
	if (x > 9)         //�ݹ����д����������Ч����������
	{                  //ÿ�εݹ��Խ��Խ�ӽ���������
		printf("%d ", x % 10);
		jik(x/10);
	}
	else
		printf("%d", x);
}
void eik(int x)
{
	if (x > 9)
	{
		eik(x / 10);
	}
	printf("%d ", x % 10);
}
int mystrlen(char* arr)       //������뺯�����β��� �����һλ�ĵ�ַ
{
	int count = 0;           //count ��������������
	while (*arr != '\0')        
	{
		count++; 
		arr++;        
	}
	return count;
}
int my_strlen(char* num)
{
	if (*num != '\0')
		return 1 + my_strlen(num + 1);
	else
		return 0;
}
int main()
{
	int a = 10;
	int b = 0;
	int sum = 0;
	sum = add(a, b);
	printf("%d\n", sum);
	int c = 133386;
	jik(c);
	printf("\n");
	eik(c);
	char arr[] = "welcome";
	printf("\n%d\n",strlen(arr));
	printf("%d\n", mystrlen(arr));
	printf("%d\n", my_strlen(arr));
	return 0;
}