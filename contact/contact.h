#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 20
#define MAX 1000
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
	struct peoinf data[MAX];
	int size;
};

void Initcontact(struct contact* ps);
void Addcontact(struct contact* ps);
void Showcontact(const struct contact* ps);