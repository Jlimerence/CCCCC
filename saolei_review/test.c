#define _CRT_SECURE_NO_WARNINGS

#include"game.h"


void menu()
{
	printf("*******1.play******\n");
	printf("*******0.exit******\n");
}

void game()
{	
	//创建棋盘
	char stor[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘
	Init_board(stor,'0');
	Init_board(show, '*');
	//布置雷的信息
	arrange_board(stor);

	display_board(show);
	display_board(stor);

	



}


int main()
{
	int input = 0;
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
		default:printf("输出错误\n");
			break;
		}
	} while (input);



	
	return 0;
}