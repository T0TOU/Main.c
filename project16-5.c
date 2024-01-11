#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
int main()
{	
	int input = 0;
	do
	{
		srand(time(NULL));
		menu();
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				color(2);
				printf("to successfully enter Minesweeper - Project16-5\n");
				Sleep(500);
				system("cls");
				color(7);
				game();
				break;
			case 0:
				color(9);
				printf("Withdraw abort quit");
				color(7);
				break;
			default:
				color(4);
				printf("The entry is not legal !!!\n");
				Sleep(500);
				system("cls");
		}
	}
	while (input);
	return 0;
}