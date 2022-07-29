#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//移位操作符
//int main()
//{
//	int a = -1;
//	int b = a >> 1;//右移操作符，一般左边都是补符号位。左移操作符，右边直接补0.
//	printf("%d", b);
//
//	return 0;
//}

//交换ab里面的内容不允许创建临时变量
//int main()
//{
//	int a = 3;
//	int b = 6;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;//-->采用异或的方法
//	printf("a=%d,b=%d\n", a, b);
//
//	return 0;
//}


//数组的类型--->去掉数组名
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	printf("%d",sizeof (int [5]));
//
//	return 0;
//}

//按位取反操作符~(二进制位取反)
//int main()
//{
//	int a = 0;			 //00000000000000000000000000000000
//	int b = ~a;			 //11111111111111111111111111111111		按位取反得到的首先是补码（整数在内存中是以补码的形式存储的）
//	printf("b=%d\n",b);    //11111111111111111111111111111110 -->反码
//	return 0;			 //10000000000000000000000000000001 -->原码（通过原码可以方便我们人为的知道数据的大小）b=-1
//}



//求最小公倍数

//int main()
//{	
//	int a = 0, b = 0;
//	printf("请输入：\n");
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		int temp = b;
//		b = a;
//		a = temp;
//	}
//	int i = 0;
//	for (i = a;; i++)
//	{
//		if (i % a == 0 && i % b == 0)
//		{
//			printf("%d ", i);
//			break;
//		}	
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0x0000000d;//0000 0000 0000 0000 0000 0000 0000 1101
//			   //0x	0	0	0	0		0	0	0	 13-->d
//			   //0x0000000d
//
//	return 0;
//}

//判断是大端存储还是小端存储（用一个程序实现）
//int main()
//{
//	int a = 0x11223344;//00000000000000000000000000000001-->0x00000001
//	char* p = (char*) & a;
//	*p = 58;
//	/*if (*p == 0)
//		printf("大端存储\n");
//	else
//		printf("小端存储\n");*/
//	return 0;
//}


//比较
//int main()
//{
//	char a = -128;//10000000000000000000000010000000源码
//				  //11111111111111111111111101111111反码
//				  //11111111111111111111111110000000补码
//				  //10000000：截断存储到char类型中
//				  //11111111111111111111111110000000（整型提升进行打印）%u要打印整数，先进行整型提升。将其看作了无符号数，所以此时三码统一，高位不再是符号位
//	printf("%u\n", a);//%u--->输出无符号的十进制数，%d--->有符号的十进制数
//	return 0;
//}
//
//int main()
//{
//	char a = 128;//思考为什么输出的是-128
//	//因为signed char 范围最大就是127（01111111），128越界了相当于就是127+1（01111111+00000001=10000000），所以输出的就是-128（10000000）
//	printf("%d", a);
//	return 0;
//}
//10000000000000000000000000010100
//11111111111111111111111111101011
//00000000000000000000000000000001
//11111111111111111111111111101100
//00000000000000000000000000001010
//11111111111111111111111111110110
//11111111111111111111111111110101
//10000000000000000000000000001010---->-10

//为什么会陷入死循环？？
//#include<windows.h>
//int main()
//{
//	unsigned int i;//因为i永远会被解析为无符号数，当i为-1时，最高位被解析成了无符号数，所以结果很大，并且循环不会停止
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//	return 0;
//}

//
//int main()
//{
//	char arr[1000];//char类型范围：-128---127
//	int i = 0;
//	for (i = 0; i < 1000; i++)//-129=-128+ -1（圆反着转）
//	{
//		arr[i] = -1 - i;//-1 -2 -3…………-1000
//	}
//	printf("%d", strlen(arr));//找到‘\0’停下来，‘\0’对应的ASCLL值为0-->找到0停下来
//	return 0;
//}

//浮点型数据在内存中的存储
//int main()
//{
//	//9.5
//	//1001.1
//	//(-1)^s*1.0011*2^3
//	//s=0,m=1.0011,e=3
//	//0100 0001 0001 1000 0000000000000000
//	//41 18 00 00--->00 00 18 41(小端存储)
//	int a = 9;
//	float* pa = (float*)&a;
//	 *pa= 9.0;
//	 printf("%d\n", a);//0100 0001 0001 1000 0000000000000000
//	 printf("%f\n", *pa);
//	return 0;
//}


//9
//1001
//1.001*2^3  s=0, m=1.001 ,e=3
//0100 0001 0001 00000000000
//41 10 00 00
//S=0,E=3,M=1.001

//0 00000000 10100000000000000000000
//S=0,E=-127,M=1.101
//0.001*2^-126

//字符指针
//int main()
//{
//	const char* p = "abcdef";//这是一个常量字符串
//	//不可以对p进行解引用操作，不可以改变，所以前面加个const修饰
//	printf("%s", p);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (arr1 == arr2)
//		printf("hh\n");
//	else
//		printf("haha\n");
//	//arr1,arr2数组各自在内存中开辟空间，数组元素的首地址不一样
//	//p1和p2存放的内容是一样的，都是字符a的地址，因为这是一个常量字符串
//	return 0; 
//}


//指针数组
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int* arr[] = {&a,&b,&c};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//同上
//int main()
//{
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 2,3,4,5 };
//	int arr3[] = { 3,4,5,6 };
//	int* arr[] = { arr1,arr2,arr3 };
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", *(arr[i] + j));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//数组指针
//int main()
//{
//	int arr1[10] = { 0 };//整型数组的额不完全初始化
//	int(*pa1)[10] = &arr1;//explain：*pa1-->pa是一个指针  [10]-->pa指向的数组里有十个元素	int-->十个元素的类型是int型
//	int* arr2[10];
//	int* (*pa2)[10] = &arr2;
//	return 0;
//}

//数组指针的使用
//void print1(int(*pa)[5] ,int x,int y)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ",*(*(pa + i) + j));//pa是 指向一行的地址，加上个i跳过i行，*（pa+i）相当于找到了这行，拿到了这行的数组名，*（pa+i）+j相当于找到了这一行第j个元素
//			//printf("%d ", (*(pa + i))[j]);
//			//printf("%d ",pa[i][j]);
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{	
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//
//	print1(&arr, 3, 5);
//
//	return 0;
//}
//去掉数组名和后面的方块就是数组里面元素的类型



//函数指针:指向函数的指针(存放的是函数的地址)Add表示函数的地址和&Add一样
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int ret = Add(a, b);
//	int(*p)(int,int)=Add;//p后面的括号表明这是一个函数指针
//	printf("%d\n", (*p)(3, 7));
//	printf("%d\n",(p)(3,7));//写p也可以  *p也可以
//	printf("%d\n", ret);
//
//	return 0;
//}

//void Print(char* str)//用一个一级指针来接收，可以传递的是：1、一级指针；2、某个变量的地址（数组首元素的地址）
//{
//	printf("%s\n",str);
//}
//int main()
//{
//	void(*p)(char*) = Print;//去掉p就是函数的类型
//	(*p)("fire");
//
//	return 0;
//}

//
//void (*  signal(int, void(*)(int) )  )(int);//去掉函数名和函数的参数就是函数的返回类型
////简化
//typedef void(*pfun_t)(int);
//pfun_t(signal(int, pfun_t));
////signal是一个函数声明
////signal函数的参数有两个，第一个是int，第二个是函数指针，该函数指针指向函数的参数是int，返回类型是void。
////signal函数的返回类型也是函数指针，该函数指针指向函数的参数是int，返回类型是void。


//函数指针数组（数组去掉数组名和【】就是数组里面元素的类型）


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//int(*p)(int, int) = Add;
//	int(*p[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", p[i](2, 3));	//p[i]--->访问下标为i的数组元素，就是访问函数的地址，可以不进行解引用
//	}
//	return 0;
//}
//整型数组：数组元素类型是整型
//函数指针数组：数组元素类型是函数指针类型


//最朴实无华的加减乘除

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int Xor(int x, int y)
{
	return x ^ y;
}
void menu()
{
	printf("*****************************\n");
	printf("****1.Add          2.Sub*****\n");
	printf("****3.Mul          4.Div*****\n");
	printf("*******   0.exit    *********\n");
}
//int main()
//{
//	int input = 0;
//	int a = 0, b = 0;
//	do
//	{
//		menu();
//		printf("请选择：\n");
//		scanf("%d", &input);
//		if (input != 0)
//		{
//			printf("请输入操作数：\n");
//			scanf("%d%d", &a, &b);
//		}
//		switch (input)
//		{
//		case 1:printf("%d\n",Add(a, b));
//			break;
//		case 2:printf("%d\n",Sub(a, b));
//			break;
//		case 3:printf("%d\n",Mul(a, b));
//			break;
//		case 4:printf("%d\n",Div(a, b));
//			break;
//		case 0:printf("退出\n");
//			break;
//		default:printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//使用函数指针数组的高效方法实现简单运算------>转移表
//int main()
//{
//	int input = 0;
//	int a = 0, b = 0;
//	do
//	{
//		menu();
//		printf("请选择：\n");
//		scanf("%d", &input);
//		//pfArr是一个数组，是一个函数指针数组，数组里面存放的是函数的地址
//		int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div ,Xor};//初始化第一个元素为0
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数：\n");
//			scanf("%d%d", &a, &b);
//			int ret = pfArr[input](a, b);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//
//	} while (input);
//}

//通过回调函数改进switch代码						回调函数--------->用2函数来接收1函数的地址，在2函数内部实现1函数的功能

void Calc(int(*pfArr)(int,int))
{
	int x = 0, y = 0;
	printf("请输如两个操作数：\n");
	scanf("%d%d", &x, &y);
	int ret = pfArr(x, y);
	printf("%d\n", ret);

}


int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:Calc(Add);
			break;
		case 2:Calc(Sub);
			break;
		case 3:Calc(Mul);
			break;
		case 4:Calc(Div);
			break;
		case 0:printf("退出\n");
			break;
		default:printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}




