#define _CRT_SECURE_NO_WARNINGS

#include"contact.h"

void Initcontact(struct contact* ps)
{
	ps->data = (struct peoinf*)malloc( sizeof(struct peoinf) * 3);
	if ( ps->data== NULL)
	{
		printf("%s",strerror(errno));
	}	
		ps->size = 0;
		ps->capcity = 3;

		Loadcontact(ps);
}

void Loadcontact(struct contact* ps)
{

	FILE* pf = fopen("contact.dat", "r");
	if (pf == NULL)
	{
		ferror("reason");
		return;
	}
	//判断是否需要扩容

	if (ps->capcity == ps->size)
	{
		//扩容
		struct peoinf* ptr = (struct peoinf*)realloc(ps->data, sizeof(struct peoinf) * (MAX_CAPCITY + ps->capcity));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capcity += MAX_CAPCITY;
			printf("扩容成功\n");
		}
	}
	struct peoinf tmp = { 0 };
	while (fread(&tmp, sizeof(struct peoinf), 1, pf))
	{
		ps->data[ps->size] = tmp;
		ps->size++;
	}

	fclose(pf);
	pf = NULL;
}

void Addcontact(struct contact* ps)
{
	if (ps->capcity == ps->size)
	{
		//扩容
		struct peoinf* ptr = (struct peoinf*)realloc(ps->data,sizeof(struct peoinf) * (MAX_CAPCITY + ps->capcity));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capcity += MAX_CAPCITY;
			printf("扩容成功\n");
		}
	}
		//添加
		printf("请输入年龄："); scanf("%d", &(ps->data[ps->size].age));
		printf("请输入姓名："); scanf("%s", ps->data[ps->size].name);
		printf("请输入性别："); scanf("%s", ps->data[ps->size].sex);
		printf("请输入地址："); scanf("%s", ps->data[ps->size].addr);
		printf("请输入电话："); scanf("%s", ps->data[ps->size].tele);
		ps->size++;
		printf("添加成功\n");

	
}

void Showcontact(struct contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{	
		printf("%-15s\t%-15s\t%-15s\t%-15s\t%-15s\n","年龄","姓名","性别","地址","电话");
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			printf("%-15d\t%-15s\t%-15s\t%-15s\t%-15s\n",
				ps->data[i].age,
				ps->data[i].name,
				ps->data[i].sex,
				ps->data[i].addr,
				ps->data[i].tele);

		}
	}
}

void Delcontact(struct contact* ps)
{	
	char name[20];
	printf("请输入要删除人的姓名：");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(name, ps->data[i].name) == 0)
		{
			//删除
			int j = 0;
			for (j = i; j < ps->size-1; j++)
			{
				ps->data[j] = ps->data[j + 1];
				
			}
			ps->size--;
			printf("删除成功\n");
			break;
		}
	}
	if (i == ps->size)
	{
		printf("要删除的人不存在\n");
	}
}

void Sercontact(struct contact* ps)
{	
	char name[20] = { 0 };
	printf("请输入要查找人的姓名：\n");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(name, ps->data[i].name) == 0)
		{
			printf("%-15s\t%-15s\t%-15s\t%-15s\t%-15s\n", "年龄", "姓名", "性别", "地址", "电话");
			printf("%-15d\t%-15s\t%-15s\t%-15s\t%-15s\n",
				ps->data[i].age,
				ps->data[i].name,
				ps->data[i].sex,
				ps->data[i].addr,
				ps->data[i].tele);
			break;
		}
	}
	if (i == ps->size)
	{
		printf("查无此人\n");
	}
}

void Modcontact(struct contact* ps)
{	
	char name[20]={0};
	printf("请输入要修改人的姓名：");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(name, ps->data[i].name) == 0)
		{
			printf("请输入年龄："); scanf("%d", &(ps->data[i].age));
			printf("请输入姓名："); scanf("%s", ps->data[i].name);
			printf("请输入性别："); scanf("%s", ps->data[i].sex);
			printf("请输入地址："); scanf("%s", ps->data[i].addr);
			printf("请输入电话："); scanf("%s", ps->data[i].tele);
			printf("修改成功\n");
			break;
		}
	}
	if (i == ps->size)
	{
		printf("查无此人\n");
	}
}

void Sorcontact(struct contact* ps)
{
	int i = 0;
	for (i = 0; i < ps->size-1; i++)
	{	
		//按照年龄从小到大排序
		if (ps->data[i].age > ps->data[i + 1].age)
		{
			struct peoinf tmp = ps->data[i];
			ps->data[i] = ps->data[i + 1];
			ps->data[i + 1] = tmp;
		}
	}
	printf("排序成功\n");

}

void Destorycontact(struct contact* ps)
{
	free(ps->data);
	ps->data = NULL;
	ps->capcity = 0;
	ps->size = 0;
	
}

void Savecontact(struct contact* ps)
{
	FILE* pf = fopen("contact.dat", "w");
	if (pf == NULL)
	{
		perror("reason");
		return;
	}
	//操作文件
	int i = 0;
	for(i=0;i<ps->size;i++)
	{
		fwrite(ps->data+i, sizeof(struct peoinf), 1, pf);
	}

	fclose(pf);
	pf = NULL;

}