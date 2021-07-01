#include <stdio.h>
#include <stdlib.h>

long fonk (long);

int main() 
{
	int i;
	printf("Faktoriyeli hesaplanacak sayiyi giriniz: ");
	scanf("%d", &i);
	printf("%d! = %ld\n" , i , fonk(i));
	return 0;
}

long fonk (long sayi)
{
	if (sayi<=1)
	return 1;
	else
	return (sayi*fonk(sayi-1));
}
