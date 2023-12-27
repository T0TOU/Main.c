#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int Xdd(int x, int y)
{
	int z = x * y; 
	return z;
}
int main()
{
	int num1 = 100;
	int num2 = 4523;
	int a = 10101000;
	int b = 3456;
	int sum = 0;
	int kum = 0;
	sum = Add(a, b);
	kum = Xdd(num1, num2);
	printf("sum=%d\n", sum);
	printf("kum=%d\n", kum);
	return 0;
}
