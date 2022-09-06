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

//8、素数的判断
//素数只能被1和其本身整除
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0, j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j != 0)
				break;
		}
		
	}
	

	return 0;
}