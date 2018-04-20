#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<iostream>
#include<time.h>
#include<math.h>
#include"Struct.h"

void NewName(char *pt)
{
	char Name[10][15] = { "БретПит","ХардиГулум","Робертмл","Айгуль","Анюта","Семен","Люси","Снежана","Девять","Десять" };
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
	printf("Возраст %d \n", pt->year);
	printf("Колл игр %d \n", pt->countGame);
	printf("Колл шайб %d \n", pt->Hit);
}
void PrintInfoMagazine(Magazin *pt)
{
	puts(pt->Name);
	puts(pt->Madein);
	printf("Год выпуска %d \n", pt->year);
	printf("Колл %d \n", pt->count);
	printf("Цена %d \n", pt->price);
}
void PrintInfStudent(student *pt)
{
	puts(pt->Name);
	printf("Год рождения %d \n", pt->year);
	printf("Группа %d \n", pt->Group);
	printf("Оценка по физике %d \n", pt->Fiz);
	printf("оценка по информатике %d \n", pt->Inform);
	printf("оценка по математике %d \n", pt->Mat);
}

void PrintInfoOffice(Rab *pt)
{
	puts(pt->Name);
	printf("Год рождения %d \n", pt->year);
	printf("Зарплата %d \n", pt->zp);
	printf("Професия %s \n", pt->Prof);
	printf("Оброзования %s \n", pt->Study);
}
void prof(char *pt)
{
	char Name[10][15] = { "Директор","Секретарь","Техничка","Слесарь","Менеджер","Охраник","Стюардеса","Пилот","Бухгалтер","Ит спец" };
	int N = 0 + rand() % 9;
	strcpy(pt, Name[N]);
}
void Study(char *pt)
{
	char Name[10][15] = { "Нету","UIB","Garvard","Hogvarts","Evraziyskiy","HZ","Каперага","Шарага","Экономичский","Ит универ" };
	int N = 0 + rand() % 9;
	strcpy(pt, Name[N]);
}