#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
		for(i=1; i<=10; i++)
		printf("Nergiz, Gonlumuzun Birincisi!\n");
		printf("\n");
		
	int z;
		for(z=-4; z<9; z++)
		printf("%d\n",z);
		printf("\n");
		
	int s;
	s=9;
		while(s<=20)
		{
			printf("Ozge\n");
			s++;
		}
	printf("\n");
	
	int sayac=3; /*sayac de�erini tan�mla ve ona de�er atamas� yap*/
	while (sayac<=7) /*Say� ka�a kadar tekrar edecek belirleme k�sm�*/
	{
		printf("%d\n",sayac); //sayac De�erini ekrana yazd�r//
		++sayac; //sayac de�erini artt�r//
	}
	
	return 0;
	
}
