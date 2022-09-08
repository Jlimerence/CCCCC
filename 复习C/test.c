#define _CRT_SECURE_NO_WARNINGS\

#include<stdio.h>

//1、计算n的阶乘
//int main()
//{
//	int n = 0, i = 0;
//	int ret = 1;
//	printf("请输入n：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//
//	return 0;
//}

//2、计算1！+2！+……
//int main()
//{
//	int n = 0, i = 0;
//	int ret = 1;
//	int sum = 0;
//	printf("请输入n：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//
//	return 0;
//}

//3、整型数组的有序查找

//int search_k(int arr[], int k)
//{
//	int left = 0, right = 9;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//
//}
//
//int main()
//{	
//	int k =6;//需要查找的数
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//返回下标
//	int ret = search_k(arr, k);
//	if (ret < 0)
//		printf("要查找数不存在\n");
//	else
//		printf("要查找的数下标为%d\n", ret);
//
//	return 0;
//}

//4、密码登录问题
//int main()
//{	
//	char passord[20] = { 0 };
//	int i = 3;
//	while (i--)
//	{
//		printf("请输入密码：");
//		scanf("%s", &passord);
//		if (strcmp(passord, "hello") == 0)
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//			printf("密码错误\n");
//	}
//	return 0;
//
//}

//5、三个数从大到小输出
//a是最大值，b是中间值，c是最小值
//void order_by(int* a,int* b,int* c)
//{	
//	//确保a为最大值
//	if (*a < *b)
//	{	
//		//交换数据（不创建临时变量）----->异或的方法（相同为0，相异为1）
//		*a = *a ^ *b;
//		*b = *a ^ *b;
//		*a = *a ^ *b;
//	}
//	if (*a < *c)
//	{
//		//交换顺序(创建临时变量)
//		int tmp = 0;
//		tmp = *a;
//		*a = *c;
//		*c = tmp;
//	}
//	//确保c为最小值
//	if (*c > *b)
//	{
//		int tmp = *b;
//		*b = *c;
//		*c = tmp;
//	}
//	
//}
//
//int main()
//{
//	int a = 4, b = 22, c = 158;
//	order_by(&a, &b, &c);
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}

//6、辗转相除法求最大公约数
//int main()
//{
//	//以24，18为例----->最大公约数为6
//	int m = 24, n = 18;
//	while (m % n)
//	{
//		int r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("最大公约数为%d\n", n);
//	return 0;
//
//}

//7、闰年判断
//普通年份能被4整除，且不能被100整除的，是闰年。（ 如2004年就是闰年）
//世纪年份能被400整除的是闰年。（ 如2000年是闰年，1900年不是闰年）
//int main()
//{
//	int year = 0;
//	printf("请输入年份：");
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("%d年是闰年\n",year);
//	}
//	else
//		printf("%d年不是闰年\n", year);
//
//	return 0;
//}

//8、素数的判断(试除法)
//素数只能被1和其本身整除
//int main()
//{	
//	int i = 0, j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//
//		if (i == j)
//			printf("%d ", i);
//
//	}
//
//	return 0;
//}

//9、编写程序数一下1--100中出现多少个9
//int main()
//{
//	//各位9+十位9
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{	
//		//个位9
//		if (i % 10 == 9)
//			count++;
//		//十位9
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count = %d\n", count);
//
//	return 0;
//}

//10、计算1/1-1/2+1/3-1/4+1/5……1/100

//int main()
//{
//	//分析：奇数项都为正，偶数项都为负
//	int i = 0;
//	int flag = 1;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag * (1.0 / i);
//			flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//11、猜数字游戏
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("******1.play*********\n");
//	printf("******0.exit*********\n");
//}
//
//void game()
//{
//	int x = 0;
//	x = rand() % 10 + 1;
//	int y = 0;
//	while (1)
//	{
//		printf("猜数字：");
//		scanf("%d", &y);
//		if (y > x)
//			printf("猜大了\n");
//		else if (y < x)
//			printf("猜小了\n");
//		else
//		{
//			printf("猜对了！\n");
//			break;
//		}
//
//	}
//	
//	
//
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{	
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:game();
//			break;
//		case 0:printf("退出游戏\n");
//			break;
//		default:printf("输入错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

#include<Windows.h>
#include<string.h>
//12、电脑关机小妙招
//int main()
//{
//	system("shutdown -s -t 60");
//	char str[20] = { 0 };
//	again:
//	printf("你的电脑将在一分钟内关机，除非输入：我是ikun\n");
//	scanf("%s", &str);
//	if (strcmp(str, "我是ikun") == 0)
//	{
//		system("shutdown -a");
//		printf("关机取消！\n");
//	}
//	else
//		goto again;
//
//	return 0;
//}


//13、打印图形
//  *
// **
//***
//**
//*
//int main()
//{
//	int x = 0, y = 0;
//	for (x = 0; x < 3; x++)
//	{
//		//打印一行
//		for (y = x; y < 2; y++)
//		{
//			printf(" ");
//		}
//		for (y = 0; y < x + 1; y++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (x = 0; x < 2; x++)
//	{
//		for (y = x; y < 2; y++)
//		{
//			printf("*");
//		}
//		for (y = 0; y < x+1; y++)
//		{
//			printf(" ");
//		}
//		printf("\n");	
//	}
//
//  }

//14、冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] < arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//15、求一个整形数据在二进制中1的个数
//int main()
//{
//	//11   00000000000000000000000000001011
//	//	   00000000000000000000000000000001
//	int input = 0;
//	printf("请输入数字：");
//	scanf("%d", &input);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((input >> i) & 1 == 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//16、整型提升
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	char b = 127;
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	//11111111111111111111111110000001
//	// 求出c的原码
//	//10000000000000000000000001111110
//
//	char c = a + b;
//	printf("%d", c);
//
//	return 0;
//}

//17、指针类型的意义:指针进行解引用操作时能够访问的空间大小
//int main()
//{
//	int a = -1;
//	char* p =(char*) & a;
//	*p = 0;
//	return 0;
//
//}

//18、两个整数的二进制位中有多少位不同
//^操作符：相同为0，相异为1
//int main()
//{
//	int m = 1, n = -1;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((((m ^ n) >> i) & 1) == 1)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//19、分别打印二进制中的奇数位和偶数位
int main()
{


	return 0;
}
