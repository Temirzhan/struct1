#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<iostream>
#include<time.h>
#include<math.h>
#include"Header.h"

using namespace std;
char f;
void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	do
	{
		int N;
		printf("Выберите задание");
		scanf("%d", &N);
		switch (N)
		{
		case 1:
		{
			NHL *team;
			team = (NHL*)calloc(11, sizeof(NHL));
			for (int i = 0; i < 11; i++)
			{
				NewName((team + i)->LastName);
				(team + i)->year = 19 + rand() % 10;
				(team + i)->countGame = 1 + rand() % 30;
				(team + i)->Hit = 1 + rand() % 30;
			}
			int yearAll=0;
			for (int i = 0; i < 11; i++)
			{
				yearAll += (team + i)->year;
				if ((team + i)->year);
				PrintInfo((team + i));
			}
			printf("%d Средний возраст\n", yearAll / 11);

		}
		break;
		case 2:
		{
			Magazin *TutiFruti;
			TutiFruti = (Magazin*)calloc(11, sizeof(Magazin));
				for (int i = 0; i < 11; i++)
				{
					NewName((TutiFruti + i)->Name);
					Made((TutiFruti + i)->Madein);
					(TutiFruti + i)->year = 1999 + rand() % 20;
					(TutiFruti + i)->count = 1 + rand() % 30;
					(TutiFruti + i)->price = 100 + rand() %15000;
				}
				int PriceAll = 0;
				int Max=0;
				int Min=20000;
				int Mini;
				int Maxi;
				for (int i = 0; i < 11; i++)
				{
					PriceAll += (TutiFruti + i)->price;
					PrintInfoMagazine(TutiFruti+i);
					if (Min > (TutiFruti + i)->price)
						Mini = i;
					if (Max< (TutiFruti + i)->price)
						Maxi = i;			
				}
				printf("Общаа стоимость %d\n", PriceAll);
				printf("--------------");
				printf("Самый дешевый товар\n");
					PrintInfoMagazine(TutiFruti + Mini);
			    printf("Самый Дорогой товар\n");
					PrintInfoMagazine(TutiFruti + Maxi);
		}
		break;
		case 3:
		{
			Rab *office;
			office = (Rab*)calloc(11, sizeof(Rab));
			for (int i = 0; i < 11; i++)
			{
				NewName((office + i)->Name);
				(office + i)->year = 1960 + rand() % 50;
				(office + i)->zp = 40000 + rand() % 200000;
				prof((office + i)->Prof);
				Study((office + i)->Study);
			}
			int shegol =100;
			int j;
			for (int i = 0; i < 11; i++)
			{
				if (shegol > 2018 - (office + i)->year)
				{
					shegol = 2018 - (office + i)->year;
					j = i;
				}
			}
			printf("Самый младший\n");
			PrintInfoOffice((office + j));
		}
		break;
		case 4:
		{
			student *Stud;
				Stud = (student*)calloc(11, sizeof(student));
			for (int i = 0; i < 11; i++)
			{
				NewName((Stud + i)->Name);
				(Stud + i)->year = 1999 + rand() % 3;
				(Stud + i)->Group = 1 + rand() % 3;
				(Stud + i)->Fiz = 50 + rand() % 100;
				(Stud + i)->Mat = 50 + rand() % 100;
				(Stud + i)->Inform= 50 + rand() % 100;
			}
			int count=0;
			for (int i = 0; i < 11; i++)
			{
				if ((Stud + i)->Mat > 94)
				{
					PrintInfStudent(Stud + i);
					count++;
				}

			}
			printf("Их общее колл %d\n",count);

		}
		}
		printf("Хотите продолжить y-da");
		scanf("%c", &f);
	} while (f=='y');
}