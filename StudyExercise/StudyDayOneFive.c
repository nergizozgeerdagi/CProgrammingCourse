#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	struct ogrenci
	{
		char isim[20]; //en fazla 20 karakterlik isim de�i�kenini yap�ya ekledik//
		char soyad[20]; //en fazla 20 karakterlik soyad de�i�kenini yap�ya ekledik//
		int yas; //integer de�erindeki yas de�i�kenini yap�ya ekledik//
	};
	
	struct ogrenci Nergiz={"Nergiz","Erdagi",18}; //yap�ya Nergiz ad�n� verdik ve de�er atamas� yapt�k//
	printf("%s \t %s \t %d", Nergiz.isim, Nergiz.soyad, Nergiz.yas);
	return 0;
}
