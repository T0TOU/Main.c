#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcde";	
	char arr2[] = { 'a','b','c',0};
	char arr3[] = "hello,bit";
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	printf("%d\n", strlen(arr1)); //strlen---string(һ����length(n���������ȣ�long�ı��μ�th��
	printf("%d\n", strlen(arr2)); //strlen ����һ���ַ����ȵ�
	printf("%d\n", strlen(arr3));
	printf("c;\test\32\test.c\n");// \t--ˮƽ�Ʊ��������tab��	ת���ַ�
	printf("c:\\test\\32\\test.c\n"); //ͨ����ת������ַ�ǰ��"/"ʹ����б��һ���Ϊ��ͨ��
	printf("(are you ok??)\n"); //�ϰ汾�ı�������������ĸ�� ����������+����=[ ���ʺ�ǰ�� ��/"������⣬/��������
	printf("%c\n",'\''); //��\���Ը�����ͳ�Ϊ���ܵ��ַ���%c��ӡ�ַ���%d��ӡ����  
	printf("%d\n", strlen("c:\test\32\test.c"));// \32��Ϊ�˽��ƴ�����Ǹ�ʮ����������ΪASCII��ֵ����Ӧ���ַ�
	printf("%d\n", strlen("c:\\test\\32\\test.c"));//32 --> 011010 -->26--->��ΪASKII��ֵ������ַ�
	printf("%c\n", '\141');        //  \ddd ddd��ʾ1~3���˽�����  \xdd dd��ʾ2��ʮ����������
	return 0;
}