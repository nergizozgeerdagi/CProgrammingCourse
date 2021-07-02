#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//Klavyeden girilen bir n pozitif tam sayýsýna kadar olan tam sayýlarýn toplanarak çýktýsýnýn//
//alýnmasýnýn recursive fonksiyon ile yazýlmasý//
int topla (int sayi)
{
	if(sayi==1)
	{
		return 1;
	}
	else
	{
		return sayi+topla(sayi-1);
	}
}

int main()
{
	int n;
	printf("Bir sayi giriniz: ");
	scanf("%d",&n); //ampersand iþaretini unutmamak lazým//
	printf("Girdiginiz degere kadar olan tam sayilarin toplami: %d",topla(n));
	return 0;
}
