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
	system("cls");
	int i = 0;
	int j = 0;
	for (j = 0; j < col+1; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i < row + 1; i++)
	{
		printf("%d ", i);
		for (j = 1; j < col + 1; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
int writeCoordinateAndFind(char board[SROW][SCOL],char board2[SROW][SCOL])
{
	int x = 0;
	int y = 0;
	int a = 0;
	int i = 0;
	int count = 0;
	while (1)
	{
		color(2);
		printf("Please write Coordinate>:");
		color(7);
		scanf("%d%d", &x, &y);
		if ((x > 0 && x < ROW + 1) && (y > 0 && y < COL + 1))
		{
			if (board[x][y] == '0')
			{
				int yP1 = y + 1;
				board[x][y] = 'a';
				for (i = 0; i < 3; i++)
				{
					if (board[x + 1][yP1 - i] == '#')
						count++;
					if (board[x][yP1 - i] == '#')
						count++;
					if (board[x - 1][yP1 - i] == '#')
						count++;
				}
				board2[x][y] = count + '0';
				break;
			}
			if (board[x][y] == 'a')
			{
				color(4);
				printf("Coordinates are already occupied!\n");
				color(7);
				continue;
			}
			if (board[x][y] == '#')
			{
				color(4);
				displayboard(board, ROW, COL);
				printf("Boom!\n");
				color(7);
				printf("\n");
				return 0;
				break;
			}
		}
		else
		{
			color(4);
			printf("The coordinates are not legitimate\n");
			continue;
		}
	}


}
void put(char board[SROW][SCOL], int  piece)
{
	int i = 0;
	for (i = 0; i < piece; i++)
	{
		int x = (rand() % ROW) + 1;
		int y = (rand() % COL) + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '#';
		}
		else
			continue;

	}
}
//int  findmine(char board[SROW][SCOL], int x, int y)
//{
//	int i = 0;
//	int count = 0;
//	int yP1 = y + 1;
//	for (i = 0; i < 3; i++)
//	{
//		if (board[x + 1][(y + 1) - i] == '#')
//			count++;
//		if (board[x - 1][(y + 1) - i] == '#')
//			count++;
//		if (board[x - 1][(y + 1) - i] == '#')
//			count++;
//	}
	//if (board[x + 1][y] == '1')
	//	count++;
	//if (board[x + 1][y + 1] == '1')
	//	count++;
	//if (board[x + 1][y - 1] == '1')
	//	count++;
	//if (board[x - 1][y] == '1')
	//	count++;
	//if (board[x - 1][y + 1] == '1')
	//	count++;
	//if (board[x - 1][y - 1] == '1')
	//	count++;
	//if (board[x][y + 1] == '1')
	//	count++;
	//if (board[x][y - 1] == '1')
	//	count++;
//	return count;
//}
void game()
{
	char boardmain[SROW][SCOL] = { 0 };
	char boardshow[SROW][SCOL] = { 0 };
	initboard(boardmain, SROW, SCOL, '0');
	initboard(boardshow, SROW, SCOL, '*');
	put(boardmain,25);
	int Dowin = 0;
	while (1)
	{
		displayboard(boardshow, ROW, COL);
		if (writeCoordinateAndFind(boardmain, boardshow) == 0)
		{
			break;
			Dowin = 0;
		}
		printf("\n");
	}
	if (Dowin = 0)
	{
		color(4);
		printf("fail\n");
		color(7);
	}

}