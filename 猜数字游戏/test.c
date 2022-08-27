#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{	
	printf("**猜数字游戏**\n");
	printf("****1.play****\n");
	printf("****0.exit****\n");

}

void game()
{
	int x = 0, y = 0;
	//随机数的范围在1--10之间
	x = rand()%10+1;
	while (1)
	{
		//猜数字
		printf("请猜数字：");
		scanf("%d", &y);
		if (x == y)
		{
			printf("猜对了！\n");
			break;
		}
		else if (x > y)
			printf("猜小了！\n");
		else
			printf("猜大了！\n");
	}
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
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
		default:printf("输入错误\n");
			break;
		}
	} while (input);

	return 0;
}