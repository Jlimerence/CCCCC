#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	//打开文件
//	FILE* p = fopen("text.txt", "w");
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	//写入字符
//	fputc('g', p);
//	fputc('o', p);
//	fputc('o', p);
//	fputs('d', p);
//
//	//关闭文件
//	fclose(p);
//	p = NULL;
//
//	return 0;
//}


//从键盘输入--输出到屏幕上。
//键盘和屏幕都是外部设备

//键盘-标准输入设备-stdin
//屏幕-标准输出设备-stdout
//是一个程序默认打开的两个流设备

//int main()
//{
//	int ch = fgetc(stdin);	//Read a character from a stream 
//	fputc(ch,stdout);		//Writes a character to a stream 
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	int ch = fgetc(pf);//从输入流中读取一个字符，返回ASCLL值
//	printf("%c", ch);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{	
//	char* ps = "帘卷黄花";
//	FILE* pf = fopen("text.txt", "w");
//	fputs(ps, pf);
//
//	return 0;
//}

//不管是输入还是输出都是以流为对象的

//struct S
//{
//	int a;
//	float b;
//	char name[20];
//};
//
//
//
//int main()
//{	
//	struct S s = { 12,3.14f,"zhangsan" };
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	//fprintf(pf, "hhhhhhh");
//	//printf是输出到标准输出流
//	//fprintf是输出到自己定义的流
//	fprintf(pf, "%d %f %s", s.a, s.b, s.name);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//复习基本函数功能

//typedef struct S
//{
//	int a;
//	char b;
//	char arr[20];
//}S;
//int main()
//{	
//	//打开文件
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//操作文件
//	
//
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//struct S
//{
//	int age;
//	double score;
//	char name[20];
//};
//int main()
//{
//	//struct S s = { 21,89.8,"张三" };
//	struct S tmp = { 0 };
//	FILE* pf = fopen("text.txt", "rb");
//	if (pf == NULL)
//		return 0;
//	else
//		fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%d %lf %s", tmp.age, tmp.score, tmp.name);
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
//		return 0;
//	}
//
//	int ch = fgetc(pf);
//	printf("%d", ch);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	float b = 3.14f;
//	char arr[10] = "hello";
//
//	//打开文件
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//操作文件
//
//	//将a,b,arr中的数据write（写入）到pf流中去
//	fprintf(pf, "%d %f %s\n", a, b, arr);
//	//将常量字符串写入到pf流中去
//	fprintf(pf, "modern");
//
//	//用fprintf实现printf---->将数据写入到标准输出流中（屏幕）
//	fprintf(stdout, "%d %f %s\n", a, b, arr);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	int a;
//	float b;
//	char arr[10];
//
//	//打开文件
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//操作文件
//	//从pf流中读取数据并且存放到a,b,arr中去
//	fscanf(pf, "%d %f %s", &a, &b, arr);
//	printf("a=%d,b=%f,arr=%s\n", a, b, arr);
//	//用fprintf打印到屏幕上
//	fprintf(stdout, "a=%d,b=%f,arr=%s\n", a, b, arr);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{	
//	int a=0;
//	fscanf(stdin, "%d", &a);
//	fprintf(stdout, "%d", a);
//
//
//
//	return 0;
//}

int main()
{	
	char arr[100];
	FILE* pf =fopen ("hhh.txt", "r");
	fscanf(pf, "%s", arr);
	printf("%s", arr);
	fclose(pf);
	pf = NULL;


	return 0;
}