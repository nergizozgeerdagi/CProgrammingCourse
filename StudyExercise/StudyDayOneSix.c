#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	struct tarih
	{
		int gun; //integer de�erindeki gun de�i�kenini yap�ya ekledik//
		int ay; //integer de�erindeki ay de�i�kenini yap�ya ekledik//
		int yil; //integer de�erindeki yil de�i�kenini yap�ya ekledik//
	};
	
	struct kimlikBilgileri
	{
		char isim[20]; //en fazla 20 karakterlik isim de�i�kenini yap�ya ekledik//
		char soyad[20]; //en fazla 20 karakterlik soyad de�i�kenini yap�ya ekledik//
		struct tarih dogumTarihi; //tarih yap�s�na dogumTarihi ismini verdik//
	};

int main()
{
	struct kimlikBilgileri nergiz={"Nergiz","Erdagi"};
	printf("%s \t %s",nergiz.isim,nergiz.soyad);
	return 0;
}
