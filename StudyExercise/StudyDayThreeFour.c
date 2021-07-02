#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Klavyeden girilen bir n pozitif tam say�s�n�n fakt�riyelini recursive fonksiyon ile bulan C program�//

int faktoriyel (int sayi)
{
	int sonuc;
	
	if (sayi!=0) //!= e�it de�ilse//
	{
		sonuc=sayi*faktoriyel(sayi-1);
	}
	else
	{
		sonuc=1;
	}
	return sonuc;
}

int main()
{
	int n;
	printf("Bir tam sayi giriniz: ");
	scanf("%d",&n);
	printf("%d!: %d",n,faktoriyel(n);
	return 0;
}
