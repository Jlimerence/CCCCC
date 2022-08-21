#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//结构体大小计算
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

//结构体传参


//struct stu
//{
//	int a;
//	char b;
//	double c;
//};
//
//void print(struct stu tmp)
//{
//	printf("%d\n", sizeof(tmp));//打印结果可以得出结构体传值时传递的是整个结构体的大小
//
//}
//int main()
//{
//	struct stu s = { 1,'a',3.14 };
//	print(s);
//
//	return 0;
//}

//枚举
//定义枚举类型
//enum color
//{	
//	//枚举的可能取值---枚举常量
//	red=2,//枚举常量的初始化，如果不初始化，就默认从0开始
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

//写一段代码判断机器是大端存储还是小端存储

//int check_sys()
//{	
//	int a = 1;
//	//返回1： 小端 
//  // 返回0：大端
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
	//返回1：小端
	//返回0：大端
	return u.a;
}
int main()
{
	//00000000000000000000000000000001
	//00 00 00 01
	int ret = check_sys();
	if (ret == 1)
		printf("小端存储\n");
	else
		printf("大端存储\n");

	return 0;
}

