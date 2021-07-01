#include <stdio.h>
#include <stdlib.h>

	struct ogrenciBilgi
	{
		int no; //integer deðerinde numara//
		char ad[30]; //en fazla 30 karakter deðerinde ad//
		char soyad[30]; //en fazla 30 karakter deðerinde soyad//
		int yas; //integer deðerinde yaþ//	
	};
	
int main ()
{
	struct ogrenciBilgi ogrenciNergiz={99,"Nergiz","Erdagi",18};
	printf("%d \t %s \t %s \t %d",ogrenciNergiz.no,ogrenciNergiz.ad,ogrenciNergiz.soyad,ogrenciNergiz.yas);
	return 0;
}
