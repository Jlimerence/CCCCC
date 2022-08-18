#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"

//写一个通讯录
void menu()
{
	printf("**********1.add    2.del********\n");
	printf("**********3.ser    4.mod********\n");
	printf("**********5.show   6.sort*******\n");
	printf("**********   0.exit  ***********\n");
}
int main()
{	
	//创建通讯录
	struct contact con;
	//初始化通讯录
	Initcontact(&con);

	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:Addcontact(&con);
			break;
		case 2:Delcontact(&con);
			break;
		case 3:Sercontact(&con);
			break;
		case 4:Modcontact(&con);
			break;
		case 5:Showcontact(&con);
			break;
		case 6:Sorcontact(&con);
			break;
		case 0:Savecontact(&con);
			Destorycontact(&con);
			printf("退出通讯录\n");
			break;
		default:printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}