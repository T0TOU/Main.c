#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
add(int x,int y)
{
	int z = 0;
	if (x > y)
		z = x;
	if (x < y)
		z = y;
	if (x == y);
		z = x;
		return z;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	printf("Max=%d\n",add(a, b));
	char arr[] = { '=',0};
	printf("%s\n", arr);
	if (a == b)
	printf( '=');
	else;
}