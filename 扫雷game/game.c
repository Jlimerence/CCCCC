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
			printf("%c ", board[i][j]);//%c����ַ���%s����ַ�����Ҫ�������

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
		if (stor[x][y] != '1')//��ֹ�ڷŹ��׵ĵط��ظ�����
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
		printf("�������Ų��׵����꣺\n");
		scanf("%d%d", &x, &y);
		if ((x >= 1 && x <= 9) && (y >= 1 && y <= 9))
		{
			if (stor[x][y] == '1')
			{
				printf("���ź��㱻��ը����\n");
				break;
			}
			else
			{
				ret = around_mine(stor, x, y);
				show[x][y] = ret + '0';//����+�ַ�=�ַ�				�ַ�-�ַ�=����
				Display_board(show, ROW, COL);
				count++;
			}
		}
		else
		{
			printf("����Ƿ������������룺\n");
		}	
	}
	if (count == 10)
	{
		printf("��ϲ�����׳ɹ���\n");
	}

}

int around_mine(char stor[ROWS][COLS],int x,int y)
{	
	int z = 0;
	z = stor[x - 1][y - 1] + stor[x][y - 1] + stor[x + 1][y - 1] + 
		stor[x - 1][y] + stor[x + 1][y] + stor[x - 1][y + 1] + stor[x][y + 1] + stor[x + 1][y + 1]-8*'0';
	return z;


}