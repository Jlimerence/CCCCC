#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	char arr[20] = { 0 };
	int  ch = 0;
	printf ("请输入密码：");
	scanf("%s", arr);
	int ret = 0;
	while((ret = getchar()) != '\n')
	{
		;
	}
	printf("请确认密码（Y/N）");
	ch = getchar();
	if (ch == 'Y')
	{
		printf("密码正确");

	}
	else
	{
		printf("密码错误");
	}
	return 0;
}


//写一个函数实现整型有序数组的二分查找
int lookfor(int arr[], int sz,int k)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	if (left > right)
		return 0;

}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 7;
	int ret = lookfor(arr, sz,k);
	if (ret == 0)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了下标为%d\n", mid);
	}
	

	
	return 0;
}