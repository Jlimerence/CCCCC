#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"

//дһ��ͨѶ¼
void menu()
{
	printf("**********1.add    2.del********\n");
	printf("**********3.ser    4.mod********\n");
	printf("**********5.show   6.sort*******\n");
	printf("**********   0.exit  ***********\n");
}
int main()
{	
	//����ͨѶ¼
	struct contact con;
	//��ʼ��ͨѶ¼
	Initcontact(&con);

	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
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
			printf("�˳�ͨѶ¼\n");
			break;
		default:printf("ѡ�����\n");
			break;
		}
	} while (input);

	return 0;
}