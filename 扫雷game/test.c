#include"game.h "
void menu()
{
	printf("*******************************\n");
	printf("********      1.play   ********\n");
	printf("********      0.exit   ********\n");
	printf("*******************************\n");


}
//ɨ�׵��㷨ʵ��
void game()
{
	char stor[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	Init_board(stor, ROWS, COLS,'0');
	Init_board(show, ROWS, COLS, '*');
	//�����׵�λ��
	Arrange_board(stor, ROW, COL);
	//չʾ����
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
		printf("�����룺\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:game();
			break;
		case 0:printf("�˳���Ϸ��\n");
			break;
		default:printf("����������������룺\n");
			break;
		}

	} while (input);
	

}
int main()
{
	test();
	return 0;
}
