#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	struct tarih
	{
		int gun; //integer deðerindeki gun deðiþkenini yapýya ekledik//
		int ay; //integer deðerindeki ay deðiþkenini yapýya ekledik//
		int yil; //integer deðerindeki yil deðiþkenini yapýya ekledik//
	};
	
	struct kimlikBilgileri
	{
		char isim[20]; //en fazla 20 karakterlik isim deðiþkenini yapýya ekledik//
		char soyad[20]; //en fazla 20 karakterlik soyad deðiþkenini yapýya ekledik//
		struct tarih dogumTarihi; //tarih yapýsýna dogumTarihi ismini verdik//
	};

int main()
{
	struct kimlikBilgileri nergiz={"Nergiz","Erdagi"};
	printf("%s \t %s",nergiz.isim,nergiz.soyad);
	return 0;
}
