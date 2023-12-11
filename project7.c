#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int line = 0;
	printf("join\n");
	while (line < 20000)
	{
		printf("ÇÃÒ»ÐÐ´úÂë %d\n",line );
		line++;
	}
	if (line>20000)
	printf("winer\n");
	return 0;
}