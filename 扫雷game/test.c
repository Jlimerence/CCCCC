#include"game.h "
void menu()
{
	printf("*******************************\n");
	printf("********      1.play   ********\n");
	printf("********      0.exit   ********\n");
	printf("*******************************\n");


}
//扫雷的算法实现
void game()
{
	char stor[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	Init_board(stor, ROWS, COLS,'0');
	Init_board(show, ROWS, COLS, '*');
	//布置雷的位置
	Arrange_board(stor, ROW, COL);
	//展示棋盘
	Display_board(show,ROW,COL);
	//Display_board(stor, ROW, COL);
	Find_mine(show, stor, ROW, COL);

}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{	
		menu();
		printf("请输入：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:game();
			break;
		case 0:printf("退出游戏！\n");
			break;
		default:printf("输入错误请重新输入：\n");
			break;
		}

	} while (input);
	

}
int main()
{
	test();
	return 0;
}
