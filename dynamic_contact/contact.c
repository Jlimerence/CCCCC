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
		//����
		struct peoinf* ptr = (struct peoinf*)realloc(ps->data, (INITIAL + ps->capcity) * sizeof(struct peoinf));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capcity += INITIAL;
			printf("���ݳɹ�\n");
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
	//�����ļ�
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
	//�ж������Ƿ���
	//1.����������  2.����ʲô������ʾ
	Checkcapcity(ps);
	printf("���������䣺"); scanf("%d", &(ps->data[ps->size].age));
	printf("������������"); scanf("%s", ps->data[ps->size].name);
	printf("�������Ա�"); scanf("%s", ps->data[ps->size].sex);
	printf("������绰��"); scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ��"); scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("��ӳɹ�\n");
}


void Showcontact(const struct contact* ps)
{

	if (ps->size == 0)
		printf("ͨѶ¼Ϊ��\n");
	else
	{
		printf("%-4s\t%-20s\t%-10s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	//�Ҳ��������
	return -1;

}

void Delcontacat(struct contact* ps)
{	
	char name[MAX_NAME];
	printf("������Ҫɾ���˵�������");
	scanf("%s", name);
	
     int ret=Findbyname(ps, name);

	if (ret == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		//ɾ������
		int j = 0;
		for (j = ret;j<ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void Sercontact(struct contact* ps)
{	
	char name[MAX_NAME];
	printf("������Ҫ�����˵���Ϣ\n");
	scanf("%s", name);
	int ret = Findbyname(ps, name);
	if (ret == -1)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("%-4s\t%-20s\t%-10s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫ�޸��˵�����\n");
	scanf("%s", name);
	int ret = Findbyname(ps, name);
	if (ret == -1)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("���������䣺"); scanf("%d", &(ps->data[ret].age));
		printf("������������"); scanf("%s", ps->data[ret].name);
		printf("�������Ա�"); scanf("%s", ps->data[ret].sex);
		printf("������绰��"); scanf("%s", ps->data[ret].tele);
		printf("�������ַ��"); scanf("%s", ps->data[ret].addr);
	}
	printf("�޸ĳɹ�\n");
}

int cmp_age(const void* p1,const void* p2)
{
	return((struct contact*)p1)->data->age - ((struct contact*)p2)->data->age;
}

void Sorcontact(struct contact* ps)
{
	//��������
	char name1[MAX];
	char name2[MAX];
	printf("����������������");
	scanf("%s%s", name1, name2);
	int ret1 = Findbyname(ps, name1);
	int ret2 = Findbyname(ps, name2);
	if (ret1 == -1 || ret2 == -1)
	{
		printf("���������ݲ�����\n");
	}
	else
	{	
		//���մ�С�������������
		if (ps->data[ret1].age > ps->data[ret2].age)
		{
			struct peoinf change = ps->data[ret2];
			ps->data[ret2] = ps->data[ret1];
			ps->data[ret1] = change;
		}
		printf("����ɹ�\n");
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
	//�����ļ�
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(ps->data + i, sizeof(struct peoinf), 1, pf);
	}
	fclose(pf);
	pf = NULL;

}