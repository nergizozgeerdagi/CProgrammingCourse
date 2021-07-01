#include <stdio.h>
#include <stdlib.h>
int main()
{
	int sayi;
	do
	{
		printf("Bir sayi giriniz: ");
		scanf("%d",&sayi);
		printf("Girdiginiz sayinin iki kati: %d\n",2*sayi);
	}
	while (sayi>-1);
	printf("Dongu sona erdi gidebilirsin kardesim");
	
	int sayac_1;
	sayac_1=1;
	while (sayac_1<6)
	{
		printf("%d\n",sayac_1);
		++sayac_1;
	}
	
	int sayac_2;
	sayac_2=8;
	do
	{
		printf("%d\n",sayac_2);
		++sayac_2;
	}
	while (sayac_2<12);
	printf("Sayac sona erdi kardesim gule gule");	
	return 0;
}
