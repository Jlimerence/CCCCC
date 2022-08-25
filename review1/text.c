#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//malloc calloc realloc free
//int main()
//{	
//	//开辟四十个字节的空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p==NULL)
//	{
//		return 0;
//	}
//	//使用开辟的空间
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//		
//	}
//	//调整开辟的空间大小
//	int* ptr = (int*)realloc(p,15 * sizeof(int));
//	if (ptr == NULL)
//		return 0;
//	p = ptr;
//	for (i = 10; i < 15; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//
//
//	//释放空间
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//int main()
//{
//	//开辟十个元素大小的空间，每个元素占用四个字节
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//		return 0;
//
//	//使用空间
//		
//	
//
//
//	return 0;
//}


//匿名结构体类型
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20], * p;
//
//int main()
//{
//	p = &x;//垃圾编译器，类型不同都没有警告------>在Linux下实现会报错
//
//	return 0;
//}


//结构体的自引用
//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//struct S
//{
//	int data;
//	struct S *next;
//};
//
//int main()
//{
//	printf("%d", sizeof(struct A));
//
//
//	return 0;
//}



//int main()
//{
//	int i = 0, j = 0;
//	for (i = 0; i < 10; i++)
//	{	
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//	}
//
//	return 0;
//}

int main()
{
	int a = 1;
	

	return 0;
}

