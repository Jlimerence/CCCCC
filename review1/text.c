#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//malloc calloc realloc free
int main()
{	
	//������ʮ���ֽڵĿռ�
	int* p = (int*)malloc(10 * sizeof(int));
	if (p==NULL)
	{
		return 0;
	}
	//ʹ�ÿ��ٵĿռ�
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
		printf("%d ", *(p + i));
		
	}
	//�������ٵĿռ��С
	int* ptr = (int*)realloc(p,15 * sizeof(int));
	if (ptr == NULL)
		return 0;
	p = ptr;
	for (i = 10; i < 15; i++)
	{
		*(p + i) = i;
		printf("%d ", *(p + i));
	}


	//�ͷſռ�
	free(p);
	p = NULL;

	return 0;
}


//int main()
//{
//	//����ʮ��Ԫ�ش�С�Ŀռ䣬ÿ��Ԫ��ռ���ĸ��ֽ�
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//		return 0;
//
//	//ʹ�ÿռ�
//		
//	
//
//
//	return 0;
//}