#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int main()
//{
//	FILE* pf =fopen ("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("reason");
//		return 0;
//	}
//	//操作文件
//	char arr[] = "hellod";
//
//	//首地址 一次写如一个数组大小  写入一次  写入到pf流中
//	//int ret=fwrite(arr, sizeof(arr), 1, pf);
//	char arr2[10] = { 0 };
//	int red=fread(arr2, sizeof(char), 20, pf);
//	printf("%s\n", arr2);
//	printf("%d\n", red);
//	//printf("ret=%d\n", ret);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		ferror("reason");
//		return 0;
//	}
//	//fprintf(pf, "whatfuck");
//	fscanf(pf,"%s");
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}

/* fscanf example */
//int main()
//{
//	char str[80];
//	float f;
//	FILE* pFile;
//
//	pFile = fopen("myfile.txt", "w+");
//	fprintf(pFile, "%f %s", 3.1416, "PI");
//	rewind(pFile);
//	fscanf(pFile, "%f", &f);
//	fscanf(pFile, "%s", str);
//	fclose(pFile);
//	printf("I have read: %f and %s \n", f, str);
//	return 0;
//}


//struct S
//{
//	int a;
//	float b;
//	char c[10] ;
//};
//int main()
//{
//	struct S s = { 111,3.14f,"hello"};
//	FILE* pf = fopen ("angry.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//操作文件
//
//	//将数据write到pf流中
//	//fprintf(pf, "%d %f %s", s.a, s.b, s.c);
//
//	//fscanf从自己给定的流中读取数据，存放到结构体或者局部变量中去，    此时结构体内部的成员内容已经发生更改！！！
//	//scanf从标准输入流（键盘）中读取数据（需要键盘输入），存放到缓冲区中
//	fscanf(pf, "%d %f %s", &(s.a), &(s.b), s.c);
//	//将数据write到标准输出流中，显示（输出）到屏幕上
//	fprintf(stdout, "%d %f %s", s.a, s.b, s.c);
//	
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("qqq.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	char arr[20] = { 0 };
//	fseek(pf, 2, SEEK_SET);
//	int ret=ftell(pf);
//	printf("%d\n", ret);
//	fgets(arr,sizeof(arr), pf);
//	printf("%s\n", arr);
//	
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#define ADD(X,Y) X+Y
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int ret = ADD(a, b);
//	printf("%d", ret);
//
//	return 0;
//}