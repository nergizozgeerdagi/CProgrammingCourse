#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char sifre[8];
	int sonuc, hak=3;
	while( hak-- > 0 )
	{
		printf("Sifre : ");
		gets(sifre); /* þifreyi al */
		sonuc = strcmp(sifre,"elma%xj4");
		if( sonuc==0 ) 
		{ /* þifre kontrol */
			puts("sifre dogru");
			break;
		}
		else
			puts("sifre yanlis");
	}
	return 0;
}
