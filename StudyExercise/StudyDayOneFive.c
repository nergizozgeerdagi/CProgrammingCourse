#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	struct ogrenci
	{
		char isim[20]; //en fazla 20 karakterlik isim deðiþkenini yapýya ekledik//
		char soyad[20]; //en fazla 20 karakterlik soyad deðiþkenini yapýya ekledik//
		int yas; //integer deðerindeki yas deðiþkenini yapýya ekledik//
	};
	
	struct ogrenci Nergiz={"Nergiz","Erdagi",18}; //yapýya Nergiz adýný verdik ve deðer atamasý yaptýk//
	printf("%s \t %s \t %d", Nergiz.isim, Nergiz.soyad, Nergiz.yas);
	return 0;
}
