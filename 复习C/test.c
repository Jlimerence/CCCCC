#define _CRT_SECURE_NO_WARNINGS\

#include<stdio.h>

//1������n�Ľ׳�
//int main()
//{
//	int n = 0, i = 0;
//	int ret = 1;
//	printf("������n��");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//
//	return 0;
//}

//2������1��+2��+����
//int main()
//{
//	int n = 0, i = 0;
//	int ret = 1;
//	int sum = 0;
//	printf("������n��");
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

//3������������������

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
	int k =6;//��Ҫ���ҵ���
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//�����±�
	int ret = search_k(arr, k);
	if (ret < 0)
		printf("Ҫ������������\n");
	else
		printf("Ҫ���ҵ����±�Ϊ%d\n", ret);

	return 0;
}