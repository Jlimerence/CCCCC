#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>

//int main()
//{
//	//���ڴ�����ռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	//�жϿռ��Ƿ����
//	if (p == NULL)
//	{	
//		//��ӡ������Ϣ
// 		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//ʹ�ÿ��ٵ��ڴ�ռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		//��ӡ
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//�ͷ��ڴ�ռ�
//	free(p);
//	//�ռ仹���˲���ϵͳ������ָ����Ȼָ���ǿ�ռ䣬����ֵ�շ�ֹ�Ƿ����ʵ�����
//	p = NULL;
//
//	return 0;
//}

//calloc��malloc����calloc����ʹ��ǰ�ȳ�ʼ��Ϊ0
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
//	//reallocʹ��ע������
//	//realloc������С�������������1��ԭ�пռ�������㹻��Ŀռ䣬ֱ���ں�����ϣ����صľ���ԭ��p�ĵ�ַ
//	//2��ԭ�пռ�֮��û���㹻��Ŀռ䣬����Ѱ��һ����㹻��Ŀռ䣬����ǰp��ָ��ռ����ݸ��Ƶ��¿ռ����棬Ȼ���ͷŵ�pָ��Ŀռ䣬�����µĵ�ַ
//	//3���ռ����ʧ�ܣ����ؿ�ָ�롣������һ���µ�ָ�������ܣ���ֹ����ʧ�ܣ�Ȼ���Ҳ���ԭ���Ŀռ�
//	int* str = realloc(p, 40);
//	if (str == NULL)
//	{
//		printf("����ʧ��\n");
//	}
//	else
//	{
//		p = str;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		//��ӡ
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

//���䣺realloc����ֱ�ӿ��ٿռ�    realloc(NULL,40)�ȼ���malloc��40��


//��̬�����ڴ������ͷ�--->�ڴ�й¶
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
//	int* ptr = malloc(40);//malloc���ڶ������ٿռ䣬ֻҪ������free�������ռ��һֱ����
//	return ptr;
//}
//
//int main()
//{
//	int* p = test();
//
//	return 0;
//}


//��������

//struct S
//{
//	int n;
//	int arr[0];//δ֪��С��---���������Ա----����Ĵ�С�ǿ��Ե�����
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

//��ָ��ʵ����������Ĺ���
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