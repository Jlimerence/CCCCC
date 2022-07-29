#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//求1---10000的水仙花数
//153是一个水仙花数：153（三位数）=1^3+5^3+3^3
//#include<math.h>
//int main()
//{
//	int n = 0;
//	int count = 0;
//	for (n = 100; n < 1000; n++)
//	{	
//		int t = n % 10;//个位
//		int j = n / 10;
//		int f = j % 10;//十位
//		int g = j / 10;//百位 
//		int h = pow(t, 3) + pow(f, 3) + pow(g, 3);
//		if (h == n)
//		{
//			printf("%d是水仙花数\n",n);
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

//设计一个字符串拷贝函数
//优化之后的
//#include<assert.h>
//void my_strcpy(char* pa, const char* pb)//const修饰放在*前面，*pb的值不能够被改变
//{
//	
//	assert(pa != NULL);//断言：如果符合条件则什么都不执行，如果有错误，则会报错
//	assert(pb != NULL);
//		while (*pa++ = *pb++)//'\0'的ASCLL码值为0
//		{
//			;
//		}
//}


//void my_strcpy(char* pa, char* pb)
//{	
//	if (pa != NULL && pb != NULL)//如果有人错误传参传了个空指针，这个起个提醒作用，不过不太显著，最好使用断言（assert）
//	{
//		while (*pb != '\0')//'\0'的ASCLL码值为0
//		{
//			*pa = *pb;
//			pb++;
//			pa++;
//		}
//		*pa = *pb;//此时*pb='\0'
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



//设计一个字符串拷贝函数
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



//局部变量在栈区中是如何存储的？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？
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



//求字符串长度
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


//将一个数组里面的内容：逆序
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

//普通法求阶乘
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
//递归求阶乘
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
//将一个数按顺序打印出来   1234
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
//乘法口诀表
//int main()
//{	
//	int i = 0, j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//%-2d:输出数字所占宽度为两位，不足的用空格补齐。负号表示左对齐，没有符号就是右对齐
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


//统计1--100中数字7的个数
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


// 方法三：奇思妙想*****************************************************************************************************************
//int count_one(int n)
//{	
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//n&n-1效果：使得n中最右边的1每次减少一个，看看代码执行了多少次，就有多少个1
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
//方法二
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
//统计二进制中1的个数
//int count_one(unsigned int n)//具有局限性，如果是个负数的话会出bug，可以将n强制转换为无符号数比如（-1），此时1111111111……最高位不再是符号位，可以进行计算
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
 
//统计二进制中1的个数
//int count(unsigned int n)//如果不转换为无符号数的话，如果传过来的是个负数就没法计算了
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






//交换数组内容，效率比较高
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


//交换数组内容
// 自己写的效率较为低下（要学会改进）
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
//		if (left != right)//最后一次的时候，left=right，不加个判断条件同一个值会被执行两次，相当于没执行，会出现bug
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


//冒泡排序
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
//	for (p = arr; p < &arr[5]; p++)//允许指向数组元素的指针和指向数组元素最后一个位置后面的那个内存位置进行比较，但是最前面的不可以
//	{
//		*p = 1;
//	}
//
//	return 0;
//}



//模拟实现一个strlen函数
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
//	return end - start;//指针加减指针等于中间元素个数
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

//内存调试
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;//如果将指针类型改为char* ，那么操作内存时只能操作一个字节。指针类型决定了指针进行解引用操作时能够操作的内存大小
//	*pa = 0;
//	//printf("%d ", *pa);
//	//printf("%p", pa);
//	return 0;
//}

//指针加减整数
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
//指针+-整数
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

//指针+-指针=中间元素个数
//只能在同一个数组中使用，必须是可知的连续的空间
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	printf("%d", &arr[9] - &arr[0] );//中间元素个数
//
//
//	return 0;
//}


////用循环的方式求斐波那契数
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
//	printf("请输入：");
//	scanf("%d", &input);
//	set=Fib(input);
//	printf("set=%d", set);
//	return 0;
//}


//用递归求斐波那契数
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
//	printf("请输入：");
//	scanf("%d", &input);
//	set = Fib(input);
//	printf("第%d个斐波那契数是%d",input, set);
//	//1 1 2 3 5 8 13 21 34 55
//	return 0;
//}


//结构体
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
//	struct book t1 = { 99,"以吾之名","马卡不卡" };
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
//	struct book b1 = { 23,"唐俊峰","也水寒",{123,"周培源",10}};
//	printf("%s\n", b1.author);
//	printf("%s\n", b1.owner);
//	printf("%s\n", b1.t1.name);
//
//	return 0;
//}

//移位操作符
//int main()
//{	
//	int a = 16;
//	//				a的二进制： 00000000000000000000000000010000
//	//右移一位，最左边补符号位：00000000000000000000000000001000
//	int b = a >> 1;
//	printf("b=%d\n", b);//8
//
//	return 0;
//}


//冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0,j=0 ;
//	int temp = 0;
//	int flag = 1;//假定这一趟要排序的顺序已定（提高效率） 
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
//	sz = sizeof(arr) / sizeof(arr[0]);//数组中所含的元素
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//
//	return 0;
//}

//arr的含义理解
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


 
//用递归求第n个斐波那契数
//斐波那契数列：1 1 2 3 5 8 13 21 34（前两个数之和等于后一个数）
//int count = 0;
//int Fib(int m)
//{	
//	if (m == 3)//测试第三个斐波那契数的计算次数（重复计算很严重，效率低下）
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




//递归法求阶乘
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
//	printf("请输入值：");
//	scanf("%d", &i);
//	ret = Fac(i);
//	printf("ret=%d", ret);
//	
//
//	return 0;
//}


//普通法求阶乘
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

//模拟实现一个strlen函数
//int my_strlen(char* str)
//{	
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;//地址加一指向后一位数的地址
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，是数组元素的首地址（字符a的地址）
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


//多个字符从两端移动向中间汇聚
//#include<string.h>
//int main()
//{
//	char arr1[] = "l love you";
//	char arr2[] = "**********";
//	int left = 0;
//	int right = strlen(arr2) - 1;//streln函数不会计算隐藏的\0
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


//求最大公约数
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


//写一个函数可以交换变量的内容
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
//	change_t(&a, &b);//传址调用
//	printf("a=%d,b=%d\n", a, b);
//
//	return 0;
//}


//团队分模块书写，最后测试
//#include"Add.h"//自己写的头文件用""调用
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


//递归:函数自己调用自己
//int main()
//{	
//	printf("hh\n");
//	main();
//	return 0;
//}




//猜数字小游戏			有问题明天再完善		问题解决：else后跟了两条语句没加括号导致循环退出了
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
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		if (guess > set)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < set)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");//切记if语句后面如果不止一条，一定要加上括号！！！规范规范
//			break;
//		}
//	}
//
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//种子播种器
//	while (1)
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input == 1)
//		{
//			game();
//		}
//		else if (input == 0)
//		{
//			printf("退出游戏！"); break;
//		}
//		else
//		{
//			printf("输入错误！\n");
//		}
//	}
//	return 0;
//}


//关机小妙招
//#include<string.h>
//#include<stdlib.h>
//int main()
//{	
//	char pig[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("你的电脑将在一分钟内关机除非输入：“我是猪”。\n请输入：");
//	scanf("%s", pig);
//	if (strcmp(pig, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("取消关机！");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}


//函数的嵌套调用
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 543)));//54331
//
//	return 0;
//}


//函数的嵌套调用
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
//写一个函数实现整型有序数组的二分查找
//int look_for(int arr1[], int k1)//这里的arr1本质上是一个指针
//{
//	int left = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);//可以现在main函数内部求出sz然后将值传递到look_for函数中
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
//	int ret = look_for (arr, k);//这里实际传过去的是数组arr首元素的地址
//	if (ret == -1)
//	{
//		printf("找不到要找的数字");
//	}
//	else
//	{
//		printf("找到了下标为：%d", ret);
//	}
//	return 0;
//}


//写一个函数实现整型有序数组的二分查找
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
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了下标为%d\n", ret);
//	}
//
//
//
//	return 0;
//}

//写一个函数判断一年是否为闰年

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
//	printf("请输入年份：");
//	scanf("%d", &year);
//	if (runnian(year) == 1)
//	{
//		printf("%d年是闰年",year);
//	}
//	else
//	{
//		printf("%d不是闰年", year);
//	}
//
//	
//	return 0;
//}


//写一个函数可以判断一个数是不是素数(只能被1和其本身整除)
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


//写一个函数交换两个整型变量的内容	
//void change_t(int* x, int* y)//void表示没有返回值
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



//电脑关机小妙招
//#include<stdlib.h>
//#include <string.h>
//int main()
//{	
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("请注意你的电脑将在六十秒内关机，除非输入：我是猪。\n请输入：");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//		goto again;
//	return 0;
//}






//猜数字小游戏
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
//	ret = rand()%100+1;//一到一百的随机数
//	while (1)
//	{
//		printf("请猜数字：\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else 
//		{
//			printf("猜对了\n");
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
//		printf("请选择：\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("游戏退出\n");
//			break;
//		default:
//			printf("输入错误，请重新输入！\n");
//			break;
//
//		}
//	} while (input);
//	return 0;
//}


 
//在屏幕上输出乘法口诀表
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d ", i, j, i * j);//%2d：打印两位数，不够的用空格补齐			%-2d：左对齐
//
//		}
//		printf("\n");
//		
//	}
//
//
//	return 0;
//}



//求十个数中的最大值
//int main()
//{
//	int arr[] = { 1,2,3,4,5,55,7,8,79,10 };
//	int max = 0;//max用来存放最大值，后面经过判断就可以，如果有比max大的值就将其赋值给max！！！这种思想要掌握
//	int i = 0;				//max建议初始化为arr[0]，因为如果max初始化为0，有可能0比数组中的元素都要大，这样就达不到求数组中的最大值的效果了
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)//max初始化为arr[0]后，i可以从1开始
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("最大值为：%d%", max);
//
//	return 0;
//}
//


//计算1/1-1/2+1/3+…………（分开求的方法）
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
//试除法求100--200之间的素数
//素数：只能被1和其本身整除
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
//			printf("%d是素数 ", i);
//	}
//
//	return 0;
//}




//int main()
//{
//	int m = 0, n =0;
//	printf("请输入值：");
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
//	printf("最大公约数为：%d", n);
//
//	return 0;
//}




//辗转相除法求两个数的最大公约数
//int main()
//{
//	int m = 24, n = 18;//已24和18为例
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




//打印一到一百之间所有三的倍数（简洁明了！！！）		先写出一到一百，然后再判断就可以
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

//打印一到一百之间所有三的倍数,下面的方法是第一次写实在是太烂了
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


//密码输入问题(最多三次)
//#include<string.h>
//int	main()
//{
//	int i = 0;
//	char passord[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", passord);
//		if (strcmp(passord, "5201314tjf") == 0)
//		{
//			printf("密码正确"); break;
//		}
//		else
//		{
//			printf("密码错误");
//		}
//	}
//	if (i == 3)
//		printf("你已经没机会了！");
//	return	0;
//}


//二分法查找数组元素
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	printf("请输入k的值：");
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
//			printf("找到了下标为%d", mid);//找到的时候左右下标是相等的，要加个break不然会进入死循环
//			break;
//		}		
//	}
//	if (left > right)
//	{
//		printf("找不到啊！");
//	}
//
//	return 0;
//}



////普通法查找数组元素
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	printf("请输入k的值进行查找：");
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




////for循环里面最多输入三次密码问题
//#include<string.h>
//int main()
//{	
//	int i = 0;
//	char passord[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", passord);
//		if (strcmp(passord, "5201314tjf") == 0)
//		{
//			printf("密码正确！");
//			break;
//
//		}
//		else
//		{
//			printf("密码错误！");
//			
//		}
//		
//	}
//	if (i == 3)
//		printf("you have no chance!");
//	return 0;
//}

//输入密码问题
//#include<string.h>
//int main()
//{	
//	int ch = 0;
//	char passord[20] = { 0 };
//	printf("请输入你的密码：");
//	scanf("%s", passord );
//	/*while ((ch = getchar()) != '\n')
//	{
//		; 
//	}*/
//	printf("请确认密码：");
//	char passord1[20] = { 0 };
//	scanf("%s", passord1);
//	if (strcmp(passord,passord1)==0)
//	{
//		printf("密码正确 !");
//		
//	}
//	else
//	{
//		printf("密码错误，请重新输入密码："); 
//		scanf("%s", passord1);
//		if (strcmp(passord, passord1) == 0)//等号不能用来比较两个字符串是否相等,应该使用strcmp函数，strcmp(a,b)。如果a>b则输出一个大于0的数。a<b相反。
//		{
//			printf("密码正确啦！");
//		}
//		else
//		{
//			printf("你已经没机会了！");
//		}
//	}
//
//		
//	return 0;
//}






//多个字符从两端移动向中间汇聚
//#include<string.h>
//int main()
//{	
//	char arr1[] = "cuoguodeshiyihan";
//	char arr2[] = "################";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int left = 0;
//	int right = strlen(arr2) - 1;//计算字符串长度strlen函数，不会将‘\0’算进去
//	//int right = sz - 2;//字符串最后有个'\0'所以想求得n字符所对应的下表应该sz-2
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



////二分法查找元素
//int main()
//{	
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0, right = sz-1;
//	int k = 55;
//	
//	while (left <= right)
//	{	
//		int mid = (left + right) / 2;//只能放在while循环里面，因为经过下面的if语句mid的值会发生改变，放在while外面就无法重新给mid赋值！！！
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
//			printf("找到了下标是%d\n", mid);
//			break;
//		}
//		
//	}	
//	if (left > right)
//	{
//		printf("找不到咯");
//	}
//	
//	return 0;
//}


//普通方法查找元素
//int main()
//{	
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 20;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了");
//			break;
//		}
//		
//	}	
//
//	if (i == 10)
//		printf("找不到");
//	return 0;


////计算n的阶乘
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


//猜数字小游戏
//
//#include<time.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("     请选择\n");
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
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		if (guess > set)
//		{
//			printf("猜大了");
//		}
//		else if (guess < set)
//		{
//			printf("猜小了");
//		}
//		else
//		{
//			printf("猜对了");
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
//			printf("退出游戏\n"); break;
//		}
//		default :
//		{
//			printf("输入错误！\n"); break;
//
//		}
//		}
//	} while (i);
//
//	return 0;
//}