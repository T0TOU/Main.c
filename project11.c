#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 10;
	int* c = &a;       //*�������������ݵĵ�ַ��---ָ�����
	printf("%p\n", &a);//��%p����������ӡ������ռ�ڴ�Ķ�����λ��(�ڴ�ĵ�ַ��
	printf("%p\n", c);
	*c = 34;           //�����ò�����
	printf("%d\n", a); //��*c�����ҵ���ַc�е����ݽ��б���
	char i = 'b';
	char* pc = &i;
	*pc = 'a';
	printf("%c\n", i);
	char  arr[] = {'1','2','3','4',0};
	char  arr2[] = { "1,2,3,4" };
	printf("%s\n", arr);
	printf("%c\n", arr[0]);
	printf("%s\n", arr2);
	printf("%d\n", sizeof(arr) / sizeof arr[0]);
	printf("sizeof(pc)=%d\n", sizeof pc);//sizeof pc�� 8֤�����ڴ������64λ������λ�о���64bit  = 64/8 = 8byte
	printf("%d\n", sizeof * pc);         //*pc�����ַ����Ӧ��i��ָ����һ������
	printf("%d\n", sizeof i);
	return 0;
}