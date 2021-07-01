#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char ad[30], soyad[20];
	char isim_soyad[50];
	printf( "Ad ve soyadinizi giriniz: " );
	scanf( "%s%s", ad, soyad );
	strcat( isim_soyad, ad );
	strcat( isim_soyad, " " );
	strcat( isim_soyad, soyad );
	printf( "Tam Isim: %s\n", isim_soyad );
	return 0;
}

