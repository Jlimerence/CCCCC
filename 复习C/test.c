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

//8���������ж�(�Գ���)
//����ֻ�ܱ�1���䱾������
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

//9����д������һ��1--100�г��ֶ��ٸ�9
//int main()
//{
//	//��λ9+ʮλ9
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{	
//		//��λ9
//		if (i % 10 == 9)
//			count++;
//		//ʮλ9
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count = %d\n", count);
//
//	return 0;
//}

//10������1/1-1/2+1/3-1/4+1/5����1/100

//int main()
//{
//	//�����������Ϊ����ż���Ϊ��
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

//11����������Ϸ
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
//		printf("�����֣�");
//		scanf("%d", &y);
//		if (y > x)
//			printf("�´���\n");
//		else if (y < x)
//			printf("��С��\n");
//		else
//		{
//			printf("�¶��ˣ�\n");
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
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:game();
//			break;
//		case 0:printf("�˳���Ϸ\n");
//			break;
//		default:printf("�������\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

#include<Windows.h>
#include<string.h>
//12�����Թػ�С����
//int main()
//{
//	system("shutdown -s -t 60");
//	char str[20] = { 0 };
//	again:
//	printf("��ĵ��Խ���һ�����ڹػ����������룺����ikun\n");
//	scanf("%s", &str);
//	if (strcmp(str, "����ikun") == 0)
//	{
//		system("shutdown -a");
//		printf("�ػ�ȡ����\n");
//	}
//	else
//		goto again;
//
//	return 0;
//}


//13����ӡͼ��
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
//		//��ӡһ��
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

//14��ð������
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

//15����һ�����������ڶ�������1�ĸ���
//int main()
//{
//	//11   00000000000000000000000000001011
//	//	   00000000000000000000000000000001
//	int input = 0;
//	printf("���������֣�");
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

//16����������
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	char b = 127;
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	//11111111111111111111111110000001
//	// ���c��ԭ��
//	//10000000000000000000000001111110
//
//	char c = a + b;
//	printf("%d", c);
//
//	return 0;
//}

//17��ָ�����͵�����:ָ����н����ò���ʱ�ܹ����ʵĿռ��С
//int main()
//{
//	int a = -1;
//	char* p =(char*) & a;
//	*p = 0;
//	return 0;
//
//}

//18�����������Ķ�����λ���ж���λ��ͬ
//^����������ͬΪ0������Ϊ1
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

//19���ֱ��ӡ�������е�����λ��ż��λ
int main()
{


	return 0;
}
