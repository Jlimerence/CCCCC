#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr1[20] = {"abc\0xxxxxxx"};
//	char arr2[] = "hello";
//	strcat(arr1, arr2);
//	printf(arr1);
//
//	return 0;
//}


//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	//strcat��\0λ�ÿ�ʼ׷�ӣ���׷���������ݰ���source��\0
//	//�������source��βû��\0��׷�ӾͲ�֪��ʲôʱ�����������bug
//	strcat(arr1, arr2);
//	printf("%s\n",arr1);
//
//	return 0;
//}

//int main()
//{
//	char arr1[20] = { "sdfdsfdsf" };
//	char arr2[] = "hello";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}



//#include<string.h>
//#include<stdio.h>
//#define N 80
//int fun(char* s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		if (*s != ' ')
//			count++;
//
//		s++;
//	}
//	return count;
//
//}
//void main()
//{
//	
//	char line[N];
//	int num = 0;
//	printf("Enter a string:\n ");
//	gets(line);
//	num = fun(line);
//	printf("The number of word is:%d\n\n ", num);
//	/******************************/
//	
//	/*****************************/
//}

int main()
{
	printf("%d", sizeof(int*));
	return 0;
}