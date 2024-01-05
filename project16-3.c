#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
#include <stdlib.h>
int main()
{	
	srand(time(NULL));
	int input = 0;
	do
	{			
		menu();
		printf (">:");
		scanf("%d", &input);

		switch (input)
		{
		case 1:

			system("cls");
			game();
			break;
		case 0:
			system("cls");
			system("color 07");
			printf("--| Already exited |--\n");
			break;
		default:
			system("color 04");
			system("cls");
			printf("error\n");
			break;
		}
	}
	while (input);
	return 0;
}