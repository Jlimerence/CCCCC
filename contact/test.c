#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"


void menu()
{
	printf("***********1.add        2.del***********\n");
	printf("***********3.ser        4.mod***********\n");
	printf("***********5.show       6.aaa***********\n");
	printf("***********      0.exit      ***********\n");


}
int main()
{	
	//����ͨѶ¼
	struct contact con;
	//��ʼ��
	Initcontact(&con);

	int input = 0;
	menu();
	do
	{
		printf("������>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:Addcontact(&con);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:Showcontact(&con);
			break;
		case 6:
			break;
		case 0:printf("�˳�ͨѶ¼\n");
			break;
		default:printf("�������\n");
			break;
		}
	} while (input);

	return 0;
}