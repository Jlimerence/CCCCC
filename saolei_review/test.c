#define _CRT_SECURE_NO_WARNINGS

#include"game.h"


void menu()
{
	printf("*******1.play******\n");
	printf("*******0.exit******\n");
}

void game()
{	
	//��������
	char stor[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	Init_board(stor,'0');
	Init_board(show, '*');
	//�����׵���Ϣ
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:game();
			break;
		case 0:printf("�˳���Ϸ\n");
			break;
		default:printf("�������\n");
			break;
		}
	} while (input);



	
	return 0;
}