#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int main()
//{
//	FILE* pf =fopen ("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("reason");
//		return 0;
//	}
//	//�����ļ�
//	char arr[] = "hellod";
//
//	//�׵�ַ һ��д��һ�������С  д��һ��  д�뵽pf����
//	//int ret=fwrite(arr, sizeof(arr), 1, pf);
//	char arr2[10] = { 0 };
//	int red=fread(arr2, sizeof(char), 20, pf);
//	printf("%s\n", arr2);
//	printf("%d\n", red);
//	//printf("ret=%d\n", ret);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		ferror("reason");
//		return 0;
//	}
//	//fprintf(pf, "whatfuck");
//	fscanf(pf,"%s");
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}

/* fscanf example */
//int main()
//{
//	char str[80];
//	float f;
//	FILE* pFile;
//
//	pFile = fopen("myfile.txt", "w+");
//	fprintf(pFile, "%f %s", 3.1416, "PI");
//	rewind(pFile);
//	fscanf(pFile, "%f", &f);
//	fscanf(pFile, "%s", str);
//	fclose(pFile);
//	printf("I have read: %f and %s \n", f, str);
//	return 0;
//}


//struct S
//{
//	int a;
//	float b;
//	char c[10] ;
//};
//int main()
//{
//	struct S s = { 111,3.14f,"hello"};
//	FILE* pf = fopen ("angry.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�����ļ�
//
//	//������write��pf����
//	//fprintf(pf, "%d %f %s", s.a, s.b, s.c);
//
//	//fscanf���Լ����������ж�ȡ���ݣ���ŵ��ṹ����߾ֲ�������ȥ��    ��ʱ�ṹ���ڲ��ĳ�Ա�����Ѿ��������ģ�����
//	//scanf�ӱ�׼�����������̣��ж�ȡ���ݣ���Ҫ�������룩����ŵ���������
//	fscanf(pf, "%d %f %s", &(s.a), &(s.b), s.c);
//	//������write����׼������У���ʾ�����������Ļ��
//	fprintf(stdout, "%d %f %s", s.a, s.b, s.c);
//	
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("qqq.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	char arr[20] = { 0 };
//	fseek(pf, 2, SEEK_SET);
//	int ret=ftell(pf);
//	printf("%d\n", ret);
//	fgets(arr,sizeof(arr), pf);
//	printf("%s\n", arr);
//	
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#define ADD(X,Y) X+Y
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int ret = ADD(a, b);
//	printf("%d", ret);
//
//	return 0;
//}