#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("输入密码>:");
	char passworld[20] = { 0 };
	scanf("%s", &passworld);
	int ch = 0;
	printf("确认吗？（Y/N）>:");
	while ((ch = getchar()) != '\n');//getchar是读取存储缓冲区中的/n，这样可以让缓冲区内清空
	int a = getchar();
	if (a == 'Y')
		printf("确认成功\n");
	else
		printf("确认失败\n");
	printf("%d\n", '\n');//“\n”这个字符的ASKII值是10；
	int bh = 0;
	while ((bh = getchar()) != EOF)
		if (bh < '0'|| bh >'9')   //bh<'0'，bh>'9'是接受输入的值小于或大于ASKII表中对应的'0'和'9'时进入if语句；
			continue;
		else
			putchar(bh);
	return 0;
}