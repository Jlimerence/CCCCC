#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//喝汽水，1瓶汽水1元，2个空瓶可以换一个汽水，给20元，可以喝多少汽水（编程实现）
//int main()
//{
//	int total = 0;//统计喝掉多少
//	int empty = 0;//空瓶数
//	int money = 20;
//	//买回来的汽水喝掉
//	total = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d\n", total);
//	return 0;
//}

//模拟实现strlen函数
//int my_strlen(char* p)
//{	
//	int count = 0;
//	while (*p != '\0')
//	{	
//		p++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = { "hello" };
//	int ret = my_strlen(arr);
//	printf("ret=%d\n", ret);
//	return 0;
//}


//调整数组，使奇数全部位于偶数前面

void change_arr(int* p)
{

}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	change_arr(arr);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}