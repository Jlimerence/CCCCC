#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//模拟实现strlen
//int my_strlen(char* p)
//{	
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hello";
//	//printf("%d\n", strlen(arr));
//	int ret = my_strlen(arr);
//	printf("ret=%d\n", ret);
//
//	return 0;
//}


//模拟实现strcpy
//char* my_strcpy(char* p1,const char* p2)
//{	
//	char* s1 = p1;
//	while (*p2!='\0')
//	{
//		*p1 = *p2;
//		p1++;
//		p2++;
//	}
//	return s1;
//}

//char* my_strcpy(char* p1, const char* p2)
//{
//	char* s1 = p1;
//	while (*p2 != '\0')
//	{
//		*p1++ = *p2++;
//	}
//	return s1;
//}

//char* my_strcpy(char* p1, const char* p2)
//{
//	char* s1 = p1;
//	while (*p1++ = *p2++)
//	{
//		;
//	}
//	return s1;
//}
//
//int main()
//{
//	char arr1[10] = "";
//	char arr2[] = "abcd";
//	char* ret=my_strcpy(arr1, arr2);
//	printf("%s\n", ret);;
//
//	return 0;
//}

//模拟实现strcat
//char* my_strcat(char* p1,const char* p2)
//{	
//	char* s = p1;
//	while (*p1 != '\0')
//	{
//		p1++;
//	}
//	//此时p1已经指向\0
//	while (*p2 != '\0')
//	{
//		*p1 = *p2;
//		p1++;
//		p2++;
//	}
//	*p1 = *p2;
//
//	return s;
//}
//
//int main()
//{
//	char arr1[20] = "abc";
//	char arr2[] = "def";
//	char* ret = my_strcat(arr1, arr2);
//	printf(ret);
//
//	return 0;
//}

//模拟实现strcmp

//#include<assert.h>
//int my_strcmp(char* p1,char* p2)
//{
//	assert(p1 && p2);
//	while (*p1 == *p2)
//	{
//		if (*p1 == '\0')
//			return 0;
//
//		p1++;
//		p2++;
//	}
//	//返回ASCLL值
//	return *p1 - *p2;
//
//}
//
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "fire";
//	int ret = my_strcmp(arr1, arr2);
//	printf("ret=%d\n", ret);
//
//	return 0;
//}

//模拟实现strncpy
//char* my_strncpy(char* p1, char* p2, int n)
//{	
//	char* s1 = p1;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		*p1++ = *p2++;
//	}
//	
//	return s1;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxx";
//	char arr2[] = "world";
//	//不会主动在目的地添加\0,但是可以拷贝\0
//	char* ret=my_strncpy(arr1, arr2, 6);
//	printf(arr1);
//
//	return 0;
//}


//模拟实现strncat

//char* my_strncat(char* p1, char* p2, int n)
//{	
//	char* s1 = p1;
//	while (*p1 != '\0')
//	{
//		p1++;
//	}
//	//此时p1指向\0
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		*p1++ = *p2++;
//	}
//	return s1;
//
//}
//
//int main()
//{
//	char arr1[20] = "hello\0xxxxxxxx";
//	char arr2[] = "world";
//	//追加的时候会将目的地的\0覆盖掉，然后追加完成后补上\0
//	char* ret=my_strncat(arr1, arr2, sizeof(arr2));
//	printf(ret);
//
//	return 0;
//}

//模拟实现strncmp

//int my_strncmp(char* p1, char* p2, int n)
//{
//	while (--n&&*p1 == *p2)
//	{
//		p1++;
//		p2++;
//	}
//	return *p1 - *p2;
//
//}
//
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "heabcd";
//	int ret = my_strncmp(arr1, arr2, 2);
//	printf("ret=%d\n", ret);
//
//	return 0;
//}

//strstr
//#include<errno.h>
//int main()
//{
//	char arr1[] = "helloworld";
//	char arr2[] = "world";
//	char* ret = strstr(arr1, arr2);
//	if (ret == NULL)
//		printf("%s\n", strerror(errno));
//	printf("%s\n", ret);
//
//
//	return 0;
//}

//memcpy
//int main()
//{
//	int arr1[20] = { 0 };
//	int arr2[] = { 0,1,2,3,4,5,6,7,8,9 };
//	//拷贝多少个字节，由自己决定，因此memcpy可以拷贝任意数据类型
//	memcpy(arr1, arr2, sizeof(arr2));
//
//	return 0;
//}


//memcmp
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,3,4,5,6,7 };
//	int ret = memcmp(arr1, arr2, sizeof(int)*2);
//	printf("ret=%d\n", ret);
//
//	return 0;
//}

//memmove
//int main()
//{
//	int arr1[20] = { 1,2,3,4,5,6 };
//	int arr2[] = { 7,8,9,10 };
//	memmove(arr1+6, arr2, sizeof(int) * 4);
//	
//	return 0;
//}