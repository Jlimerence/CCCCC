#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

////���Թػ�С����
//#include<stdlib.h>
//#include<string.h>
//int main()
//{	
//	char arr[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("��ĵ��Խ�����ʮ���ڹػ����������룺��������\n");
//	scanf("%s", arr);
//	if (strcmp(arr, "������") == 0)
//	{
//		system("shutdown -a");
//		printf("�ػ�ȡ����");
//	}
//	else
//		goto again;
//
//	return 0;
//}

//���ַ�������

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

//size_t---->ת��������Բ鿴
//#include<string.h>
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)//strlen��������������size_t==unsigned int��һ���޷��������޷�������Ӽ������޷�����
//		printf("hehe\n");
//	else
//		printf("haha\n");
//
//	return 0;
//}

//��������ʱ����������ʹ�ü����� ���ַ������ȣ�---->�ݹ��д��

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

//ģ��ʵ���ַ�����������strcpy

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

#include<assert.h>//���ִ���
char* my_strcpy(char* str1, const char* str2)
{	
	assert(str1 != NULL);
	assert(str2 != NULL);
	char* ret = str1;
	while (*str1++ = *str2++)
	{
		;
	}
	//����Ŀ�ĵؿռ����ʼ��ַ
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
//	//1���ҵ�Ŀ�ĵ��ַ���'\0'
//	while (*str1 != '\0')
//	{
//		str1++;
//	}
//	//2��׷��
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
//ģ��ʵ��strcmp����

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
//	strncat(arr1, arr2, 3);//׷�������Լ��� \0
//	printf("%s", arr1);
//
//	return 0;
//}


//strstr()--->�����Ӵ�
//#include<string.h>
//int main()
//{
//	char* p1 = "abcdefgh";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);//��p1�������p2			�Ҳ����ͷ��ؿ�ָ�룬�ҵ�����p2��Ԫ����p1�еĵ�ַ��������
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s", ret);
//	}
//
//	return 0;
//}


//�Լ����һ��strstr�������Ӵ�������

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
//		p1=cur;//ĸ���ӵ�һ�������ڶ���������������ʼ�ң�ÿ�����һ��Ԫ����
//		p2 = s2;//���ҵ��Ӵ�ÿ�δӵ�һ���ַ���ʼ��
//		while ((*p1 != '\0') && (*p2 != '\0') && (*p1 == *p2))
//		{
//			p1++;
//			p2++;
//		}
//
//		if (*p1 == '\0')
//		{
//			return NULL;//�Ҳ����Ӵ�
//		}
//
//		if (*p2 == '\0')
//		{
//			//�ҵ��Ӵ�
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ����Ӵ�
//
//
//}
//int main()
//{
//	char arr1[] = "abbcdef";																		
//	char arr2[] = "bcd";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//		printf("�Ҳ����Ӵ�\n");
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
//	strcpy(buff, arr);//����һ��
//
//	char* ret = NULL;
//	for (ret = strtok(buff, p); ret != '\0'; ret = strtok(NULL, p))//strtok��������Ҳ����ͻ᷵�ؿ�ָ��
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
//{	//������ ������Ϣ							��ͬ�Ĵ������Ӧ��ͬ�Ĵ�����Ϣ			strerror�������ǽ������뷭��ɴ�����Ϣ
	//0----  No error
	//1----  Operation not permitted
	//2----  No such file or directory
	//3----  No such process
	
	//char* str = strerror(3);
	//errno��һ��ȫ�ֵĴ�����ı���
	//��C���ԵĿ⺯����ִ�й����з����˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����븳ֵ��errno��----->��Ҫ��ͷ�ļ�
	//char* str = strerror(errno);
	//printf("%s\n", str);
	
	//��ʵʹ�ó���
	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)//�ļ���ʧ��
//
//		printf("%s\n", strerror(errno));
//	
//	else
//
//		printf("open file success\n");
//
//	return 0;
//}

	//�ַ����ຯ��
//#include<ctype.h>
//int main()
//{	
//	//�ַ����ຯ��------>����Ϊ�ַ��ſ���
//	char a = '3';
//	int ret = isdigit(a);
//	printf("%d", ret);
//
//	return 0;
//}

//�ַ���Сдת��
//����һ
//{
//	char a = 'b';
//	char b = a + 32;
//	printf("%c\n", b);
//
//
//
//	return 0;
//}

//������
int main()
{
	char p = 'a';
	toupper(p);
	getchar(p);

	return 0;
}