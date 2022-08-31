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
//	//strcat从\0位置开始追加，会追加所有内容包含source的\0
//	//所以如果source结尾没有\0，追加就不知道什么时候结束，会有bug
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