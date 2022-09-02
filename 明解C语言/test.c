#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	printf("hello\a\n");//  \a----->alert--响铃
//	return 0;
//}

//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	gets(arr);//读取字符串直到换行符结束，但换行符会被丢弃，然后在末尾添加'\0'字符
//	printf("%s\n", arr);
//
//	return 0;
//}


//int main()
//{	
//	//puts实参只能有一个---->puts("abc")基本等价于printf("abc\n")
//	puts("请输入：");
//	printf("haha\n");
//	printf("hehe\n");
//
//	return 0;
//}

int main()
{
	int a = 1, b = 2;
	// % 具有转换说明的功能--->不适用转换功能，只想输出%的时候，必须写成%%
	//puts函数不具有转换说明功能
	puts("b%a");
	printf("b%%a=%d\n", b % a);

	return 0;
}