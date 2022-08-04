#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//喝汽水，1瓶汽水1元，2个空瓶可以换一个汽水，给20元，可以喝多少汽水（编程实现）
//int main()
//{
//	int total = 0;//统计喝掉多少
//	int empty = 0;//空瓶数
//	int money = 20;
//	//买回来的汽水喝掉
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

//模拟实现strlen函数
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


//调整数组，使奇数全部位于偶数前面

//void change_arr(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{	
//		//从左边找偶数
//		while ((left < right) && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//从右边找奇数
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

//答案为什么是255？？？？？？？？？？？
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



//打印杨辉三角

//int main()
//{
//	看作二维数组
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
//	打印
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


//猜凶手
//日本某地发生了一起谋杀案，抓到四个嫌疑人，凶手必在其中
//以下是四个嫌疑人的供词
//A说：不是我	B说：是C	C说：是D	D说：C在胡说
//四个人中有三个人说的是真话，一个人说的是假话

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


////小插曲
//#include<stdlib.h>
//int main()
//{	
//	//申请四十个字节大小的空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	//使用空间
//	//释放空间
//	free(p);
//	p = NULL;//需要人为置为空指针
//}


//练习qsort函数
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

//旋转字符串问题

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
//			arr++;//arr目前位置怎么还原呢？学完动态内存可能会有帮助***************************
//		}
//		*arr = tmp;
//	}
//
//}

#include<assert.h>
#include<string.h>

//暴力求解法
//void move_left(char* arr, int k)
//{	
//	assert(arr);
//	char tmp = 0;
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{	
//		//翻转一次
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


//三步翻转法（代码执行的效率较高）
//ab cdef翻转左边
//ba fedc翻转右边
//cdefab翻转整体

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
	//翻转左边
	reverse(arr,arr+k-1);		//左边翻转只可以使用参数k
	//翻转右边
	reverse(arr+k,arr+len-1);//使用strlen函数，来表示长度
	//翻转整体
	reverse(arr,arr+len-1);

}
//int main()
//{
//	char arr[] = "abcdef";
//	move(arr, 2);
//	printf("%s", arr);
//	return 0;
//}

//思考：左旋转可以搞定，那么右旋转呢？？？

//用三步翻转法可以吗？



//写一个函数判断B字符串是不是A经过翻转得到的
//方法一：穷举法
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

//方法二
//abcdefabcdef
//字符串B如果是A经过旋转得到的，那一定是A+A的子集