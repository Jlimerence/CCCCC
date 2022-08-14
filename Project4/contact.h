#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>



#define	MAX_NAME 20
#define	MAX_SEX 10
#define	MAX_ADDR 20
#define	MAX_TELE 12
#define	MAX_CAPCITY 2

struct peoinf
{
	int age;
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char addr[MAX_ADDR];
	char tele[MAX_TELE];
};

struct contact
{
	int size;
	int capcity;
	struct peoinf* data;
};

void Initcontact(struct contact* ps);
void Addcontact(struct contact* ps);
void Showcontact(struct contact* ps);
void Delcontact(struct contact* ps);
void Sercontact(struct contact* ps);
void Modcontact(struct contact* ps);
void Sorcontact(struct contact* ps);
