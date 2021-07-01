#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char mesaj[20] = "Selam "; /* 1. katar */
	char isim[10]; /* 2. katar */
	printf("Adiniz ? : ");
	scanf("%s",isim);
	strcat(mesaj, isim); /* ekle */
	printf("%s\n",mesaj);
	return 0;
}
