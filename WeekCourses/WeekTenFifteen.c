#include <stdio.h>
#include <stdlib.h>

//gets() ve puts() fonksiyonlar�//
int main()
{
	char name[30];
	printf("Isim giriniz: ");
	gets(name);
	printf("Name: ");
	puts(name);
	return 0;
}
