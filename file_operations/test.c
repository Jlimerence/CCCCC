#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	//���ļ�
//	FILE* p = fopen("text.txt", "w");
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	//д���ַ�
//	fputc('g', p);
//	fputc('o', p);
//	fputc('o', p);
//	fputs('d', p);
//
//	//�ر��ļ�
//	fclose(p);
//	p = NULL;
//
//	return 0;
//}


//�Ӽ�������--�������Ļ�ϡ�
//���̺���Ļ�����ⲿ�豸

//����-��׼�����豸-stdin
//��Ļ-��׼����豸-stdout
//��һ������Ĭ�ϴ򿪵��������豸

//int main()
//{
//	int ch = fgetc(stdin);	//Read a character from a stream 
//	fputc(ch,stdout);		//Writes a character to a stream 
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	int ch = fgetc(pf);//���������ж�ȡһ���ַ�������ASCLLֵ
//	printf("%c", ch);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{	
//	char* ps = "����ƻ�";
//	FILE* pf = fopen("text.txt", "w");
//	fputs(ps, pf);
//
//	return 0;
//}

//���������뻹�������������Ϊ�����

//struct S
//{
//	int a;
//	float b;
//	char name[20];
//};
//
//
//
//int main()
//{	
//	struct S s = { 12,3.14f,"zhangsan" };
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	//fprintf(pf, "hhhhhhh");
//	//printf���������׼�����
//	//fprintf��������Լ��������
//	fprintf(pf, "%d %f %s", s.a, s.b, s.name);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//��ϰ������������

//typedef struct S
//{
//	int a;
//	char b;
//	char arr[20];
//}S;
//int main()
//{	
//	//���ļ�
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�����ļ�
//	
//
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//struct S
//{
//	int age;
//	double score;
//	char name[20];
//};
//int main()
//{
//	//struct S s = { 21,89.8,"����" };
//	struct S tmp = { 0 };
//	FILE* pf = fopen("text.txt", "rb");
//	if (pf == NULL)
//		return 0;
//	else
//		fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%d %lf %s", tmp.age, tmp.score, tmp.name);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


int main()
{
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}

	int ch = fgetc(pf);
	printf("%d", ch);

	fclose(pf);
	pf = NULL;

	return 0;
}