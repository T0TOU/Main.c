#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "acc.h"
void max(int x, int y)  //int x, int y, ��Щ���β�--����ʽ��������һ������²�����
{                       //��Ϊֻ�иú��������ú󣬲Ż�����������������ڴ浥Ԫ
	if (x > y)          //������ú������β� ���Զ�����
		printf("Max = %d\n", x);
	if (x <= y)
		printf("Max = %d\n", y);
}
void exchange(int*  pa, int*  pb)
{
	int z = 0;         //������ʹ��ָ����Ϊ����������ֵ����Ϊ��Ҫ��a��b�����ݽ��л�����Ҫʹ�����ǵĵ�ַ���л���
	z = *pa;           //��ʹ����ͨint��������int x �� int y ӵ�и��Եĵ�ַ���ı�x��y�޷��ı�����Ӧ��a��b
	*pa = *pb;         //������˵���βξ���ʵ�ε�һ����ʱ������;���βε��޸��ǲ���ı�ʵ�ε�
	*pb = z;	       //int* pa ��ָ�������д��   *pa �ǽ����ò�����
}
void Pnum(int x)
{
	int i = 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			printf("%d ", x);
		}
	}
}
void year(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
	{
		printf(" %4d ", x);
	}
}            //arr[]��������һ��ָ��
int D_find(int arr[], int y, int sz)//�����arr[]���ݽ�����������num1����Ԫ�صĵ�ַ
{
	int left = 0;
	int right = sz - 1;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > y)
			right = mid - 1;
		else if (arr[mid] < y)
			left = mid + 1;
		else
		{
			return mid;
			break;
		}
	}
	if (left > right)
		return -1;
}
void clAdd(int* pcl)
{
	(*pcl)++;
}
int main()
{
	int a = 14;
	int b = 23;
	max(a, b);         //���������a,b��ʵ��--ʵ�ʲ���
	exchange(&a, &b);//&a��&b,Ҳ����ʵ��------ֻҪ�ò�����һ���̶�ֵ�ģ�����ʵ��
	printf("a=%d b=%d\n", a, b);
	int i = 0;
	for (i = 3; i <= 100; i += 2)
	{
		Pnum(i);
	}
	printf("\n");
	for (i = 1000; i <= 2030; i++)
	{
		year(i);
	}
	printf("\n");
	int  num1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int c = 0; 
	scanf("%d", &c);

	int sz = sizeof(num1) / sizeof(num1[0]);
	int ret = D_find(num1, c, sz); //���鴫�Σ����Ĳ���һ�������飬���������е�һ��Ԫ�صĵ�ַ
	if (ret == -1)
		printf("NO\n");
	else
		printf("num1[%d] = %d\n", ret, c);
	int cl = 0;
	for (i = 0; i < 15; i++)
	{
		clAdd(&cl);
		printf("%d\n", cl);
	}
	printf("%d\n", printf("%d", printf("%d", 43)));//printf ���� ���ص��� ��ӡ����Ļ���ַ��ĸ��� --��ʽ���� 
	int e = 0;
	int l = 0;
	scanf("%d%d", &e, &l);               //�ӷ���add����������sub�����˷���mul����������div����
	printf("%d", acc(e, l));
	return 0;
}