#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"


void Initcontact(struct contact* ps)
{
	ps->data = (struct peoinf*)malloc(sizeof(struct peoinf) * INITIAL);
	ps->size = 0;
	ps->capcity = INITIAL;

	Loadcontact(ps);

}

void Checkcapcity(struct contact* ps)
{
	if (ps->size == ps->capcity)
	{
		//增容
		struct peoinf* ptr = (struct peoinf*)realloc(ps->data, (INITIAL + ps->capcity) * sizeof(struct peoinf));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capcity += INITIAL;
			printf("增容成功\n");
		}
	}

}

void Loadcontact(struct contact* ps)
{
	FILE* pf = fopen("contact.dat", "r");
	if (pf == NULL)
	{
		perror("reason");
		return;
	}
	//操作文件
	struct peoinf tmp = { 0 };
	while (fread(&tmp, sizeof(struct peoinf), 1, pf))
	{
		Checkcapcity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}

	fclose(pf);
	pf = NULL;
}


void Addcontact(struct contact* ps)
{
	//判断容量是否满
	//1.不够就增容  2.够了什么都不显示
	Checkcapcity(ps);
	printf("请输入年龄："); scanf("%d", &(ps->data[ps->size].age));
	printf("请输入姓名："); scanf("%s", ps->data[ps->size].name);
	printf("请输入性别："); scanf("%s", ps->data[ps->size].sex);
	printf("请输入电话："); scanf("%s", ps->data[ps->size].tele);
	printf("请输入地址："); scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("添加成功\n");
}


void Showcontact(const struct contact* ps)
{

	if (ps->size == 0)
		printf("通讯录为空\n");
	else
	{
		printf("%-4s\t%-20s\t%-10s\t%-12s\t%-20s\n", "年龄", "姓名", "性别", "电话", "地址");
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			printf("%-4d\t%-20s\t%-10s\t%-12s\t%-20s\n",
				ps->data[i].age,
				ps->data[i].name,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	
	}

}

static int Findbyname(struct contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
		if (strcmp(ps->data[i].name, name) == 0)
		{
			return i;
		}
	//找不到的情况
	return -1;

}

void Delcontacat(struct contact* ps)
{	
	char name[MAX_NAME];
	printf("请输入要删除人的姓名：");
	scanf("%s", name);
	
     int ret=Findbyname(ps, name);

	if (ret == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		//删除数据
		int j = 0;
		for (j = ret;j<ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

void Sercontact(struct contact* ps)
{	
	char name[MAX_NAME];
	printf("请输入要查找人的信息\n");
	scanf("%s", name);
	int ret = Findbyname(ps, name);
	if (ret == -1)
	{
		printf("查无此人\n");
	}
	else
	{
		printf("%-4s\t%-20s\t%-10s\t%-12s\t%-20s\n", "年龄", "姓名", "性别", "电话", "地址");
			printf("%-4d\t%-20s\t%-10s\t%-12s\t%-20s\n",
				ps->data[ret].age,
				ps->data[ret].name,
				ps->data[ret].sex,
				ps->data[ret].tele,
				ps->data[ret].addr);
	}
}

void Modcontact(struct contact* ps)
{	
	char name[MAX_NAME];
	printf("请输入要修改人的姓名\n");
	scanf("%s", name);
	int ret = Findbyname(ps, name);
	if (ret == -1)
	{
		printf("查无此人\n");
	}
	else
	{
		printf("请输入年龄："); scanf("%d", &(ps->data[ret].age));
		printf("请输入姓名："); scanf("%s", ps->data[ret].name);
		printf("请输入性别："); scanf("%s", ps->data[ret].sex);
		printf("请输入电话："); scanf("%s", ps->data[ret].tele);
		printf("请输入地址："); scanf("%s", ps->data[ret].addr);
	}
	printf("修改成功\n");
}

int cmp_age(const void* p1,const void* p2)
{
	return((struct contact*)p1)->data->age - ((struct contact*)p2)->data->age;
}

void Sorcontact(struct contact* ps)
{
	//进行排序
	char name1[MAX];
	char name2[MAX];
	printf("请输入待排序的姓名");
	scanf("%s%s", name1, name2);
	int ret1 = Findbyname(ps, name1);
	int ret2 = Findbyname(ps, name2);
	if (ret1 == -1 || ret2 == -1)
	{
		printf("待排序数据不存在\n");
	}
	else
	{	
		//按照从小到大的年龄排序
		if (ps->data[ret1].age > ps->data[ret2].age)
		{
			struct peoinf change = ps->data[ret2];
			ps->data[ret2] = ps->data[ret1];
			ps->data[ret1] = change;
		}
		printf("排序成功\n");
	}
	
}

void Destory(struct contact* ps)
{
	free(ps->data);
	ps->data = NULL;
	ps->data = 0;
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
	for (i = 0; i < ps->size; i++)
	{
		fwrite(ps->data + i, sizeof(struct peoinf), 1, pf);
	}
	fclose(pf);
	pf = NULL;

}