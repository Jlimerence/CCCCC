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

	printf("%-4s\t%-20s\t%-10s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");

	printf("%-4d\t%-20s\t%-10s\t%-12s\t%-20s\n",
		ps->data[ps->size].age,
		ps->data[ps->size].name,
		ps->data[ps->size].sex,
		ps->data[ps->size].tele,
		ps->data[ps->size].addr);

}