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
	int toplam=0; /*Toplam� tan�mlad�ktan sonra ilk de�eri s�f�r olarak belirle*/
	int sayi; /*Say� ad�nda kontrol de�i�kenini ata*/
	for (sayi=-15; sayi<=2; sayi+=5) /*Say�n�n ilk de�erini ata ve say� de�erini her tekrarda 5 artt�r*/
	{
		toplam+=sayi; /*Say�y� toplama ekle*/
	}
	printf("Toplam: %d", toplam); /*Toplam� yazd�r*/
	return 0;
}
