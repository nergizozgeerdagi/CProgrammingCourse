#include <stdio.h>
#include <string.h>
//şehirlerin 1-81 arası adlarını ve sıcaklıklarını tutan yapı//
int main()
{
	struct sehir
	{
		char sehirAdi[20]; //şehir ismi (karakter)//
		int sicaklik; //tam sayı değerinden şehrin sıcaklığı//
	};
	
	struct sehir turkiye[82]; //turkiye dizisinin 81 ilini sırasıyla yapısına alır//
	
	//örneğin, sehirAdi: Adana, sicaklik: 36
	//         sehirAdi: Adıyaman, sicaklik: 32 
	// 1-81 arasını turkiye yapısının içinde 81 ili de ayrı ayrı gösterir //
	
	return 0;
}
