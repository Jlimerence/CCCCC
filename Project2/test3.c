#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��1---10000��ˮ�ɻ���
//153��һ��ˮ�ɻ�����153����λ����=1^3+5^3+3^3
//#include<math.h>
//int main()
//{
//	int n = 0;
//	int count = 0;
//	for (n = 100; n < 1000; n++)
//	{	
//		int t = n % 10;//��λ
//		int j = n / 10;
//		int f = j % 10;//ʮλ
//		int g = j / 10;//��λ 
//		int h = pow(t, 3) + pow(f, 3) + pow(g, 3);
//		if (h == n)
//		{
//			printf("%d��ˮ�ɻ���\n",n);
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//
//	return 0;
//}



//int main()
//{
//	const int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d", a);
//
//	return 0;
//}

//���һ���ַ�����������
//�Ż�֮���
//#include<assert.h>
//void my_strcpy(char* pa, const char* pb)//const���η���*ǰ�棬*pb��ֵ���ܹ����ı�
//{
//	
//	assert(pa != NULL);//���ԣ��������������ʲô����ִ�У�����д�����ᱨ��
//	assert(pb != NULL);
//		while (*pa++ = *pb++)//'\0'��ASCLL��ֵΪ0
//		{
//			;
//		}
//}


//void my_strcpy(char* pa, char* pb)
//{	
//	if (pa != NULL && pb != NULL)//������˴��󴫲δ��˸���ָ�룬�������������ã�������̫���������ʹ�ö��ԣ�assert��
//	{
//		while (*pb != '\0')//'\0'��ASCLL��ֵΪ0
//		{
//			*pa = *pb;
//			pb++;
//			pa++;
//		}
//		*pa = *pb;//��ʱ*pb='\0'
//	}
//
//}

//int main()
//{
//	char arr1[] = "****************";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}



//���һ���ַ�����������
//void my_strcpy(char arr1[], char arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr1[i] = arr2[i];
//
//	}
//
//}


//void my_strcpy(char* p1, char* p2)
//{
//	while (*p2 != '\0')
//	{
//		*p1 = *p2;
//		p2++;
//		p1++;
//	}
//	*p1 = *p2;
//
// }
//int main()
//{
//	char arr1[] = {"################"};
//	char arr2[] = {"fire"};
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	my_strcpy(arr1, arr2, sz);
//	printf("%s", arr1);
//
//	return 0;
//}



//�ֲ�������ջ��������δ洢�ģ�����������������������������������������������������������������������������
//#include<stdlib.h>
//int main()
//{	
//	char why = 0;
//	int i = 0;
//	int arr[10] = { 0 };
//	int arr2[10] = { 0 };
//	printf("     &why=%p \n", &why);
//	printf("       &i=%p \n", &i);
//	printf("  &arr[0]=%p \n", arr);
//	printf(" &arr2[0]=%p \n", arr2);
//	
//
//	//system("pause");
//	/*for (i = 0; i <= 12; i++)
//	{	
//		printf("hh\n");
//		arr[i] = 0;
//	}*/
//
//	return 0;
//}



//���ַ�������
//int my_strlen(char* p)
//{	
//	int count = 0;
//	while (*p != '\0')
//	{	
//		count++;
//		p = p + 1;
//	}
//	return	count;
//}
//int main()
//{	
//	char arr[] = { "phone" };
//	int set = my_strlen(arr);
//	printf("set=%d", set);
//	return 0;
//}


//��һ��������������ݣ�����
//void reverse(char arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 2;
//	while (left < right)
//	{
//		int temp = 0;
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = { "abcdef" };//fedcba
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr,sz);
//	printf("%s", arr);
//	/*int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		printf("%c ", arr[i]);
//	}*/
//
//	return 0;
//}

//void reverse(char arr[], int sz)
//{
//	int left = 0, right = sz - 2;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//
//	}
//
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);
//	printf("%s", arr);
//	return 0;
//}

//��ͨ����׳�
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int temp = 0;
//	int sum = 1;
//	for (i = 1; i <= n; i++)
//	{	
//		temp += i;
//		sum *= i;
//
//	}
//	printf("%d  %d",temp, sum);
//	return 0;
//}
//�ݹ���׳�
//int Jie(int n)
//{
//	if (n >= 2)
//		return n * Jie(n - 1);
//	else
//		return 1;
//
//}
//
//int main()
//{
//	int i = 0;
//	int set = 0;
//	scanf("%d", &i);
//	set=Jie(i);
//	printf("%d", set);
//	return 0;
//}
//��һ������˳���ӡ����   1234
//void Print(int n)
//{
//	if (n > 9)
//		Print(n / 10);
//	printf("%d ", n % 10);
//
//}
//
//void  Print(int n)
//{
//	while (n % 10 != 0)
//	{
//		printf("%d ", n % 10);
//		n = n / 10;
//	}
//	
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	Print(input);
//
//	return 0;
//}
//�˷��ھ���
//int main()
//{	
//	int i = 0, j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//%-2d:���������ռ���Ϊ��λ��������ÿո��롣���ű�ʾ����룬û�з��ž����Ҷ���
//		}
//		printf("\n");
//	}
//
//	
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//
//	return 0;
//}


//ͳ��1--100������7�ĸ���
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1;  i <= 100; i++)
//	{
//		if (i % 10 == 7)
//			count++;
//		if (i / 10 == 7)
//			count++;
//	}
//	printf("count=%d", count);
//	return 0;
//}


// ����������˼����*****************************************************************************************************************
//int count_one(int n)
//{	
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//n&n-1Ч����ʹ��n�����ұߵ�1ÿ�μ���һ������������ִ���˶��ٴΣ����ж��ٸ�1
//		count++;
//	}
//	return count;
//
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int count = count_one(input);
//	printf("count=%d\n", count);
//	return 0;
//}
//������
//11111111111111111111111111111111
//00000000000000000000000000000001								  
//int count_one(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int count = count_one(input);
//	printf("count=%d\n", count);
//
//	return 0;
//}
//ͳ�ƶ�������1�ĸ���
//int count_one(unsigned int n)//���о����ԣ�����Ǹ������Ļ����bug�����Խ�nǿ��ת��Ϊ�޷��������磨-1������ʱ1111111111�������λ�����Ƿ���λ�����Խ��м���
//{	
//	int count = 0;
//	while (n)
//	{	
//		if (n % 2 == 1)
//			count++;
//		n = n / 2;
//	}
//	return count;
//
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int count = count_one(input);
//	printf("count=%d\n",count);
//
//	return 0;
//}
 
//ͳ�ƶ�������1�ĸ���
//int count(unsigned int n)//�����ת��Ϊ�޷������Ļ���������������Ǹ�������û��������
//{	
//	int i = 0;
//	int count = 0;
//	for (i=0;i<32;i++)
//	{
//		if (n % 2 == 1)
//			count++;
//		n = n / 2;
//	}
//	return count;
//}
 
 
//int count(int n)
//{	
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (n & 1 == 1)
//			count++;
//		n=n >> 1;
//	}
//	return count;
//}
//int main()
//{
//	int a = -1;						//00000000000000000000000000001101
//	int ret = count(a);		        //00000000000000000000000000000001	
//	printf("ret=%d\n", ret);
//	return 0;
//}






//�����������ݣ�Ч�ʱȽϸ�
//void change(int arr1[], int arr2[])
//{
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//
//}
//int main()
//{
//	int arr1[] = {1,2,3,4};
//	int arr2[] = {5,6,7,8};
//	change(arr1, arr2);
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ",arr2[i]);
//	}
//}


//int	main()
//{
//	int arr1[] = { 1,3,5,7 };
//	int arr2[] = { 2,4,6,8 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int temp = 0;
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//		printf("arr1[%d]=%d     arr2[%d]=%d  \n ",i, arr1[i],i, arr2[i]);
//	}
//	return 0;
//}


//������������
// �Լ�д��Ч�ʽ�Ϊ���£�Ҫѧ��Ľ���
//void Change_arr(int arr1[], int arr2[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int temp1=0,temp2 = 0;
//		temp1 = arr1[left];
//		arr1[left] = arr2[left];
//		arr2[left] = temp1;
//		if (left != right)//���һ�ε�ʱ��left=right�����Ӹ��ж�����ͬһ��ֵ�ᱻִ�����Σ��൱��ûִ�У������bug
//		{
//			temp2 = arr1[right];
//			arr1[right] = arr2[right];
//			arr2[right] = temp2;
//			
//		}
//		left++;
//		right--;
//	}
//}
//void Print(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("arr1[%d]=%d    arr2[%d]=%d  \n",i, arr1[i],i, arr2[i]);
//	}
//
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[] = { 10,11,12,13,14,15,16,17,18 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	Change_arr(arr1, arr2, sz);
//	Print(arr1, arr2, sz);
//
//	return 0;
//}


//ð������
//void Sort(int arr[], int sz)
//{
//	int i = 0, j = 0;
//	int temp = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 0;
//		for (j = 0; j < sz - 1-i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				
//				temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,45,5,6,57,8,59,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}




//int main()
//{
//	int arr[5] = { 0 };
//	int* p;
//	int i = 0;
//	for (p = arr; p < &arr[5]; p++)//����ָ������Ԫ�ص�ָ���ָ������Ԫ�����һ��λ�ú�����Ǹ��ڴ�λ�ý��бȽϣ�������ǰ��Ĳ�����
//	{
//		*p = 1;
//	}
//
//	return 0;
//}



//ģ��ʵ��һ��strlen����
//int my_strlen(char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		p++;
//		count++;
//	}
//	return	count;
//}
//int my_strlen(char* p)
//{	
//	char* start = p;
//	char* end = p;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;//ָ��Ӽ�ָ������м�Ԫ�ظ���
//}
//int	main()
//{	
//	int len = 0;
//	char arr[] = "abcdefg";
//	len = my_strlen(arr);
//	printf("%d", len);
//
//	return 0;
//}

//�ڴ����
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;//�����ָ�����͸�Ϊchar* ����ô�����ڴ�ʱֻ�ܲ���һ���ֽڡ�ָ�����;�����ָ����н����ò���ʱ�ܹ��������ڴ��С
//	*pa = 0;
//	//printf("%d ", *pa);
//	//printf("%p", pa);
//	return 0;
//}

//ָ��Ӽ�����
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i;
//		p = p + 1;
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//ָ��+-����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p = p + 1;
//	}
//	return 0;
//}

//ָ��+-ָ��=�м�Ԫ�ظ���
//ֻ����ͬһ��������ʹ�ã������ǿ�֪�������Ŀռ�
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	printf("%d", &arr[9] - &arr[0] );//�м�Ԫ�ظ���
//
//
//	return 0;
//}


////��ѭ���ķ�ʽ��쳲�������
//int Fib(n)
//{
//	int a = 1, b = 1, c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//
//}
//int main()
//{	
//	int set = 0;
//	int input = 0;
//	printf("�����룺");
//	scanf("%d", &input);
//	set=Fib(input);
//	printf("set=%d", set);
//	return 0;
//}


//�õݹ���쳲�������
//int Fib(n)
//{
//	if (n <= 2)
//		return 1;
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//
//}
//
//int main()
//{	
//	int input = 0;
//	int set = 0;
//	printf("�����룺");
//	scanf("%d", &input);
//	set = Fib(input);
//	printf("��%d��쳲���������%d",input, set);
//	//1 1 2 3 5 8 13 21 34 55
//	return 0;
//}


//�ṹ��
//struct book
//{
//	int price;
//	char name[20];
//	char author[20];
//
//};
//
//int main()
//{
//	struct book t1 = { 99,"����֮��","������" };
//	struct book* ps = &t1;
//	printf("%d\n", (*ps).price);
//	printf("%d", ps->price);
//	/*printf("%d ", t1.price);
//	printf("%s ", t1.author);
//	printf("%s ", t1.name);*/
//	return 0;
//}


//typedef struct stu
//{
//	int number;
//	char name[20];
//	int grade;
//}stu;
//struct book
//{
//	int price;
//	char author[20];
//	char owner[20];
//	 stu t1;
//};
//
//int main()
//{
//	struct book b1 = { 23,"�ƿ���","Ҳˮ��",{123,"����Դ",10}};
//	printf("%s\n", b1.author);
//	printf("%s\n", b1.owner);
//	printf("%s\n", b1.t1.name);
//
//	return 0;
//}

//��λ������
//int main()
//{	
//	int a = 16;
//	//				a�Ķ����ƣ� 00000000000000000000000000010000
//	//����һλ������߲�����λ��00000000000000000000000000001000
//	int b = a >> 1;
//	printf("b=%d\n", b);//8
//
//	return 0;
//}


//ð������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0,j=0 ;
//	int temp = 0;
//	int flag = 1;//�ٶ���һ��Ҫ�����˳���Ѷ������Ч�ʣ� 
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{	
//	int sz = 0;
//	int i = 0;
//	int arr[] = { 0,1,15,38,4,5,6,7,8,9 };
//	sz = sizeof(arr) / sizeof(arr[0]);//������������Ԫ��
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//
//	return 0;
//}

//arr�ĺ������
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	return 0;
//}


//int main()
//{
//	int arr1[][5] = { {1,2,3,},{4,5,6} };
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d]=%p\n",i,j, &arr1[i][j]);
//		}
//		
//	}
//	return 0;
//}


 
//�õݹ����n��쳲�������
//쳲��������У�1 1 2 3 5 8 13 21 34��ǰ������֮�͵��ں�һ������
//int count = 0;
//int Fib(int m)
//{	
//	if (m == 3)//���Ե�����쳲��������ļ���������ظ���������أ�Ч�ʵ��£�
//		count++;
//	if (m <= 2)
//		return 1;
//	else
//		return Fib(m - 1) + Fib(m - 2);
//
//}
//int main()
//{	
//	int n = 40;
//	int i = 0;
//	i = Fib(n);
//	printf("i=%d\n", i);
//	printf("count=%d", count);
//	return 0;
//}




//�ݹ鷨��׳�
//int Fac(int m)
//{
//	if (m <= 1)
//		return 1;
//	else
//		return m* Fac(m - 1);//m!=m*(m-1)!
//}
//
//
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	printf("������ֵ��");
//	scanf("%d", &i);
//	ret = Fac(i);
//	printf("ret=%d", ret);
//	
//
//	return 0;
//}


//��ͨ����׳�
//int main()
//{	
//	int i = 0;
//	int max = 1;
//	for (i = 1; i <= 5; i++)
//	{
//		max = max * i;
//	}
//	printf("%d", max);
//
//	return 0;
//}

//ģ��ʵ��һ��strlen����
//int my_strlen(char* str)
//{	
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;//��ַ��һָ���һλ���ĵ�ַ
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬������Ԫ�ص��׵�ַ���ַ�a�ĵ�ַ��
//	printf("%d", len);
//
//	return 0;
//}
//
//
//
//
//
//
//


//����ַ��������ƶ����м���
//#include<string.h>
//int main()
//{
//	char arr1[] = "l love you";
//	char arr2[] = "**********";
//	int left = 0;
//	int right = strlen(arr2) - 1;//streln��������������ص�\0
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	return 0;
//}


//�����Լ��
//int main()
//{
//	int a = 24, b = 18;
//	int i = 0;
//	while (i=a % b)
//	{
//		a = b;
//		b = i;
//
//
//	}
//	printf("%d", b);
//
//	return 0;
//}


//дһ���������Խ�������������
//void change_t(int* x, int* y)
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//}
//
//
//int main()
//{
//	int a = 4, b = 9;
//	printf("a=%d,b=%d\n", a, b);
//	change_t(&a, &b);//��ַ����
//	printf("a=%d,b=%d\n", a, b);
//
//	return 0;
//}


//�Ŷӷ�ģ����д��������
//#include"Add.h"//�Լ�д��ͷ�ļ���""����
//int main()
//{
//	int a = 5;
//	int b = 4;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d", sum);
//
//	return 0;
//}


//�ݹ�:�����Լ������Լ�
//int main()
//{	
//	printf("hh\n");
//	main();
//	return 0;
//}




//������С��Ϸ			����������������		��������else������������û�����ŵ���ѭ���˳���
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("*************************\n");
//	printf("***1.play*******0.exit***\n");
//	printf("*************************\n");
//
//}
//void game()
//{	
//	int set = 0;
//	int guess = 0;
//	set=rand()%100+1;
//	while (1)
//	{
//		printf("������֣�");
//		scanf("%d", &guess);
//		if (guess > set)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < set)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���\n");//�м�if�����������ֹһ����һ��Ҫ�������ţ������淶�淶
//			break;
//		}
//	}
//
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//���Ӳ�����
//	while (1)
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input == 1)
//		{
//			game();
//		}
//		else if (input == 0)
//		{
//			printf("�˳���Ϸ��"); break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	return 0;
//}


//�ػ�С����
//#include<string.h>
//#include<stdlib.h>
//int main()
//{	
//	char pig[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("��ĵ��Խ���һ�����ڹػ��������룺����������\n�����룺");
//	scanf("%s", pig);
//	if (strcmp(pig, "������") == 0)
//	{
//		system("shutdown -a");
//		printf("ȡ���ػ���");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}


//������Ƕ�׵���
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 543)));//54331
//
//	return 0;
//}


//������Ƕ�׵���
//void line()
//{
//	printf("hh\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}
//дһ������ʵ��������������Ķ��ֲ���
//int look_for(int arr1[], int k1)//�����arr1��������һ��ָ��
//{
//	int left = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);//��������main�����ڲ����szȻ��ֵ���ݵ�look_for������
//	int right = sz - 1;
//	int mid = 0;
//	while (left <= right)
//	{	
//		mid = (left + right) / 2;
//		if (arr1[mid] > k1)
//		{
//			right = mid - 1;
//		}
//		else if (arr1[mid] < k1)
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;
//	}
//	if (left > right)
//		return -1;
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 6;
//	int ret = look_for (arr, k);//����ʵ�ʴ���ȥ��������arr��Ԫ�صĵ�ַ
//	if (ret == -1)
//	{
//		printf("�Ҳ���Ҫ�ҵ�����");
//	}
//	else
//	{
//		printf("�ҵ����±�Ϊ��%d", ret);
//	}
//	return 0;
//}


//дһ������ʵ��������������Ķ��ֲ���
//int lookfor(int arr[], int sz, int k)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	if (left > right)
//		return 0;
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 57;
//	int ret = lookfor(arr, sz, k);
//	if (ret == 0)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ����±�Ϊ%d\n", ret);
//	}
//
//
//
//	return 0;
//}

//дһ�������ж�һ���Ƿ�Ϊ����

//int runnian(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0)|| (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//
//}
//int main()
//{	
//	int year = 0;
//	printf("��������ݣ�");
//	scanf("%d", &year);
//	if (runnian(year) == 1)
//	{
//		printf("%d��������",year);
//	}
//	else
//	{
//		printf("%d��������", year);
//	}
//
//	
//	return 0;
//}


//дһ�����������ж�һ�����ǲ�������(ֻ�ܱ�1���䱾������)
//int bitch(int m)
//{
//	int j = 0;
//	for (j = 2; j < m; j++)
//	{
//		if (m % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (bitch(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//дһ�����������������ͱ���������	
//void change_t(int* x, int* y)//void��ʾû�з���ֵ
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//}
//
//int main()
//{
//	int a = 9, b = 29;
//	printf("%d %d\n", a, b);
//	 change_t(&a,&b);
//	 printf("%d %d", a, b);
//
//	return 0;
//}
//



//���Թػ�С����
//#include<stdlib.h>
//#include <string.h>
//int main()
//{	
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("��ע����ĵ��Խ�����ʮ���ڹػ����������룺������\n�����룺");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//		goto again;
//	return 0;
//}






//������С��Ϸ
//#include<stdlib.h >
//#include<time.h>
//void menu()
//{
//	printf("############################\n");
//	printf("###1.play########0.exit#####\n");
//	printf("############################\n");
//}
//void game()
//{	
//	int guess = 0;
//	int ret = 0;
//	ret = rand()%100+1;//һ��һ�ٵ������
//	while (1)
//	{
//		printf("������֣�\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else 
//		{
//			printf("�¶���\n");
//			break;
//		} 
//		
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));	
//	do
//	{
//		menu();
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("��Ϸ�˳�\n");
//			break;
//		default:
//			printf("����������������룡\n");
//			break;
//
//		}
//	} while (input);
//	return 0;
//}


 
//����Ļ������˷��ھ���
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d ", i, j, i * j);//%2d����ӡ��λ�����������ÿո���			%-2d�������
//
//		}
//		printf("\n");
//		
//	}
//
//
//	return 0;
//}



//��ʮ�����е����ֵ
//int main()
//{
//	int arr[] = { 1,2,3,4,5,55,7,8,79,10 };
//	int max = 0;//max����������ֵ�����澭���жϾͿ��ԣ�����б�max���ֵ�ͽ��丳ֵ��max����������˼��Ҫ����
//	int i = 0;				//max�����ʼ��Ϊarr[0]����Ϊ���max��ʼ��Ϊ0���п���0�������е�Ԫ�ض�Ҫ�������ʹﲻ���������е����ֵ��Ч����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)//max��ʼ��Ϊarr[0]��i���Դ�1��ʼ
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("���ֵΪ��%d%", max);
//
//	return 0;
//}
//


//����1/1-1/2+1/3+�����������ֿ���ķ�����
//int main()
//{
//	int i = 0;
//	double sum = 0.0, set = 0.0;
//	for (i = 1; i <= 100; i+=2)
//	{
//		sum = sum + (1.0 / i);
//		set = set + (1.0/(i + 1));
//	}
//	printf("%lf ", sum - set);
//	return 0;
//}
//�Գ�����100--200֮�������
//������ֻ�ܱ�1���䱾������
//int main()
//{
//	int i = 0;
//	int j = 2;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//			printf("%d������ ", i);
//	}
//
//	return 0;
//}




//int main()
//{
//	int m = 0, n =0;
//	printf("������ֵ��");
//	scanf("%d%d", &m, &n);
//	int i = 0;
//
//	while (i=m % n)//				
//	{
//		m = n;
//		//i = m % n;
//		n = i;
//
//	}
//	printf("���Լ��Ϊ��%d", n);
//
//	return 0;
//}




//շת������������������Լ��
//int main()
//{
//	int m = 24, n = 18;//��24��18Ϊ��
//	int r = 0;
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d", n);
//	return 0;
//}
//




//��ӡһ��һ��֮���������ı�����������ˣ�������		��д��һ��һ�٣�Ȼ�����жϾͿ���
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		if ((i + 1) % 3 == 0)
//			printf("%d ", i+1);
//	}
//
//	return 0;
//}

//��ӡһ��һ��֮���������ı���,����ķ����ǵ�һ��дʵ����̫����
//int main()
//{
//	int i = 0;
//	int set = 0;
//	for (i = 0; i < 100; i++)
//	{
//		set = 3* (i + 1);
//		if (set <= 100)
//		{
//			printf("%d ", set);
//		}
//		else
//		{
//			break;
//		}
//		
//		
//	}
//
//	return 0;
//}
// 


//������������(�������)
//#include<string.h>
//int	main()
//{
//	int i = 0;
//	char passord[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", passord);
//		if (strcmp(passord, "5201314tjf") == 0)
//		{
//			printf("������ȷ"); break;
//		}
//		else
//		{
//			printf("�������");
//		}
//	}
//	if (i == 3)
//		printf("���Ѿ�û�����ˣ�");
//	return	0;
//}


//���ַ���������Ԫ��
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	printf("������k��ֵ��");
//	scanf("%d", &k);	
//	int left = 0, right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)			 
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ����±�Ϊ%d", mid);//�ҵ���ʱ�������±�����ȵģ�Ҫ�Ӹ�break��Ȼ�������ѭ��
//			break;
//		}		
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�������");
//	}
//
//	return 0;
//}



////��ͨ����������Ԫ��
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	printf("������k��ֵ���в��ң�");
//	scanf("%d", &k);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("good!");
//			break;
//		}
//		
//	}
//	if (i == 10)
//	{
//		printf("wrong");
//	}
//
//	return 0;
//}




////forѭ�������������������������
//#include<string.h>
//int main()
//{	
//	int i = 0;
//	char passord[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", passord);
//		if (strcmp(passord, "5201314tjf") == 0)
//		{
//			printf("������ȷ��");
//			break;
//
//		}
//		else
//		{
//			printf("�������");
//			
//		}
//		
//	}
//	if (i == 3)
//		printf("you have no chance!");
//	return 0;
//}

//������������
//#include<string.h>
//int main()
//{	
//	int ch = 0;
//	char passord[20] = { 0 };
//	printf("������������룺");
//	scanf("%s", passord );
//	/*while ((ch = getchar()) != '\n')
//	{
//		; 
//	}*/
//	printf("��ȷ�����룺");
//	char passord1[20] = { 0 };
//	scanf("%s", passord1);
//	if (strcmp(passord,passord1)==0)
//	{
//		printf("������ȷ !");
//		
//	}
//	else
//	{
//		printf("��������������������룺"); 
//		scanf("%s", passord1);
//		if (strcmp(passord, passord1) == 0)//�ȺŲ��������Ƚ������ַ����Ƿ����,Ӧ��ʹ��strcmp������strcmp(a,b)�����a>b�����һ������0������a<b�෴��
//		{
//			printf("������ȷ����");
//		}
//		else
//		{
//			printf("���Ѿ�û�����ˣ�");
//		}
//	}
//
//		
//	return 0;
//}






//����ַ��������ƶ����м���
//#include<string.h>
//int main()
//{	
//	char arr1[] = "cuoguodeshiyihan";
//	char arr2[] = "################";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int left = 0;
//	int right = strlen(arr2) - 1;//�����ַ�������strlen���������Ὣ��\0�����ȥ
//	//int right = sz - 2;//�ַ�������и�'\0'���������n�ַ�����Ӧ���±�Ӧ��sz-2
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++; right--;
//		printf("%s\n", arr2);
//	}
//	
//	
//	return 0;
//}



////���ַ�����Ԫ��
//int main()
//{	
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0, right = sz-1;
//	int k = 55;
//	
//	while (left <= right)
//	{	
//		int mid = (left + right) / 2;//ֻ�ܷ���whileѭ�����棬��Ϊ���������if���mid��ֵ�ᷢ���ı䣬����while������޷����¸�mid��ֵ������
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ����±���%d\n", mid);
//			break;
//		}
//		
//	}	
//	if (left > right)
//	{
//		printf("�Ҳ�����");
//	}
//	
//	return 0;
//}


//��ͨ��������Ԫ��
//int main()
//{	
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 20;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ���");
//			break;
//		}
//		
//	}	
//
//	if (i == 10)
//		printf("�Ҳ���");
//	return 0;


////����n�Ľ׳�
//int main()
//{	
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	unsigned  int set = 1;
//	for (i = 1; i <= n; i++)
//	{
//		 set = set * i;
//		 sum = sum + set;
//	}
//	printf("%d\n", set);
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{	
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//int main()
//{	
//	int i=0;
//	for (i = 0; i < 10; i++)
//	{	
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d ", i + 1);
//	}
//	return 0;
//}


//������С��Ϸ
//
//#include<time.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("     ��ѡ��\n");
//	printf("$$$$$$$$$$$$$$$$$$\n");
//	printf("$1.play$$$$0.exit$\n");
//	printf("$$$$$$$$$$$$$$$$$$\n");
//}
//void game()
//{
//	int set = rand()%100+1;
//	int guess = 0;
//	while (1)
//	{
//		printf("������֣�");
//		scanf("%d", &guess);
//		if (guess > set)
//		{
//			printf("�´���");
//		}
//		else if (guess < set)
//		{
//			printf("��С��");
//		}
//		else
//		{
//			printf("�¶���");
//			break;
//		}
//
//	}
//
//}
//int main()
//{	
//	int i = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		
//		menu();
//		scanf("%d",&i);
//		switch (i)
//		{
//		case 1:
//		{
//			game(); break;
//		}
//		case 0:
//		{
//			printf("�˳���Ϸ\n"); break;
//		}
//		default :
//		{
//			printf("�������\n"); break;
//
//		}
//		}
//	} while (i);
//
//	return 0;
//}