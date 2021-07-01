#include <stdio.h>
#include <stdlib.h>

//FAHRENAÝT'I DERECEYE ÇEVÝRÝCÝ YAPMA CHALLENGE//

double cevir(double n)
{
	return((n-32)/1.8);
}

int main()
{
	int F;
	double C;
	printf("Fahrenait olarak derece giriniz: ");
	scanf("%d",&F);
	C=cevir(F); //BU NEDÝR? HEMEN AÇIKLIYORUM BÝZ ÜSTTE BÝR ÇEVÝRÝCÝ FONKSÝYON YAZDIK//
	//ÇEVÝRMESÝNÝ ÝSTEDÝÐÝMÝZ F'Ý GÖTÜRÜP O FONKSÝYONUN ÝÇÝNE YAZIYORUZ VE SONRA C'YE EÞÝTLÝYORUZ KALDIÐIMIZ YERDEN DEVAM//
	printf("%d F(derece) = %g C(derece) esittir\n",F,C);
	return 0;
}
