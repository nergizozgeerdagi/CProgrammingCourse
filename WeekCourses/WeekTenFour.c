#include <stdio.h>
#include <stdlib.h>
//dizinin girilen elemanýný bulma challenge//
int main() 
{
	int a[10];
	int i;
	for(i=0; i<5; i++)
	{
		printf("%d. sayiyi giriniz: ",i+1);
		scanf("%d", &a[i]); //buralar çokomelli//
	}
	printf("\n");
	printf("Ilk girdiginiz sayi: %d\n", a[0]);
	printf("Ucuncu girdiginiz sayi: %d\n", a[2]);
	printf("Sonuncu girdiginiz sayi: %d\n", a[4]);
	return 0;
}
