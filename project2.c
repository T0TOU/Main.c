#include <stdio.h>
//int b = 100;   ȫ�ֱ���
int main()
{
	//int a = 10;   �ֲ�����
    //printf("%d\n", a);
	//printf("%d\n", b);
	int num1 = 0;
	int num2 = 0;
	scanf_s("%d%d", &num1, &num2);//scanf--���뺯����ȡ��ַ����&
	int sum = 0;
    sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}