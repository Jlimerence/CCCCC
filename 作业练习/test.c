#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һ����ˮ����20Ԫ�����Ժȶ�����ˮ�����ʵ�֣�
//int main()
//{
//	int total = 0;//ͳ�ƺȵ�����
//	int empty = 0;//��ƿ��
//	int money = 20;
//	//���������ˮ�ȵ�
//	total = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d\n", total);
//	return 0;
//}

//ģ��ʵ��strlen����
//int my_strlen(char* p)
//{	
//	int count = 0;
//	while (*p != '\0')
//	{	
//		p++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = { "hello" };
//	int ret = my_strlen(arr);
//	printf("ret=%d\n", ret);
//	return 0;
//}


//�������飬ʹ����ȫ��λ��ż��ǰ��

//void change_arr(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{	
//		//�������ż��
//		while ((left < right) && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//���ұ�������
//		while ((left < right) && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	change_arr(arr,sz);
//	print(arr, sz);
//	return 0;
//}


//00000000000000000000000011001000
//00000000000000000000000001100100
//00000000000000000000000100101100

//��Ϊʲô��255����������������������
//int main()
//{	
//	char arr[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		arr[i] = -1 - i;
//	}
//	printf("%d\n", strlen(arr));
//	return 0;
//}



//��ӡ�������

//int main()
//{
//	������ά����
//	int arr[10][10] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//
//	��ӡ
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//������
//�ձ�ĳ�ط�����һ��ıɱ����ץ���ĸ������ˣ����ֱ�������
//�������ĸ������˵Ĺ���
//A˵��������	B˵����C	C˵����D	D˵��C�ں�˵
//�ĸ�������������˵�����滰��һ����˵���Ǽٻ�

//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//			printf("%c\n", killer);
//	}
//	return 0;
//}


////С����
//#include<stdlib.h>
//int main()
//{	
//	//������ʮ���ֽڴ�С�Ŀռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	//ʹ�ÿռ�
//	//�ͷſռ�
//	free(p);
//	p = NULL;//��Ҫ��Ϊ��Ϊ��ָ��
//}


//��ϰqsort����
//#include<stdlib.h>
//int cmp_int(const void* p1, const void* p2)
//{
//	return *((int*)p1) - *((int*)p2);
//}
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//typedef struct book
//{
//	int price;
//	char author[20];
//}book;
//int cmp_price(const void* p1, const void* p2)
//{
//	return ((book*)p1)->price - ((book*)p2)->price;
//
//}
//#include<string.h>
//int cmp_author(const void* p1, const void* p2)
//{
//	return strcmp(((book*)p1)->author, ((book*)p2)->author);
//}
//void test2()
//{
//	book b1[] = { {20,"zhangsan"},{10,"wangwu"},{9,"lisi"} };
//	int sz = sizeof(b1) / sizeof(b1[0]);
//	//qsort(b1, sz, sizeof(b1[0]), cmp_price);
//	qsort(b1, sz, sizeof(b1[0]), cmp_author);
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//��ת�ַ�������

//void move_left(char* arr, int k)
//{
//	char tmp = 0;
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		tmp = *arr;
//		while (*(arr+1)!='\0')
//		{
//			*arr = *(arr + 1);
//			arr++;//arrĿǰλ����ô��ԭ�أ�ѧ�궯̬�ڴ���ܻ��а���***************************
//		}
//		*arr = tmp;
//	}
//
//}

#include<assert.h>
#include<string.h>

//������ⷨ
//void move_left(char* arr, int k)
//{	
//	assert(arr);
//	char tmp = 0;
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{	
//		//��תһ��
//
//		tmp = *arr;
//		int j = 0;
//
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//
//}
//
//int main()
//{
//	char arr[] = { "abcdef" };
//	move_left(arr, 2);
//	printf("%s", arr);
//	return 0;
//
//}


//������ת��������ִ�е�Ч�ʽϸߣ�
//ab cdef��ת���
//ba fedc��ת�ұ�
//cdefab��ת����

#include<assert.h>
void reverse(char* left, char* right)
{	
	assert(left != NULL && right != NULL);
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}

}

void move(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	//��ת���
	reverse(arr,arr+k-1);		//��߷�תֻ����ʹ�ò���k
	//��ת�ұ�
	reverse(arr+k,arr+len-1);//ʹ��strlen����������ʾ����
	//��ת����
	reverse(arr,arr+len-1);

}
//int main()
//{
//	char arr[] = "abcdef";
//	move(arr, 2);
//	printf("%s", arr);
//	return 0;
//}

//˼��������ת���Ը㶨����ô����ת�أ�����

//��������ת��������



//дһ�������ж�B�ַ����ǲ���A������ת�õ���
//����һ����ٷ�
#include<string.h>
int Is_leftmove(char* arr1, char* arr2)
{	
	assert(arr1 != 0 && arr2 != 0);
	int len = strlen(arr1);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		move(arr1, 1);
		if (strcmp(arr1, arr2) == 0)
			return 1;
	}
	return 0;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
	int ret= Is_leftmove(arr1, arr2);
	if (ret == 1)
		printf("Yes\n");
	else
		printf("NO\n");
	return 0;
}

//������
//abcdefabcdef
//�ַ���B�����A������ת�õ��ģ���һ����A+A���Ӽ�