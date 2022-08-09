#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"


void Initcontact(struct contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}

void Addcontact(struct contact* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满\n");
	}
	else
	{
		printf("请输入年龄："); scanf("%d", &(ps->data[ps->size].age));
		printf("请输入姓名："); scanf("%s", ps->data[ps->size].name);
		printf("请输入性别："); scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话："); scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址："); scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}

}

void Showcontact(const struct contact* ps)
{

	printf("%-4s\t%-20s\t%-10s\t%-12s\t%-20s\n", "年龄", "姓名", "性别", "电话", "地址");

	printf("%-4d\t%-20s\t%-10s\t%-12s\t%-20s\n",
		ps->data[ps->size].age,
		ps->data[ps->size].name,
		ps->data[ps->size].sex,
		ps->data[ps->size].tele,
		ps->data[ps->size].addr);

}