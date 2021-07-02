#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//Klavyeden girilen bir n pozitif tam say�s�na kadar olan tam say�lar�n toplanarak ��kt�s�n�n//
//al�nmas�n�n recursive fonksiyon ile yaz�lmas�//
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
	scanf("%d",&n); //ampersand i�aretini unutmamak laz�m//
	printf("Girdiginiz degere kadar olan tam sayilarin toplami: %d",topla(n));
	return 0;
}
