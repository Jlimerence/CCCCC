#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	printf("hello\a\n");//  \a----->alert--����
//	return 0;
//}

//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	gets(arr);//��ȡ�ַ���ֱ�����з������������з��ᱻ������Ȼ����ĩβ���'\0'�ַ�
//	printf("%s\n", arr);
//
//	return 0;
//}


//int main()
//{	
//	//putsʵ��ֻ����һ��---->puts("abc")�����ȼ���printf("abc\n")
//	puts("�����룺");
//	printf("haha\n");
//	printf("hehe\n");
//
//	return 0;
//}

int main()
{
	int a = 1, b = 2;
	// % ����ת��˵���Ĺ���--->������ת�����ܣ�ֻ�����%��ʱ�򣬱���д��%%
	//puts����������ת��˵������
	puts("b%a");
	printf("b%%a=%d\n", b % a);

	return 0;
}