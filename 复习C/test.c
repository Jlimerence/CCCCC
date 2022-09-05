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

int search_k(int arr[], int k)
{
	int left = 0, right = 9;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid+1;
		}
		else if (arr[mid] > k)
		{
			right = mid-1;
		}
		else
			return mid;
	}
	return -1;

}

int main()
{	
	int k =6;//需要查找的数
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//返回下标
	int ret = search_k(arr, k);
	if (ret < 0)
		printf("要查找数不存在\n");
	else
		printf("要查找的数下标为%d\n", ret);

	return 0;
}