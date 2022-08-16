#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//预定义符号
//int main()
//{
//	printf("%s\n", __TIME__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//
//	return 0;
//}

//利用预定义符号写日志文件
//int main()
//{
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//
//
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf,"%s %s %s line:%d %d\n", __FILE__, __DATE__, __TIME__, __LINE__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//void print(int x,char y)
//{
//	printf("the value of %c is %d\n",y,x);
//
//}
//#define PRINT(X) printf("the value of "#X" is %d\n",X);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);//printf("the value of""a""is %d\n",a);			#X---->"X"
//	PRINT(b);
//	/*print(a,'a');
//	print(b,'b');*/
//	return 0;
//}

//
//#define CLASS(X,Y) X##Y
//int main()
//{
//	int Class66 = 2022;
//	printf("%d\n", Class66);
//	printf("%d\n", CLASS(Class, 66));//printf("%d\n",Class##66);---->printf("%d\n",Class66);
//	return 0;
//}

//宏可以传类型
//#define SIZEOF(type) sizeof(type)
//int main()
//{
//	printf("%d\n", SIZEOF(int));
//
//	return 0;
//}


//#define MALLOC(N,TYPE) (TYPE*)malloc(N*sizeof(TYPE))
//int main()
//{
//	int* ret = MALLOC(10, int);
//
//	return 0;
//}

int	main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
		if(1)
		printf("%d ",arr[i]);
	}


	return 0;
}