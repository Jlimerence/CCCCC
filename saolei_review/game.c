#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void Init_board(char board[ROWS][COLS],char set )
{
	int i = 0, j = 0;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			board[i][j] = set;
		}
	}
}

void display_board(char board[ROWS][COLS])
{
	int i = 0, j = 0;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			printf(" %c ", board[i][j]);
		}
		printf("\n");
	}
}

void arrange_board(char stor[ROWS][COLS])
{
	//²¼ÖÃÊ®¸öÀ×
	int x = 0, y = 0;
	int count = 0;
	while (1)
	{	
		x = rand() % ROW + 1;
		y = rand() % COL + 1;
		if (stor[x][y] == '0')
		{	
			count++;
			stor[x][y] = '1';
		}
		if (count == 10)
			break;
	}

}