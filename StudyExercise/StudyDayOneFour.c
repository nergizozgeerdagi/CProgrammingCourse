#include <stdio.h>
#include <string.h>

int main()
{
	typedef float tipim; //float yerine tipim ismiyle float deðiþkeninin kullanýmýný saðlar//
	struct hacimPrizma
	{
		tipim en; //float deðerinde en deðiþkenini yapýya ekledik//
		tipim boy; //float deðerinde boy deðiþkenini yapýya ekledik//
		tipim yukseklik; //float deðerinde yukseklik deðiþkenini yapýya ekledik//
		tipim hacim; //float deðerinde hacim deðiþkenini yapýya ekledik//
	};
	
	typedef struct hacimPrizma prizma; //hacimPrizma yerine prizma isminin kullanýlmasýný saðlar//
	prizma prizmaN; //prizma yapýsýný (bu yapýnýn diðer adý hacimPrizma) prizmaN olarak isimlendirmeyi yaptýk//
}
