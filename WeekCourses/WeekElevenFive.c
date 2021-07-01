#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char isim[20];
	int i;
	printf("Isim giriniz: ");
	scanf("%s", isim);
	printf("Girdiginiz isim: ");
	for(i = 0; isim[i]!='\0'; i++)
	printf("%c", isim[i]);
	printf("\n");
	return 0;
}
