#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//ogrenci_1'e atadýðýmýz deðiþkenleri ogrenci_2'ye de birbirlerine eþitleyerek atama yapmak//
int main()
{
	struct ogrenci_bilgi
	{
    	int no;
    	char ad[10];
    	char soyad[10];
    	int yas;
    };

    struct ogrenci_bilgi ogrenci_1,ogrenci_2;
    ogrenci_1.no=598;
    strcpy(ogrenci_bilgi.ad,"Nergiz");
    strcpy(ogrenci_bilgi.soyad,"Ozge");
    ogrenci_1.yas=18;
    ogrenci_2=ogrenci_1;
    return 0;
}
