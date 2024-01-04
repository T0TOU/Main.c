#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void color(const unsigned short testColor/*,const unsigned short backColor*/)
{
	if /*(*/ (testColor >= 0 && testColor <= 15)/* && (backColor >= 0 && backColor <= 15))*/
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), testColor/* | backColor*/);
	else
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2/* | 7*/);
}
void menu()
{
	printf("**********************\n");
	printf("*  1.playGame 0.Exit  *\n");
	printf("**********************\n");
}
void initarr(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void displayboard(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	int t = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < row; j++)
		{
			if (j < col - 1)
				printf(" %c |", board[i][j]);
			else
				printf(" %c ", board[i][j]);
		}
		printf("\n");
		if (i < row - 1)
		{
			for (t = 0; t < j ; t++)
			{
				if (t < j - 1)
				{
					printf("---|");
				}
				else
					printf("---");

			}
			printf("\n");
		}
	}
}
void PlayermoveCoordinate (char board[Row][Col],int row,int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("Write Coordinate(X,Y) >:");
		scanf("%d%d", &x, &y);
		if ((x >= 1 && y >= 1) && (x <= row && y <= col))
		{
			if (board[x - 1][y - 1] == ' ')
			{
				system("cls");
				board[x - 1][y - 1] = '*';
			}
			else
			{
				system("cls");
				color(12);
				printf("\nThe coordinates are already occupied\n");//坐标被占用
				color(16);//超出color定义范围恢复默认
			}
		}
		else
		{
			system("cls");
			color(4);
			printf("\nThe coordinates are misused\n");//坐标无效超出范围
			color(16);
		}

		displayboard(board, row, col);
	}
}
void game()
{
	color(2);
	char board[Row][Col] = { 0 };
	initarr(board, Row, Col);
	displayboard(board, Row, Col);
	PlayermoveCoordinate(board, Row, Col);
}