#include <stdio.h>
//int b = 100;   全局变量
int main()
{
	//int a = 10;   局部变量
    //printf("%d\n", a);
	//printf("%d\n", b);
	int num1 = 0;
	int num2 = 0;
	scanf_s("%d%d", &num1, &num2);//scanf--输入函数，取地址符号&
	int sum = 0;
    sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}