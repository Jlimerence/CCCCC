#define _CRT_SECURE_NO_WARNINGS
#include<easyx.h>
#include<stdio.h>
//int main()
//{
//	initgraph(1200, 800);
//
//	return 0;
//}
//#include <graphics.h>		// 引用图形库头文件
//#include <conio.h>
//int main()
//{	//SHOWCONSOLE显示控制台
//	initgraph(640, 480,SHOWCONSOLE); 	// 创建绘图窗口，大小为 640x480 像素
//	setbkcolor(WHITE);
//	cleardevice();//清屏（去除之前的黑色）
//
//	setlinestyle(PS_SOLID, 2);//实线，五个像素点大小
//	setfillcolor(RED);
//	setlinecolor(BLUE);
//	circle(20, 20, 20);
//	fillcircle(20, 60, 20);
//	solidcircle(20, 100, 20);
//
//	//这个只能显示在控制台窗口，不能显示在图形窗口，没有什么实际的价值
//	/*int mayi = 0;
//	scanf("%d", &mayi);
//	printf("%d\n", mayi);*/
//
//	//写文字到图形窗口
//	//1、设置文字颜色  2、写
//	settextcolor(BLACK);
//	//设置文字样式
//	settextstyle(20, 0, L"楷体");
//
//	//没有与参数列表匹配的 重载函数 "outtextxy" 实例	
//	//解决方法1.在字符串最前面加上L  2.easyx属性更改为多字节字符集
//	outtextxy(20, 20, L"唐俊峰是535的大爹，在535还有两个儿子。");
//
//	getchar();				// 按任意键继续
//	closegraph();			// 关闭绘图窗口
//	return 0;
//}


//结构体变量的使用
struct Stu
{
	char name[20];//名字
	int age;//年龄
	char sex[5];//性别
	char id[20];//学号
}; //分号不能丢

void Print(struct Stu* p)
{	
	printf("%s %d %s %s\n", p->name, p->age, p->sex, p->id);

}
int main()
{	
	struct Stu s = { "张三",18,"男","123456" };
	Print(&s);

	/*struct Stu* p = &s;
	printf("%s %d %s %s\n", p->name, p->age, p->sex, p->id);
	printf("%s %d %s %s", s.name, s.age, s.sex, s.id);*/

	return 0;
}


