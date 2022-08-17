#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 20
#define MAX 1000
#define INITIAL 2

enum Option
{
	EXIT,
	ADD,
	DEL,
	SER,
	MOD,
	SHOW,
	SOR
};

struct peoinf
{
	int age;
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

struct contact
{
	struct peoinf* data;
	int size;
	int capcity;//ÈÝÁ¿
};

void Initcontact(struct contact* ps);
void Addcontact(struct contact* ps);
void Showcontact(const struct contact* ps);
void Delcontacat(struct contact* ps);
void Sercontact(struct contact* ps);
void Modcontact(struct contact* ps);
void Sorcontact(struct contact* ps);
void Destory(struct contact* ps);
void Savecontact(struct contact* ps);
void Loadcontact(struct contact* ps);