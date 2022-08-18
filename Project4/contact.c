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
	//�ж��Ƿ���Ҫ����

	if (ps->capcity == ps->size)
	{
		//����
		struct peoinf* ptr = (struct peoinf*)realloc(ps->data, sizeof(struct peoinf) * (MAX_CAPCITY + ps->capcity));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capcity += MAX_CAPCITY;
			printf("���ݳɹ�\n");
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
		//����
		struct peoinf* ptr = (struct peoinf*)realloc(ps->data,sizeof(struct peoinf) * (MAX_CAPCITY + ps->capcity));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capcity += MAX_CAPCITY;
			printf("���ݳɹ�\n");
		}
	}
		//���
		printf("���������䣺"); scanf("%d", &(ps->data[ps->size].age));
		printf("������������"); scanf("%s", ps->data[ps->size].name);
		printf("�������Ա�"); scanf("%s", ps->data[ps->size].sex);
		printf("�������ַ��"); scanf("%s", ps->data[ps->size].addr);
		printf("������绰��"); scanf("%s", ps->data[ps->size].tele);
		ps->size++;
		printf("��ӳɹ�\n");

	
}

void Showcontact(struct contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{	
		printf("%-15s\t%-15s\t%-15s\t%-15s\t%-15s\n","����","����","�Ա�","��ַ","�绰");
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
	printf("������Ҫɾ���˵�������");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(name, ps->data[i].name) == 0)
		{
			//ɾ��
			int j = 0;
			for (j = i; j < ps->size-1; j++)
			{
				ps->data[j] = ps->data[j + 1];
				
			}
			ps->size--;
			printf("ɾ���ɹ�\n");
			break;
		}
	}
	if (i == ps->size)
	{
		printf("Ҫɾ�����˲�����\n");
	}
}

void Sercontact(struct contact* ps)
{	
	char name[20] = { 0 };
	printf("������Ҫ�����˵�������\n");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(name, ps->data[i].name) == 0)
		{
			printf("%-15s\t%-15s\t%-15s\t%-15s\t%-15s\n", "����", "����", "�Ա�", "��ַ", "�绰");
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
		printf("���޴���\n");
	}
}

void Modcontact(struct contact* ps)
{	
	char name[20]={0};
	printf("������Ҫ�޸��˵�������");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(name, ps->data[i].name) == 0)
		{
			printf("���������䣺"); scanf("%d", &(ps->data[i].age));
			printf("������������"); scanf("%s", ps->data[i].name);
			printf("�������Ա�"); scanf("%s", ps->data[i].sex);
			printf("�������ַ��"); scanf("%s", ps->data[i].addr);
			printf("������绰��"); scanf("%s", ps->data[i].tele);
			printf("�޸ĳɹ�\n");
			break;
		}
	}
	if (i == ps->size)
	{
		printf("���޴���\n");
	}
}

void Sorcontact(struct contact* ps)
{
	int i = 0;
	for (i = 0; i < ps->size-1; i++)
	{	
		//���������С��������
		if (ps->data[i].age > ps->data[i + 1].age)
		{
			struct peoinf tmp = ps->data[i];
			ps->data[i] = ps->data[i + 1];
			ps->data[i + 1] = tmp;
		}
	}
	printf("����ɹ�\n");

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
	//�����ļ�
	int i = 0;
	for(i=0;i<ps->size;i++)
	{
		fwrite(ps->data+i, sizeof(struct peoinf), 1, pf);
	}

	fclose(pf);
	pf = NULL;

}