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
		printf("���Խ���һ�����ڹػ����롰������ȡ���ػ� >:");
		scanf("%s", &input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	printf("\nGoodBoy");
	return 0;
}