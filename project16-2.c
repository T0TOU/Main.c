#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bouble(int* num, int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (num[j] > num[j + 1])
			{
				int tem = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tem;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
}
int main()
{
	int i = 0;
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	bouble(arr, sizeof(arr) / sizeof(arr[0]));
	for (i = 0; i <= (sizeof(arr) / sizeof(arr[0]))-1; i++)//��sizeof����������������������Ԫ�ص�ַ���Ǳ�ʾ��|һ��������|������һ��������Ĵ�С��λbyte�ֽ�
	{
		printf("arr[%d]=%d ", i, arr[i]);
	}
	printf("\n   arr=%p\narr[0]=%p\n", arr, &arr[0]);//����arr�ĵ�ַ ����arr������ĸ�ĵ�ַ
	printf("%d\n", *arr);//arr��arr[0]�ĵ�ַ���� ָ������ò����� �����������ֵ
	printf("%p\n", &arr);//&��������������һ����|����ĵ�ַ|
	return 0; 
}