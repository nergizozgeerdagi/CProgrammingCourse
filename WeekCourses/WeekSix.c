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
	
	int sayac=3; /*sayac deðerini tanýmla ve ona deðer atamasý yap*/
	while (sayac<=7) /*Sayý kaça kadar tekrar edecek belirleme kýsmý*/
	{
		printf("%d\n",sayac); //sayac Deðerini ekrana yazdýr//
		++sayac; //sayac deðerini arttýr//
	}
	
	return 0;
	
}
