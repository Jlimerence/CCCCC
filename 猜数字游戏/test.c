#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{	
	printf("**��������Ϸ**\n");
	printf("****1.play****\n");
	printf("****0.exit****\n");

}

void game()
{
	int x = 0, y = 0;
	//������ķ�Χ��1--10֮��
	x = rand()%10+1;
	while (1)
	{
		//������
		printf("������֣�");
		scanf("%d", &y);
		if (x == y)
		{
			printf("�¶��ˣ�\n");
			break;
		}
		else if (x > y)
			printf("��С�ˣ�\n");
		else
			printf("�´��ˣ�\n");
	}
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
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