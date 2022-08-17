#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("******1.play******\n");
	printf("******0.exit******\n");
	printf("******************\n");
}


void game()
{	
	//建立棋盘
	char board[ROW][COL] = { 0 };
	//初始化棋盘为空格
	Initboard(board);
	//展示棋盘
	Showboard(board);
	//玩游戏
	int ret = 0;
	do
	{
		Playermove(board);
		ret = Judgewin(board);
		switch (ret)
		{
		case 1:printf("玩家赢\n");
			break;
		case 2:printf("电脑赢\n");
			break;
		case 3:printf("平局\n");
			break;
		case 0:printf("继续游戏\n");
			break;
		}
		if (ret != 0)
			break;

		COMmove(board);
		ret = Judgewin(board);
		switch (ret)
		{
		case 1:printf("玩家赢\n");
			break;
		case 2:printf("电脑赢\n");
			break;
		case 3:printf("平局\n");
			break;
		case 0:printf("继续游戏\n");
			break;
		}

	} while (!ret);
	
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择："); 
		scanf("%d", &input);
		switch (input)
		{
		case 1:game();
			break;
		case 0:printf("退出游戏\n");
			break;
		default:printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}