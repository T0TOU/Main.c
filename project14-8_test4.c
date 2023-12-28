#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
	char arr1[] = "Hello,World";
	            //01234567891011
	char arr2[] = "###########";
	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//或者是strlen - 1;,要引头文件<string.h>
	int left = 0;
	while (left <= right)
	{
		arr2[right] = arr1[right];
		arr2[left] = arr1[left];
		printf("%s\n", arr2);
		right--;	
		left++;
		Sleep(40);
		system("cls");//system 执行系统命令的函数
	}
	printf("%s\n", arr2);
	//模拟用户输入密码-----------------------------------------------------------------------------------------------------
	char arr3[] = "2008426j";
	char arr4[10] = { 0 };
	int i = 1;
	while (i <= 3)
	{	
		printf("请输入密码>:");
		scanf("%s", &arr4);
		if (strcmp(arr4, arr3) == 0)//等号不能用来判断两个字符串是否相等，应该使用库函数---strcmp
		{
			printf("密码正确\n");
			break;
		}
		else if (strcmp(arr3, arr4) != 0)
		{
			printf("密码错误-重试\n");
			Sleep(500);
			system("cls");
			i++;
		}
	}
	if (strcmp(arr4, arr3) != 0)
		printf("锁定！退出程序");

	return 0;
}