#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һ����ˮ����20Ԫ�����Ժȶ�����ˮ�����ʵ�֣�
//int main()
//{
//	int total = 0;//ͳ�ƺȵ�����
//	int empty = 0;//��ƿ��
//	int money = 20;
//	//���������ˮ�ȵ�
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

//ģ��ʵ��strlen����
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


//�������飬ʹ����ȫ��λ��ż��ǰ��

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