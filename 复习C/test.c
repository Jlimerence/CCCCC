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
//	int k =6;//��Ҫ���ҵ���
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//�����±�
//	int ret = search_k(arr, k);
//	if (ret < 0)
//		printf("Ҫ������������\n");
//	else
//		printf("Ҫ���ҵ����±�Ϊ%d\n", ret);
//
//	return 0;
//}

//4�������¼����
//int main()
//{	
//	char passord[20] = { 0 };
//	int i = 3;
//	while (i--)
//	{
//		printf("���������룺");
//		scanf("%s", &passord);
//		if (strcmp(passord, "hello") == 0)
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//			printf("�������\n");
//	}
//	return 0;
//
//}

//5���������Ӵ�С���
//a�����ֵ��b���м�ֵ��c����Сֵ
//void order_by(int* a,int* b,int* c)
//{	
//	//ȷ��aΪ���ֵ
//	if (*a < *b)
//	{	
//		//�������ݣ���������ʱ������----->���ķ�������ͬΪ0������Ϊ1��
//		*a = *a ^ *b;
//		*b = *a ^ *b;
//		*a = *a ^ *b;
//	}
//	if (*a < *c)
//	{
//		//����˳��(������ʱ����)
//		int tmp = 0;
//		tmp = *a;
//		*a = *c;
//		*c = tmp;
//	}
//	//ȷ��cΪ��Сֵ
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

//6��շת����������Լ��
//int main()
//{
//	//��24��18Ϊ��----->���Լ��Ϊ6
//	int m = 24, n = 18;
//	while (m % n)
//	{
//		int r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("���Լ��Ϊ%d\n", n);
//	return 0;
//
//}

//7�������ж�
//��ͨ����ܱ�4�������Ҳ��ܱ�100�����ģ������ꡣ�� ��2004��������꣩
//��������ܱ�400�����������ꡣ�� ��2000�������꣬1900�겻�����꣩
//int main()
//{
//	int year = 0;
//	printf("��������ݣ�");
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("%d��������\n",year);
//	}
//	else
//		printf("%d�겻������\n", year);
//
//	return 0;
//}

//8���������ж�
//����ֻ�ܱ�1���䱾������
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