#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�ṹ���С����
//struct stu
//{
//	char a1;
//	char a2;
//	int b;
//};
//
//struct book
//{
//	double a;
//	char b;
//	int c;
//};
//struct book1
//{
//	char a;
//	struct book b1;
//	double c;
//};
//int main()
//{
//	struct stu t1 = { 0 };
//	//printf("%d", sizeof(struct stu));
//	//printf("%d", sizeof(struct book));
//	printf("%d", sizeof(struct book1));
//	return 0;
//}

//�ṹ�崫��


//struct stu
//{
//	int a;
//	char b;
//	double c;
//};
//
//void print(struct stu tmp)
//{
//	printf("%d\n", sizeof(tmp));//��ӡ������Եó��ṹ�崫ֵʱ���ݵ��������ṹ��Ĵ�С
//
//}
//int main()
//{
//	struct stu s = { 1,'a',3.14 };
//	print(s);
//
//	return 0;
//}

//ö��
//����ö������
//enum color
//{	
//	//ö�ٵĿ���ȡֵ---ö�ٳ���
//	red=2,//ö�ٳ����ĳ�ʼ�����������ʼ������Ĭ�ϴ�0��ʼ
//	//red,
//	green,
//	blue
//};
//int main()
//{
//	enum color c = red;
//	printf("%d %d %d ",red,green,blue);
//
//	return 0;
//}

//дһ�δ����жϻ����Ǵ�˴洢����С�˴洢

//int check_sys()
//{	
//	int a = 1;
//	//����1�� С�� 
//  // ����0�����
//	return *(char*)&a;
//}

int check_sys()
{
	union un
	{
		char a;
		int b;
	}u;

	u.b = 1;
	//����1��С��
	//����0�����
	return u.a;
}
int main()
{
	//00000000000000000000000000000001
	//00 00 00 01
	int ret = check_sys();
	if (ret == 1)
		printf("С�˴洢\n");
	else
		printf("��˴洢\n");

	return 0;
}

