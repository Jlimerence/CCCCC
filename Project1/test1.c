#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	char arr[20] = { 0 };
	int  ch = 0;
	printf ("���������룺");
	scanf("%s", arr);
	int ret = 0;
	while((ret = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ�����루Y/N��");
	ch = getchar();
	if (ch == 'Y')
	{
		printf("������ȷ");

	}
	else
	{
		printf("�������");
	}
	return 0;
}


//дһ������ʵ��������������Ķ��ֲ���
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
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ����±�Ϊ%d\n", mid);
	}
	

	
	return 0;
}