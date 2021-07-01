#include <stdio.h>
#include <stdlib.h>

long faktoriyel(long);

int main() 
{
	int i;
	for(i=0; i<=10; i++)
	printf("%2d! = %ld\n" , i , faktoriyel(i));
	return 0;
}
	long faktoriyel (long sayi)
	{
		if (sayi<=1)
			return 1;
		else
			return(sayi*faktoriyel(sayi-1));
	}
