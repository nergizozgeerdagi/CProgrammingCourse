#include <stdio.h>
#include <string.h>

int main()
{
	typedef float tipim; //float yerine tipim ismiyle float de�i�keninin kullan�m�n� sa�lar//
	struct hacimPrizma
	{
		tipim en; //float de�erinde en de�i�kenini yap�ya ekledik//
		tipim boy; //float de�erinde boy de�i�kenini yap�ya ekledik//
		tipim yukseklik; //float de�erinde yukseklik de�i�kenini yap�ya ekledik//
		tipim hacim; //float de�erinde hacim de�i�kenini yap�ya ekledik//
	};
	
	typedef struct hacimPrizma prizma; //hacimPrizma yerine prizma isminin kullan�lmas�n� sa�lar//
	prizma prizmaN; //prizma yap�s�n� (bu yap�n�n di�er ad� hacimPrizma) prizmaN olarak isimlendirmeyi yapt�k//
}
