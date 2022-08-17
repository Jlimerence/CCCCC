#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"


void menu()
{
	printf("***********1.add        2.del***********\n");
	printf("***********3.ser        4.mod***********\n");
	printf("***********5.show       6.sor***********\n");
	printf("***********      0.exit      ***********\n");


}
int main()
{	
	//创建通讯录
	struct contact con;
	//初始化
	Initcontact(&con);

	int input = 0;
	menu();
	do
	{
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:Addcontact(&con);
			break;
		case DEL:Delcontacat(&con);
			break;
		case SER:Sercontact(&con);
			break;
		case MOD:Modcontact(&con);
			break;
		case SHOW:Showcontact(&con);
			break;
		//排序
		case SOR:Sorcontact(&con);
			break;
		case EXIT:Savecontact(&con);
			Destory(&con);
			printf("退出通讯录\n");
			break;
		default:printf("输入错误\n");
			break;
		}
	} while (input);

	return 0;
}