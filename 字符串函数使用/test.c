#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

////电脑关机小妙招
//#include<stdlib.h>
//#include<string.h>
//int main()
//{	
//	char arr[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("你的电脑将在六十秒内关机，除非输入：“我是猪”\n");
//	scanf("%s", arr);
//	if (strcmp(arr, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("关机取消！");
//	}
//	else
//		goto again;
//
//	return 0;
//}

//求字符串长度

//int my_strlen(char* arr)
//{	
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello";
//	int ret = my_strlen(arr);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//size_t---->转到定义可以查看
//#include<string.h>
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)//strlen函数返回类型是size_t==unsigned int是一个无符号数，无符号数相加减还是无符号数
//		printf("hehe\n");
//	else
//		printf("haha\n");
//
//	return 0;
//}

//不创建临时变量（不能使用计数器 求字符串长度）---->递归的写法

//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//}
//
//int main()
//{
//	char arr[] = {"hello"};
//	int ret = my_strlen(arr);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//模拟实现字符串拷贝函数strcpy

//void my_strcpy(char* str1, char* str2)
//{
//	while (*str2!='\0')
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	*str1 = *str2;
//}

#include<assert.h>//满分代码
char* my_strcpy(char* str1, const char* str2)
{	
	assert(str1 != NULL);
	assert(str2 != NULL);
	char* ret = str1;
	while (*str1++ = *str2++)
	{
		;
	}
	//返回目的地空间的起始地址
	return ret;
}

//void my_strcpy(char* str1, char* str2)
//{
//	int len = strlen(str2);
//	int i = 0;
//	for (i = 0; i < len+1; i++)
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//
//
//	return 0;
//}

//#include<assert.h>
//char* my_strcat(char* str1,const char* str2)
//{	
//	assert(str1 && str2);
//	char* ret = str1;
//	//1、找到目的地字符串'\0'
//	while (*str1 != '\0')
//	{
//		str1++;
//	}
//	//2、追加
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "ghijk";
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//
//模拟实现strcmp函数

//#include<assert.h>
//int my_strcmp(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{	
//		if (*str2 == '\0')
//			return 0;
//
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//
//
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcgh";
//	int ret = my_strcmp(p1, p2);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "hello\0xxxxxx";
//	char arr2[] = "fire";
//	strncat(arr1, arr2, 3);//追加完后会自己补 \0
//	printf("%s", arr1);
//
//	return 0;
//}


//strstr()--->查找子串
#include<string.h>
int main()
{
	char* p1 = "abcdefgh";
	char* p2 = "def";
	char* ret = strstr(p1, p2);//在p1里面查找p2			找不到就返回空指针，找到返回p2首元素在p1中的地址…………
	if (ret == NULL)
	{
		printf("子串不存在\n");
	}
	else
	{
		printf("%s", ret);
	}

	return 0;
}