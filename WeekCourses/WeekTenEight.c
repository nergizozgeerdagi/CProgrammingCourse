#include <stdio.h>
#include <stdlib.h>
//bize sorulan 10 sýnav notundan ortalamanýn üstünde olanlarý çýktý aldýran program//
int main() 
{
	int n[10],i;
	double toplam=0, ortalama;
	printf("10 adet sinav notu giriniz: \n");
	for(i=0; i<10; i++)
	{
		scanf("%d", &n[i]);
		toplam = toplam + n[i]; 
	}
	ortalama = toplam/10;
	printf("10 sinav notunun ortalamasi: %.2f\n",ortalama);
	printf("Ortalama ustunde olan notlar: \n");
	for(i=0; i<10; i++)
	{
		if(n[i]>ortalama)
			printf("%d\n",n[i]);
	}
	return 0;
}
