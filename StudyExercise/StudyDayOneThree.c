#include <stdio.h>
#include <string.h>
//�ehirlerin 1-81 aras� adlar�n� ve s�cakl�klar�n� tutan yap�//
int main()
{
	struct sehir
	{
		char sehirAdi[20]; //�ehir ismi (karakter)//
		int sicaklik; //tam say� de�erinden �ehrin s�cakl���//
	};
	
	struct sehir turkiye[82]; //turkiye dizisinin 81 ilini s�ras�yla yap�s�na al�r//
	
	//�rne�in, sehirAdi: Adana, sicaklik: 36
	//         sehirAdi: Ad�yaman, sicaklik: 32 
	// 1-81 aras�n� turkiye yap�s�n�n i�inde 81 ili de ayr� ayr� g�sterir //
	
	return 0;
}
