#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>

#define DEFAULT 3
typedef struct peoinf
{
	int age;
	char sex[10];
	char name[10];
	char address[20];
	char tele[11];
}peoinf;

typedef struct contact
{	
	int size;
	int capcity;
	struct peoinf* data;

}contact;

void Initcontact(contact* ps);

void Addcontact(contact* ps);

void showcontact(contact* ps);

void Delcontact(contact* ps);

void Sercontact(contact* ps);

void Modcontacact(contact* ps);

void Sorcontact(contact* ps);

void Descontact(contact* ps);