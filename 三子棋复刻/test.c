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
	//��������
	char board[ROW][COL] = { 0 };
	//��ʼ������Ϊ�ո�
	Initboard(board);
	//չʾ����
	Showboard(board);
	//����Ϸ
	int ret = 0;
	do
	{
		Playermove(board);
		ret = Judgewin(board);
		switch (ret)
		{
		case 1:printf("���Ӯ\n");
			break;
		case 2:printf("����Ӯ\n");
			break;
		case 3:printf("ƽ��\n");
			break;
		case 0:printf("������Ϸ\n");
			break;
		}
		if (ret != 0)
			break;

		COMmove(board);
		ret = Judgewin(board);
		switch (ret)
		{
		case 1:printf("���Ӯ\n");
			break;
		case 2:printf("����Ӯ\n");
			break;
		case 3:printf("ƽ��\n");
			break;
		case 0:printf("������Ϸ\n");
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
		printf("��ѡ��"); 
		scanf("%d", &input);
		switch (input)
		{
		case 1:game();
			break;
		case 0:printf("�˳���Ϸ\n");
			break;
		default:printf("ѡ�����\n");
			break;
		}
	} while (input);

	return 0;
}