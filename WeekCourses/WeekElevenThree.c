#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char dizi[7] = {'S', 'e', 'l', 'a', 'm', '!', '\0'};
	int i;
/* Her bir karakteri ayrý ayrý alt alta yaz */
	printf("Dizi elemanlari:\n");
	for (i=0; i<7; i++)
	printf("dizi[%d] icerigi: %c\n", i, dizi[i]);
	printf("\n");
/* 1. yöntem: her elemaný yanyana yaz */
	printf( "Butun dizi (1.yontem): ");
	for (i=0; i<7; i++)
	printf("%c", dizi[i]);
/* 2. Yöntem: bütün diziyi yaz */
	printf("\nButun dizi (2.yontem): ");
	printf("%s\n", dizi);
	printf("\n"); 
	return 0;
}
