#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	color(16);
	printf("*************************\n");
	printf("***  1.Play    0.Exit ***\n");
	printf("*************************\n");
}
void color(const unsigned short testColor)
{
	if (testColor >= 0 && testColor <= 15)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), testColor);
	else
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
void initboard(char board[SROW][SCOL],int row,int col,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}
void displayboard(char board[SROW][SCOL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 1; i < row + 1; i++)
	{
		for (j = 1; j < col + 1; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void writeCoordinate(char board[SROW][SCOL],char board2[SROW][SCOL])
{
	int x = 0;
	int y = 0;
	while (1)
	{
		color(2);
		printf("Please write Coordinate>:");
		color(7);
		scanf("%d%d", &x, &y);
		if (x <= ROW && y <= COL)
		{
			board[x][y] = 'a';
			break;
		}
		else
		{
			color(4);
			printf("The coordinates are not legitimate\n");
		}
	}
	int a = findmine(board[SROW][SCOL], x, y);
	board2[x][y] = a;
}
void put(char board[SROW][SCOL], int  piece)
{
	int i = 0;
	for (i = 0; i < piece; i++)
	{
		int x = rand() % (SROW + 1);
		int y = rand() % (SCOL + 1);
		board[x+1][y+1] = '1';
	}
}
int  findmine(char board[SROW][SCOL], int x, int y)
{
	int i = 0;
	int count = 0;
	//int yP1 = y + 1;
	//for (i = 0; i < 3; i++)
	//{
	//	if (board[x + 1][(y + 1) - i] == '1')
	//		count++;
	//	if (board[x - 1][(y + 1) - i] == '1')
	//		count++;
	//	if (board[x - 1][(y + 1) - i] == '1')
	//		count++;
	//}
	if (board[x + 1][y] == '1')
		count++;
	if (board[x + 1][y + 1] == '1')
		count++;
	if (board[x + 1][y - 1] == '1')
		count++;
	if (board[x - 1][y] == '1')
		count++;
	if (board[x - 1][y + 1] == '1')
		count++;
	if (board[x - 1][y - 1] == '1')
		count++;
	if (board[x][y + 1] == '1')
		count++;
	if (board[x][y - 1] == '1')
		count++;
	return count;
}
void game()
{
	char boardmain[SROW][SCOL] = { 0 };
	char boardshow[SROW][SCOL] = { 0 };
	initboard(boardmain, SROW, SCOL, '0');
	initboard(boardshow, SROW, SCOL, '*');
	put(boardmain,25);
	while (1)
	{
		displayboard(boardshow, ROW, COL);
		writeCoordinate(boardmain,boardshow);
		displayboard(boardshow, ROW, COL);
	}

}