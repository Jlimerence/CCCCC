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
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("���������䣺"); scanf("%d", &(ps->data[ps->size].age));
		printf("������������"); scanf("%s", ps->data[ps->size].name);
		printf("�������Ա�"); scanf("%s", ps->data[ps->size].sex);
		printf("������绰��"); scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ��"); scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	}

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

void Delcontacat(struct contact* ps)
{	
	char name[MAX_NAME];
	printf("������Ҫɾ���˵�������");
	scanf("%s", name);


}