#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"

void Initcontact(contact* ps)
{
	ps->data = (peoinf*)malloc(sizeof(peoinf) * DEFAULT);
	//�ж��Ƿ񿪱�ʧ��
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
	//�ж�����������
	if (ps->capcity == ps->size)
	{
		//����
		//���ٿռ�
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
		printf("���ݳɹ�\n");
	}
	//���
	printf("���������䣺"); scanf("%d", &(ps->data[ps->size].age));
	printf("�������Ա�"); scanf("%s", (ps->data[ps->size].sex));
	printf("������������"); scanf("%s", (ps->data[ps->size].name));
	printf("�������ַ��"); scanf("%s", (ps->data[ps->size].address));
	printf("������绰��"); scanf("%s", (ps->data[ps->size].tele));
	ps->size++;
	printf("��ӳɹ�\n");
}

void showcontact(contact* ps)
{	
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	//��ӡĿ¼
	printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n","����","�Ա�","�Ա�","��ַ","�绰");
	//��ӡ����
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
	printf("������Ҫɾ���˵�������");
	scanf("%s", name);
	int ret=Find(ps,name);

	if (ret == -1)
		printf("Ҫɾ���˵���Ϣ������\n");
	else
	{
		//ɾ����Ϣ
		int j = 0;
		for (j = ret; j <ps->size-1 ; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}

}

void Sercontact(contact* ps)
{	
	char name[20];
	printf("������Ҫ�����˵�������");
	scanf("%s", name);
	int ret = Find(ps,name);
	if (ret == -1)
		printf("Ҫ���ҵ��˲�����\n");
	else
	{
		printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n", "����", "�Ա�", "�Ա�", "��ַ", "�绰");

		printf("%-10d\t%-10s\t%-10s\t%-10s\t%-10s\n",
			ps->data[ret].age, ps->data[ret].sex,
			ps->data[ret].name, ps->data[ret].address,
			ps->data[ret].tele);
		printf("���ҳɹ�\n");
	}
	
}

void Modcontacact(contact* ps)
{
	char name[20];
	printf("������Ҫ�޸��˵�������");
	scanf("%s", name);
	int ret = Find(ps, name);
	if (ret == -1)
		printf("Ҫ�޸��˵���Ϣ������\n");
	else
	{
		//�޸���Ϣ
		printf("���������䣺"); scanf("%d", &(ps->data[ret].age));
		printf("�������Ա�"); scanf("%s", (ps->data[ret].sex));
		printf("������������"); scanf("%s", (ps->data[ret].name));
		printf("�������ַ��"); scanf("%s", (ps->data[ret].address));
		printf("������绰��"); scanf("%s", (ps->data[ret].tele));
		printf("�޸ĳɹ�\n");

	}
}

void Sorcontact(contact* ps)
{
	//�������������
	//�㷨�д��Ľ�
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
	printf("����ɹ�\n");

}

void Descontact(contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}