#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,N;
	printf("Lutfen N sayisini giriniz:");
	scanf("%d", &N);
	for(i=1; i<=N; i++)
		{
		if(i%3==0 && i%5==0)
			printf("%d\n", i);
		}
		//////////////////////////////////////////////////////////////////
	int toplam=0; /*Toplamý tanýmladýktan sonra ilk deðeri sýfýr olarak belirle*/
	int sayi; /*Sayý adýnda kontrol deðiþkenini ata*/
	for (sayi=-15; sayi<=2; sayi+=5) /*Sayýnýn ilk deðerini ata ve sayý deðerini her tekrarda 5 arttýr*/
	{
		toplam+=sayi; /*Sayýyý toplama ekle*/
	}
	printf("Toplam: %d", toplam); /*Toplamý yazdýr*/
	return 0;
}
