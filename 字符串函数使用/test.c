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
//#include<string.h>
//int main()
//{
//	char* p1 = "abcdefgh";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);//在p1里面查找p2			找不到就返回空指针，找到返回p2首元素在p1中的地址…………
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s", ret);
//	}
//
//	return 0;
//}


//自己设计一个strstr（查找子串）函数

//#include<assert.h>
//char* my_strstr(char* s1, char* s2)
//{
//	assert(s1 && s2);
//	char* p1 = s1; 
//	char* p2 = s2;
//	char* cur = s1;
//	if (*p2 == '\0')
//		return p1;
//	while (*cur)
//	{	
//		p1=cur;//母串从第一个……第二个……第三个开始找，每次向后一个元素找
//		p2 = s2;//被找的子串每次从第一个字符开始找
//		while ((*p1 != '\0') && (*p2 != '\0') && (*p1 == *p2))
//		{
//			p1++;
//			p2++;
//		}
//
//		if (*p1 == '\0')
//		{
//			return NULL;//找不到子串
//		}
//
//		if (*p2 == '\0')
//		{
//			//找到子串
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;//找不到子串
//
//
//}
//int main()
//{
//	char arr1[] = "abbcdef";																		
//	char arr2[] = "bcd";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//		printf("找不到子串\n");
//	else
//		printf("%s", ret);
//
//	return 0;
//}


//strtok
//#include<string.h>
//int main()
//{
//	char arr[] = "zhangsan@gmail.com";
//	char* p = "@.";
//	char* buff[1000] = { 0 };
//	strcpy(buff, arr);//拷贝一份
//
//	char* ret = NULL;
//	for (ret = strtok(buff, p); ret != '\0'; ret = strtok(NULL, p))//strtok函数如果找不到就会返回空指针
//	{
//		printf("%s\n", ret);
//	}


	/*char* ret = strtok(buff, p);
	printf("%s\n", ret);

	 ret = strtok(NULL, p);
	printf("%s\n", ret);

	 ret = strtok(NULL, p);
	printf("%s\n", ret);*/

//	return 0;
//}

//#include<errno.h>
//#include<string.h>
//int main()
//{	//错误码 错误信息							不同的错误码对应不同的错误信息			strerror函数就是将错误码翻译成错误信息
	//0----  No error
	//1----  Operation not permitted
	//2----  No such file or directory
	//3----  No such process
	
	//char* str = strerror(3);
	//errno是一个全局的错误码的变量
	//当C语言的库函数在执行过程中发生了错误，就会把对应的错误码赋值到errno中----->需要引头文件
	//char* str = strerror(errno);
	//printf("%s\n", str);
	
	//真实使用场景
	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)//文件打开失败
//
//		printf("%s\n", strerror(errno));
//	
//	else
//
//		printf("open file success\n");
//
//	return 0;
//}

	//字符分类函数
//#include<ctype.h>
//int main()
//{	
//	//字符分类函数------>定义为字符才可以
//	char a = '3';
//	int ret = isdigit(a);
//	printf("%d", ret);
//
//	return 0;
//}

//字符大小写转换
//方法一
//{
//	char a = 'b';
//	char b = a + 32;
//	printf("%c\n", b);
//
//
//
//	return 0;
//}

//方法二
//int main()
//{
//	/*char ph = toupper('a');
//	putchar(ph);*/
//
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//			arr[i] = tolower(arr[i]);
//		i++;
//	}
//	printf("%s\n", arr);
//
//	return 0;
//}


//内存操作函数****************************************************************************************************************************
//memcpy

//struct stu
//{
//	char name[20];
//	int age;
//};
//void* my_memcpy(void* dest, const void* source, size_t num)
//{
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)source;
//		++(char*)dest;
//		++(char*)source;
//	}

	/*int i = 0;
	for (i = 0; i < num; i++)
	{
		*(char*)dest = *(char*)source;
		++(char*)dest;
		++(char*)source;
	}*/

	/*return ret;*/

//}

//C语言标准
//memcpy：只要处理不重叠的内存拷贝就可以
//memmove：处理重叠内存的拷贝



//void* my_memmove(void* dest,const void* src, size_t num)
//{	
//	void* ret = dest;
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else 
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//
//
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	//my_memcpy(arr + 2, arr, sizeof(arr) / 2);
//	//memcpy(arr + 2, arr, sizeof(arr) / 2);//在vs编译器下memcpy和memmove代码是一样的
//	//memmove(arr + 2, arr, sizeof(arr) / 2);//处理内存重叠的情况
//
//	my_memmove(arr + 2, arr, sizeof(arr) / 2);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	//memcpy(arr2, arr1, sizeof(arr1));
//	struct stu arr3[] = { {"zhangsan",20},{"lisi",30},{"wangwu",50} };
//	struct stu arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//
//	return 0;
//}


//memset--->内存设置函数
int main()
{
	int arr[10] = { 0 };

	//01 01 01 01   01 01 01 01   01 01 00 00   00 00 00...
	 memset(arr, 1, 10);//10---->表示十个字节
	

	return 0;
}

