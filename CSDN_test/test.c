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

int main()
{
	char arr1[20] = { "sdfdsfdsf" };
	char arr2[] = "hello";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);

	return 0;
}