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
		color(9);
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i < row + 1; i++)
	{
		color(9);
		printf("%d ", i);
		for (j = 1; j < col + 1; j++)
		{
			if ((board[i][j] >= 49) && (board[i][j] <= 57))
			{
				color(0xc);
				printf("%c ", board[i][j]);
			}
			else if (board[i][j] == '#')
			{
				color(4);
				printf("%c ", board[i][j]);
			}
			else if (board[i][j] == 'a')
			{
				color(2);
				printf("%c ", board[i][j]);
			}
			else
			{
				color(16);
				printf("%c ", board[i][j]);
			}

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
				//for (i = 0; i < 3; i++)
				//{
				//	if (board[x + 1][yP1 - i] == '#')
				//		count++;
				//	if (board[x][yP1 - i] == '#')
				//		count++;
				//	if (board[x - 1][yP1 - i] == '#')
				//		count++;
				//}
				//board2[x][y] = count + '0';
				Findboom(board, board2, x, y);
				break;
			}
			if (board[x][y] == 'a')
			{
				color(4);
				printf("Coordinates are already occupied!\n");
				continue;
			}
			if (board[x][y] == '#')
			{
				displayboard(board, ROW, COL);
				color(4);
				printf("Boom!\n");
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
void Findboom(char board[SROW][SCOL], char board2[SROW][SCOL], int x, int y)
{	
	int yP1 = y + 1;
	int i = 0;
	int count = 0;
		for (i = 0; i < 3; i++)
		{
			if (board[x + 1][yP1 - i] == '#')
				count++;
			if (board[x][yP1 - i] == '#')
				count++;
			if (board[x - 1][yP1 - i] == '#')
				count++;
		}
		if (count != 0)
		{
			board2[x][y] = count + '0';
			board[x][y] = 'a';
		}
		else if (count == 0)
		{
			board2[x][y] = ' ';
			board[x][y] = 'a';
			for (i = 0; i < 3; i++)
			{
				if (x + 1 < SROW, yP1 - i < SCOL)
				{
					if ((board[x + 1][yP1 - i] == '0') && (board[x - 1][yP1 - i] == '0') && (board[x][yP1] == '0') && (board[x][yP1 - 2] == '0'))
					{	
						Findboom(board, board2, x, yP1);
						Findboom(board, board2, x, yP1 - 2);
						Findboom(board, board2, x + 1, yP1 - i);
						Findboom(board, board2, x - 1, yP1 - i);
					}
				}

			}
		}
	}		
int Ifwiner(char board[SROW][SCOL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 1; i < row + 1; i++)
	{
		for (j = 1; j < col + 1; j++)
		{
			if (board[i][j] == '0')
			{
				return 0;
			}
		}
	}
	return 1;
}
void put(char board[SROW][SCOL], int  piece)
{	
	int count = piece;
	while(count)
	{
		int x = rand() % ROW + 1;
		int y = rand() % COL + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '#';
			count--;
		}
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
	put(boardmain, Boomnumber);
	int Dowin = 0;
	while (1)
	{
		displayboard(boardshow, ROW, COL);
		if (writeCoordinateAndFind(boardmain, boardshow) == 0)
		{
			Dowin = 0;
			break;
		}
		if (Ifwiner(boardmain, ROW, COL) == 1)
		{
			displayboard(boardmain, ROW, COL);
			color(6);
			printf("You Win!\n");
			break;
		}
	}
	if (Dowin == 0)
	{
		color(0xd);
		printf("------------------------------\n");
	}
}