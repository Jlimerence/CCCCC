#define _CRT_SECURE_NO_WARNINGS
#include<easyx.h>
#include<stdio.h>
//int main()
//{
//	initgraph(1200, 800);
//
//	return 0;
//}
//#include <graphics.h>		// ����ͼ�ο�ͷ�ļ�
//#include <conio.h>
//int main()
//{	//SHOWCONSOLE��ʾ����̨
//	initgraph(640, 480,SHOWCONSOLE); 	// ������ͼ���ڣ���СΪ 640x480 ����
//	setbkcolor(WHITE);
//	cleardevice();//������ȥ��֮ǰ�ĺ�ɫ��
//
//	setlinestyle(PS_SOLID, 2);//ʵ�ߣ�������ص��С
//	setfillcolor(RED);
//	setlinecolor(BLUE);
//	circle(20, 20, 20);
//	fillcircle(20, 60, 20);
//	solidcircle(20, 100, 20);
//
//	//���ֻ����ʾ�ڿ���̨���ڣ�������ʾ��ͼ�δ��ڣ�û��ʲôʵ�ʵļ�ֵ
//	/*int mayi = 0;
//	scanf("%d", &mayi);
//	printf("%d\n", mayi);*/
//
//	//д���ֵ�ͼ�δ���
//	//1������������ɫ  2��д
//	settextcolor(BLACK);
//	//����������ʽ
//	settextstyle(20, 0, L"����");
//
//	//û��������б�ƥ��� ���غ��� "outtextxy" ʵ��	
//	//�������1.���ַ�����ǰ�����L  2.easyx���Ը���Ϊ���ֽ��ַ���
//	outtextxy(20, 20, L"�ƿ�����535�Ĵ������535�����������ӡ�");
//
//	getchar();				// �����������
//	closegraph();			// �رջ�ͼ����
//	return 0;
//}


//�ṹ�������ʹ��
struct Stu
{
	char name[20];//����
	int age;//����
	char sex[5];//�Ա�
	char id[20];//ѧ��
}; //�ֺŲ��ܶ�

void Print(struct Stu* p)
{	
	printf("%s %d %s %s\n", p->name, p->age, p->sex, p->id);

}
int main()
{	
	struct Stu s = { "����",18,"��","123456" };
	Print(&s);

	/*struct Stu* p = &s;
	printf("%s %d %s %s\n", p->name, p->age, p->sex, p->id);
	printf("%s %d %s %s", s.name, s.age, s.sex, s.id);*/

	return 0;
}


