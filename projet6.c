#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A = 0;
	printf("453+7=A(460/0)>:\n");
	scanf("%d", &A);
	if (A == 460)
		printf("��ȷ\n");
	else
		printf("����\n");
	return 0;
}