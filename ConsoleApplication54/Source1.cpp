#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<iostream>
#include<time.h>
#include<math.h>
#include"Struct.h"

void NewName(char *pt)
{
	char Name[10][15] = { "�������","����������","��������","������","�����","�����","����","�������","������","������" };
	int N = 0 + rand() % 9;
	strcpy(pt, Name[N]);
}

void Made(char *pt)
{
	char Name[10][15] = { "Chaina","Russia","Kazakhstan","USA","Singapure","Uzb","Krg","Knd","Aze","PLt" };
	int N = 0 + rand() % 9;
	strcpy(pt, Name[N]);
}
void PrintInfo(NHL *pt)
{
	puts(pt->LastName);
	printf("������� %d \n", pt->year);
	printf("���� ��� %d \n", pt->countGame);
	printf("���� ���� %d \n", pt->Hit);
}
void PrintInfoMagazine(Magazin *pt)
{
	puts(pt->Name);
	puts(pt->Madein);
	printf("��� ������� %d \n", pt->year);
	printf("���� %d \n", pt->count);
	printf("���� %d \n", pt->price);
}
void PrintInfStudent(student *pt)
{
	puts(pt->Name);
	printf("��� �������� %d \n", pt->year);
	printf("������ %d \n", pt->Group);
	printf("������ �� ������ %d \n", pt->Fiz);
	printf("������ �� ����������� %d \n", pt->Inform);
	printf("������ �� ���������� %d \n", pt->Mat);
}

void PrintInfoOffice(Rab *pt)
{
	puts(pt->Name);
	printf("��� �������� %d \n", pt->year);
	printf("�������� %d \n", pt->zp);
	printf("�������� %s \n", pt->Prof);
	printf("����������� %s \n", pt->Study);
}
void prof(char *pt)
{
	char Name[10][15] = { "��������","���������","��������","�������","��������","�������","���������","�����","���������","�� ����" };
	int N = 0 + rand() % 9;
	strcpy(pt, Name[N]);
}
void Study(char *pt)
{
	char Name[10][15] = { "����","UIB","Garvard","Hogvarts","Evraziyskiy","HZ","��������","������","������������","�� ������" };
	int N = 0 + rand() % 9;
	strcpy(pt, Name[N]);
}