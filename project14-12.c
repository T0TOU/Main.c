#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
	system("shutdown -s -t 60");	
	char input[] = { 0 };
	while (1)
	{
		printf("电脑将在一分钟内关机输入“我是猪”取消关机 >:");
		scanf("%s", &input);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	printf("\nGoodBoy");
	return 0;
}