#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ktr1[10],ktr2[10];
	int sonuc;
	printf("1. katar:");gets(ktr1);
	printf("2. katar:");gets(ktr2);
	sonuc = strcmp(ktr1,ktr2);
	if(sonuc>0) puts("1. katar 2.den buyuk");
	else if(sonuc<0) puts("2. katar 1.den buyuk");
	else puts("1. katar 2. katara esit");
	return 0;
}

