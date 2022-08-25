#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"

void Initcontact(contact* ps)
{
	ps->data = (peoinf*)malloc(sizeof(peoinf) * DEFAULT);
	//判断是否开辟失败
	if (ps->data == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	ps->capcity = 3;
	ps->size = 0;
}

void Addcontact(contact* ps)
{
	//判断容量够不够
	if (ps->capcity == ps->size)
	{
		//增容
		//开辟空间
		peoinf* p = (peoinf*)realloc(ps->data, sizeof(peoinf) * (DEFAULT + 2));
		if (p != NULL)
		{
			ps->data = p;
		}
		else
		{
			printf("%s\n", strerror(errno));
		}
		ps->capcity += 2;
		printf("扩容成功\n");
	}
	//添加
	printf("请输入年龄："); scanf("%d", &(ps->data[ps->size].age));
	printf("请输入性别："); scanf("%s", (ps->data[ps->size].sex));
	printf("请输入姓名："); scanf("%s", (ps->data[ps->size].name));
	printf("请输入地址："); scanf("%s", (ps->data[ps->size].address));
	printf("请输入电话："); scanf("%s", (ps->data[ps->size].tele));
	ps->size++;
	printf("添加成功\n");
}

void showcontact(contact* ps)
{	
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	//打印目录
	printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n","年龄","性别","性别","地址","电话");
	//打印内容
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%-10d\t%-10s\t%-10s\t%-10s\t%-10s\n",
			ps->data[i].age, ps->data[i].sex,
			ps->data[i].name, ps->data[i].address,
			ps->data[i].tele);
	}

}
int Find(contact* ps,char name[])
{	
	
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if ((strcmp(name, ps->data[i].name)) == 0)
			break;
	}
	if (i == ps->size)
		return -1;

	return i;
}

void Delcontact(contact* ps)
{
	char name[20];
	printf("请输入要删除人的姓名：");
	scanf("%s", name);
	int ret=Find(ps,name);

	if (ret == -1)
		printf("要删除人的信息不存在\n");
	else
	{
		//删除信息
		int j = 0;
		for (j = ret; j <ps->size-1 ; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}

}

void Sercontact(contact* ps)
{	
	char name[20];
	printf("请输入要查找人的姓名：");
	scanf("%s", name);
	int ret = Find(ps,name);
	if (ret == -1)
		printf("要查找的人不存在\n");
	else
	{
		printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n", "年龄", "性别", "性别", "地址", "电话");

		printf("%-10d\t%-10s\t%-10s\t%-10s\t%-10s\n",
			ps->data[ret].age, ps->data[ret].sex,
			ps->data[ret].name, ps->data[ret].address,
			ps->data[ret].tele);
		printf("查找成功\n");
	}
	
}

void Modcontacact(contact* ps)
{
	char name[20];
	printf("请输入要修改人的姓名：");
	scanf("%s", name);
	int ret = Find(ps, name);
	if (ret == -1)
		printf("要修改人的信息不存在\n");
	else
	{
		//修改信息
		printf("请输入年龄："); scanf("%d", &(ps->data[ret].age));
		printf("请输入性别："); scanf("%s", (ps->data[ret].sex));
		printf("请输入姓名："); scanf("%s", (ps->data[ret].name));
		printf("请输入地址："); scanf("%s", (ps->data[ret].address));
		printf("请输入电话："); scanf("%s", (ps->data[ret].tele));
		printf("修改成功\n");

	}
}

void Sorcontact(contact* ps)
{
	//按年龄进行排序
	//算法有待改进
	int i = 0;
	for (i = 0; i < ps->size-1; i++)
	{
		if (ps->data[i].age > ps->data[i+1].age)
		{
			peoinf tmp = ps->data[i];
			ps->data[i] = ps->data[i+1];
			ps->data[i+1] = tmp;
		}
	}
	printf("排序成功\n");

}

void Descontact(contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}