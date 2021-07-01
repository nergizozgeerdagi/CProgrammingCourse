#include <stdio.h>
#include <stdlib.h>

int main()
{
	char sifre[20];
	printf("SIFRE : ");
	scanf("%s",sifre);
	if(strcmp(sifre,"deneme")==0)
		puts("sifre dogru girildi");
	else
		puts("sifre yanlis!");
	return 0;
}

