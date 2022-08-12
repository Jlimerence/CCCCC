#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>

//int main()
//{
//	//向内存申请空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	//判断空间是否可用
//	if (p == NULL)
//	{	
//		//打印错误信息
// 		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//使用开辟的内存空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		//打印
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放内存空间
//	free(p);
//	//空间还给了操作系统，但是指针仍然指向那块空间，将其值空防止非法访问的问题
//	p = NULL;
//
//	return 0;
//}

//calloc和malloc区别：calloc会在使用前先初始化为0
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(20);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	//realloc使用注意事项
//	//realloc调整大小有三种种情况：1、原有空间后面有足够大的空间，直接在后面加上，返回的就是原来p的地址
//	//2、原有空间之后没有足够大的空间，重新寻找一块儿足够大的空间，将先前p所指向空间内容复制到新空间里面，然后释放掉p指向的空间，返回新的地址
//	//3、空间调整失败，返回空指针。所以用一个新的指针来接受，防止调整失败，然后找不到原来的空间
//	int* str = realloc(p, 40);
//	if (str == NULL)
//	{
//		printf("调整失败\n");
//	}
//	else
//	{
//		p = str;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		//打印
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//补充：realloc可以直接开辟空间    realloc(NULL,40)等价于malloc（40）


//动态开辟内存忘记释放--->内存泄露
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//
//	return 0;
//}

//int* test()
//{
//	int* ptr = malloc(40);//malloc是在堆区开辟空间，只要不进行free操作，空间会一直存在
//	return ptr;
//}
//
//int main()
//{
//	int* p = test();
//
//	return 0;
//}


//柔性数组

//struct S
//{
//	int n;
//	int arr[0];//未知大小的---柔性数组成员----数组的大小是可以调整的
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//
//	return 0;
//}

//用指针实现柔性数组的功能
struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = (int*)malloc(sizeof(int) * 5);
	
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
	int* ptr = realloc(ps->arr, sizeof(int) * 10);
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;

	return 0;
}