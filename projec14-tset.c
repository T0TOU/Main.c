#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'A' && ch <= 'Z')
			printf("%c", ch + 32);
		else if (ch >= 'a' && ch <= 'z')
			printf("%c", ch - 32);
	}
	return 0;
}