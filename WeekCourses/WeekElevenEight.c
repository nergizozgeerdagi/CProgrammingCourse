#include <stdio.h>
#include <stdlib.h>

main() 
{
	char ad[10],soyad[20];
	printf("ADI: ");
	gets(ad);
	printf("SOYADI : ");
	gets(soyad);
	printf("%c. %s",ad[0],soyad);
	return 0;
}
