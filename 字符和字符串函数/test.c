#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//ģ��ʵ��strlen
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


//ģ��ʵ��strcpy
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

//ģ��ʵ��strcat
//char* my_strcat(char* p1,const char* p2)
//{	
//	char* s = p1;
//	while (*p1 != '\0')
//	{
//		p1++;
//	}
//	//��ʱp1�Ѿ�ָ��\0
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

//ģ��ʵ��strcmp

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
//	//����ASCLLֵ
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

//ģ��ʵ��strncpy
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
//	//����������Ŀ�ĵ����\0,���ǿ��Կ���\0
//	char* ret=my_strncpy(arr1, arr2, 6);
//	printf(arr1);
//
//	return 0;
//}


//ģ��ʵ��strncat

//char* my_strncat(char* p1, char* p2, int n)
//{	
//	char* s1 = p1;
//	while (*p1 != '\0')
//	{
//		p1++;
//	}
//	//��ʱp1ָ��\0
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
//	//׷�ӵ�ʱ��ὫĿ�ĵص�\0���ǵ���Ȼ��׷����ɺ���\0
//	char* ret=my_strncat(arr1, arr2, sizeof(arr2));
//	printf(ret);
//
//	return 0;
//}

//ģ��ʵ��strncmp

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
//	//�������ٸ��ֽڣ����Լ����������memcpy���Կ���������������
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