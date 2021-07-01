#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int a[5],i;
	printf("5 tane sayi giriniz:\n");
	for (i=0; i<5; i++)
		scanf("%d", &a[i]);
	printf("\n Girilen sayilar sondan basa dogru: \n");
	for(i=4; i>=0; i--)
		printf("%d\n", a[i]);
	return 0;
}
