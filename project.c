#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	const int num = 8;  //const--�����ԣ��̶�һ������Ϊ�̶�ֵ��const���εĳ�����
	printf("%d\n",num);
	int arr[2] = { 0 };    //"2"���ڵ�λ���Ǳ����ó����ģ���const  num�޷����У�����num����ȫ�ǳ���,
	                       //const int num��һ���̶��˵ı���.
	return 0;
}