#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[] = "abcdefg";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr2));                       //char ռһ���ֽڣ����ڴ棩sizeof char 
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	int i = 0;
	for (i = 0; i <= strlen(arr1); i++)
	{
		printf("%c ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i <= sizeof(arr2) / sizeof(arr2[0])-1; i++)
	{
		printf("%c ", arr2[i]);
	}
	int arr3[] = {1,2,3,4,5,6,7,8,9,10};                    //int һ��������32λ��64λ�������ж�ռ4���ֽ�
	printf("\n");
	for (i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++)   //�������ڴ�����������ŵ�
	{
		printf("arr3[%d] = %p---%d\n", i, &arr3[i],arr3[i]);
	}
		//-----------------|һά�����ʹ��|-------------------------End
	return 0;
}
