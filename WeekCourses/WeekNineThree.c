#include <stdio.h>
#include <stdlib.h>
int sayac (int);
int main() 
{
	int n;
	printf("Bir tamsayi giriniz: ");
	scanf("%d" , &n);
	printf("Toplam basamak sayisi: %d" , sayac(n));
	return 0;
}

int sayac (int n)
{
	int sayac=0;
	while(n)
	{
		n=n/10;
		sayac++;
	}
	return sayac;
}
