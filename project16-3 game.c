#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void color(const unsigned short testColor)
{
	if (testColor >= 0 && testColor <= 15)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), testColor);
	else
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
}
void menu()
{
	color(7);
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
	system("cls");
	color(2);
	int i = 0;
	int j = 0;
	int t = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < row; j++)
		{
			if (j < col - 1)
			{
				if (board[i][j] == '*')
				{
					color(5);
					printf(" %c ", board[i][j]);
					color(2);
					printf("|");
				}
				else if (board[i][j] == '#')
				{
					color(9);
					printf(" %c ",board[i][j]);
					color(2);
					printf("|");
				}
				else
				{
					printf(" %c |", board[i][j]);
				}

			}
			else
			{
				if (board[i][j] == '*')
				{
					color(5);
					printf(" %c ", board[i][j]);
				}
				else if (board[i][j] == '#')
				{
					color(9);
					printf(" %c ", board[i][j]);
				}

			}
				
		}
		color(16);
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
				displayboard(board, row, col);
				break;
			}
			else
			{
				system("cls");
				color(16);//超出color定义范围恢复默认
				displayboard(board, row, col);
				color(12);
				printf("\nThe coordinates are already occupied\n");//坐标被占用

			}
		}
		else
		{
			system("cls");
			color(16);
			displayboard(board, row, col);
			color(4);
			printf("\nThe coordinates are misused\n");//坐标无效超出范围
	
		}
	}
}
void Compurtermove(char board[Row][Col],int row,int col)
{
	unsigned int x = 0;
	unsigned int y = 0;
	color(9);
	printf("Compurter Moveing ...\n");
	Sleep(500);
	while (1)
	{	
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
		else
			continue;
	}
}
char Iswin(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if ((board[i][j] == board[i][j + 1]) && (board[i][j + 1] == board[i][j + 2]) && board[i][j + 1] != ' ')
		{
			return board[i][j];
		}
	}
	for (j = 0; j < col; j++)
	{
		i = 0;
		if ((board[i][j] == board[i + 1][j]) && (board[i + 1][j] == board[i + 2][j]) && board[i + 1][j] != ' ')
		{
			return board[i][j];
		}
	}
	if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2]) && board[1][1] != ' ')
	{
		return board[0][0];
	}
	else if ((board[0][2] == board[1][1]) && (board[1][1] == board[2][0]) && board[1][1] != ' ')
	{
		return board[0][2];
	}
	else if (1 == IsFull(board, Row, Col))
	{
		return 't';
	}
	else if (0 == IsFull(board, Row, Col))
	{
		return 'h';
	}
}
int IsFull(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
void game()
{
	color(2);
	char board[Row][Col] = { 0 };
	initarr(board, Row, Col);
	displayboard(board, Row, Col);
	while (1)
	{
		PlayermoveCoordinate(board, Row, Col);
		if (Iswin(board, Row, Col) != 'h')
		{
			break;
		}
		Compurtermove(board, Row, Col);
		displayboard(board, Row, Col);
		if (Iswin(board, Row, Col) != 'h')
		{
			break;
		}
	}
	if (Iswin(board, Row, Col) == '*')
	{
		color(5);
		printf("Player Win\n");
	}
	else if (Iswin(board, Row, Col) == '#')
	{
		color(9);
		printf("Compurter Win\n");
	}
	else if (Iswin(board, Row, Col) == 't')
	{
		color(7);
		printf("Draw\n");
	}
}