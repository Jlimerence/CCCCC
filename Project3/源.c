#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��λ������
//int main()
//{
//	int a = -1;
//	int b = a >> 1;//���Ʋ�������һ����߶��ǲ�����λ�����Ʋ��������ұ�ֱ�Ӳ�0.
//	printf("%d", b);
//
//	return 0;
//}

//����ab��������ݲ���������ʱ����
//int main()
//{
//	int a = 3;
//	int b = 6;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;//-->�������ķ���
//	printf("a=%d,b=%d\n", a, b);
//
//	return 0;
//}


//���������--->ȥ��������
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	printf("%d",sizeof (int [5]));
//
//	return 0;
//}

//��λȡ��������~(������λȡ��)
//int main()
//{
//	int a = 0;			 //00000000000000000000000000000000
//	int b = ~a;			 //11111111111111111111111111111111		��λȡ���õ��������ǲ��루�������ڴ������Բ������ʽ�洢�ģ�
//	printf("b=%d\n",b);    //11111111111111111111111111111110 -->����
//	return 0;			 //10000000000000000000000000000001 -->ԭ�루ͨ��ԭ����Է���������Ϊ��֪�����ݵĴ�С��b=-1
//}



//����С������

//int main()
//{	
//	int a = 0, b = 0;
//	printf("�����룺\n");
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

//�ж��Ǵ�˴洢����С�˴洢����һ������ʵ�֣�
//int main()
//{
//	int a = 0x11223344;//00000000000000000000000000000001-->0x00000001
//	char* p = (char*) & a;
//	*p = 58;
//	/*if (*p == 0)
//		printf("��˴洢\n");
//	else
//		printf("С�˴洢\n");*/
//	return 0;
//}


//�Ƚ�
//int main()
//{
//	char a = -128;//10000000000000000000000010000000Դ��
//				  //11111111111111111111111101111111����
//				  //11111111111111111111111110000000����
//				  //10000000���ضϴ洢��char������
//				  //11111111111111111111111110000000�������������д�ӡ��%uҪ��ӡ�������Ƚ����������������俴�����޷����������Դ�ʱ����ͳһ����λ�����Ƿ���λ
//	printf("%u\n", a);//%u--->����޷��ŵ�ʮ��������%d--->�з��ŵ�ʮ������
//	return 0;
//}
//
//int main()
//{
//	char a = 128;//˼��Ϊʲô�������-128
//	//��Ϊsigned char ��Χ������127��01111111����128Խ�����൱�ھ���127+1��01111111+00000001=10000000������������ľ���-128��10000000��
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

//Ϊʲô��������ѭ������
//#include<windows.h>
//int main()
//{
//	unsigned int i;//��Ϊi��Զ�ᱻ����Ϊ�޷���������iΪ-1ʱ�����λ�����������޷����������Խ���ܴ󣬲���ѭ������ֹͣ
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
//	char arr[1000];//char���ͷ�Χ��-128---127
//	int i = 0;
//	for (i = 0; i < 1000; i++)//-129=-128+ -1��Բ����ת��
//	{
//		arr[i] = -1 - i;//-1 -2 -3��������-1000
//	}
//	printf("%d", strlen(arr));//�ҵ���\0��ͣ��������\0����Ӧ��ASCLLֵΪ0-->�ҵ�0ͣ����
//	return 0;
//}

//�������������ڴ��еĴ洢
//int main()
//{
//	//9.5
//	//1001.1
//	//(-1)^s*1.0011*2^3
//	//s=0,m=1.0011,e=3
//	//0100 0001 0001 1000 0000000000000000
//	//41 18 00 00--->00 00 18 41(С�˴洢)
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

//�ַ�ָ��
//int main()
//{
//	const char* p = "abcdef";//����һ�������ַ���
//	//�����Զ�p���н����ò����������Ըı䣬����ǰ��Ӹ�const����
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
//	//arr1,arr2����������ڴ��п��ٿռ䣬����Ԫ�ص��׵�ַ��һ��
//	//p1��p2��ŵ�������һ���ģ������ַ�a�ĵ�ַ����Ϊ����һ�������ַ���
//	return 0; 
//}


//ָ������
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

//ͬ��
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

//����ָ��
//int main()
//{
//	int arr1[10] = { 0 };//��������Ķ��ȫ��ʼ��
//	int(*pa1)[10] = &arr1;//explain��*pa1-->pa��һ��ָ��  [10]-->paָ�����������ʮ��Ԫ��	int-->ʮ��Ԫ�ص�������int��
//	int* arr2[10];
//	int* (*pa2)[10] = &arr2;
//	return 0;
//}

//����ָ���ʹ��
//void print1(int(*pa)[5] ,int x,int y)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ",*(*(pa + i) + j));//pa�� ָ��һ�еĵ�ַ�����ϸ�i����i�У�*��pa+i���൱���ҵ������У��õ������е���������*��pa+i��+j�൱���ҵ�����һ�е�j��Ԫ��
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
//ȥ���������ͺ���ķ��������������Ԫ�ص�����



//����ָ��:ָ������ָ��(��ŵ��Ǻ����ĵ�ַ)Add��ʾ�����ĵ�ַ��&Addһ��
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
//	int(*p)(int,int)=Add;//p��������ű�������һ������ָ��
//	printf("%d\n", (*p)(3, 7));
//	printf("%d\n",(p)(3,7));//дpҲ����  *pҲ����
//	printf("%d\n", ret);
//
//	return 0;
//}

//void Print(char* str)//��һ��һ��ָ�������գ����Դ��ݵ��ǣ�1��һ��ָ�룻2��ĳ�������ĵ�ַ��������Ԫ�صĵ�ַ��
//{
//	printf("%s\n",str);
//}
//int main()
//{
//	void(*p)(char*) = Print;//ȥ��p���Ǻ���������
//	(*p)("fire");
//
//	return 0;
//}

//
//void (*  signal(int, void(*)(int) )  )(int);//ȥ���������ͺ����Ĳ������Ǻ����ķ�������
////��
//typedef void(*pfun_t)(int);
//pfun_t(signal(int, pfun_t));
////signal��һ����������
////signal�����Ĳ�������������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ�����Ĳ�����int������������void��
////signal�����ķ�������Ҳ�Ǻ���ָ�룬�ú���ָ��ָ�����Ĳ�����int������������void��


//����ָ�����飨����ȥ���������͡���������������Ԫ�ص����ͣ�


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
//		printf("%d\n", p[i](2, 3));	//p[i]--->�����±�Ϊi������Ԫ�أ����Ƿ��ʺ����ĵ�ַ�����Բ����н�����
//	}
//	return 0;
//}
//�������飺����Ԫ������������
//����ָ�����飺����Ԫ�������Ǻ���ָ������


//����ʵ�޻��ļӼ��˳�

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
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		if (input != 0)
//		{
//			printf("�������������\n");
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
//		case 0:printf("�˳�\n");
//			break;
//		default:printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//ʹ�ú���ָ������ĸ�Ч����ʵ�ּ�����------>ת�Ʊ�
//int main()
//{
//	int input = 0;
//	int a = 0, b = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		//pfArr��һ�����飬��һ������ָ�����飬���������ŵ��Ǻ����ĵ�ַ
//		int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div ,Xor};//��ʼ����һ��Ԫ��Ϊ0
//		if (input >= 1 && input <= 5)
//		{
//			printf("������������������\n");
//			scanf("%d%d", &a, &b);
//			int ret = pfArr[input](a, b);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("�������\n");
//		}
//
//	} while (input);
//}

//ͨ���ص������Ľ�switch����						�ص�����--------->��2����������1�����ĵ�ַ����2�����ڲ�ʵ��1�����Ĺ���

void Calc(int(*pfArr)(int,int))
{
	int x = 0, y = 0;
	printf("������������������\n");
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
		printf("��ѡ��\n");
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
		case 0:printf("�˳�\n");
			break;
		default:printf("ѡ�����\n");
			break;
		}
	} while (input);

	return 0;
}




