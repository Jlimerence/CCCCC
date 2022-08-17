#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

//初始化棋盘为空格
void Initboard(char board[ROW][COL])
{
	int i = 0, j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//展示棋盘
// % | % | % 
//---|---|---
// % | % | % 
//---|---|---
// % | % | % 

void Showboard(char board[ROW][COL])
 {
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < COL - 1)
				printf("|");
		}
		printf("\n");
		if (i < ROW - 1)//最后一行既不打印分割行也不打印“|”所以先进行判断
		{
			for (j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
					printf("|");
			}
			printf("\n");
		}
	}
 }

void Playermove(char board[ROW][COL])
{	
	int x = 0, y = 0;
	while (1)
	{	
		printf("请输入坐标：\n");
		scanf("%d%d", &x, &y);
		//判断坐标合法性
		if ((x >= 1 && x <= ROW) && (y >= 1 && y <= COL) && (board[x - 1][y - 1] == ' '))
		{
			board[x - 1][y - 1] = '*';
			Showboard(board);
			break;
		}
		else
		{
			printf("坐标非法\n");
		}
	}
}

void COMmove(char board[ROW][COL])
{	
	printf("电脑走：\n");
	int x = 0, y = 0;
	while (1)
	{
		x = rand() % ROW ;
		y = rand() % COL ;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			Showboard(board);
			break;
		}
	}
}

int Judgewin(char board[ROW][COL])
{
	//1、玩家赢
	int i = 0, j = 0;
	for (i = 0; i < ROW; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2]=='*')
			return 1;
	}
	for (j = 0; j < COL; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] == '*')
			return 1;
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] == '*')
		return 1;
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] == '*')
		return 1;
	//2、电脑赢

	for (i = 0; i < ROW; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] == '#')
			return 2;
	}
	for (j = 0; j < COL; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] == '#')
			return 2;
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] == '#')
		return 2;
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] == '#')
		return 2;


	//3、判断平局和继续游戏

	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{	
			//继续游戏
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 3;//平局

}