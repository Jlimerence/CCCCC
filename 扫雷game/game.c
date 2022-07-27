#define _CRT_SECURE_NO_WARNINGS
#include"game.h "


void Init_board(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0, j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;

		}
	}

}

void Display_board(char board[ROWS][COLS], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{	
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{	
			printf("%c ", board[i][j]);//%c输出字符，%s输出字符串不要搞混淆了

		}
		printf("\n");
	}

}

void Arrange_board(char stor[ROWS][COLS], int row, int col)
{
	int x = 0, y = 0;
	int count = 0;
	    
	
	while (count<=9)
	{	
		x = rand() % 9 + 1;     	                        
		y = rand() % 9 + 1;
		if (stor[x][y] != '1')//防止在放过雷的地方重复放雷
		{
			stor[x][y] = '1';
			count++;
		}

	}
}

void Find_mine(char show[ROWS][COLS], char stor[ROWS][COLS], int row, int col)
{
	int x = 0, y = 0;
	int ret = 0;
	int count = 0;
	while (row*col-count>71)
	{
		printf("请输入排查雷的坐标：\n");
		scanf("%d%d", &x, &y);
		if ((x >= 1 && x <= 9) && (y >= 1 && y <= 9))
		{
			if (stor[x][y] == '1')
			{
				printf("很遗憾你被雷炸死了\n");
				break;
			}
			else
			{
				ret = around_mine(stor, x, y);
				show[x][y] = ret + '0';//数字+字符=字符				字符-字符=数字
				Display_board(show, ROW, COL);
				count++;
			}
		}
		else
		{
			printf("坐标非法，请重新输入：\n");
		}	
	}
	if (count == 10)
	{
		printf("恭喜你排雷成功！\n");
	}

}

int around_mine(char stor[ROWS][COLS],int x,int y)
{	
	int z = 0;
	z = stor[x - 1][y - 1] + stor[x][y - 1] + stor[x + 1][y - 1] + 
		stor[x - 1][y] + stor[x + 1][y] + stor[x - 1][y + 1] + stor[x][y + 1] + stor[x + 1][y + 1]-8*'0';
	return z;


}