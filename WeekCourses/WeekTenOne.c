#include <stdio.h>
#include <stdlib.h>

//dizilerde deðer atama//
int y [12];
int z [9];
int main() 
{
	y[0]=1;
	y[1]=24;
	y[2]=99;
	y[3]=27;
	printf("Ilk sayi: %d\n",y[0]);
	printf("Ikinci sayi: %d\n",y[1]);
	printf("Ucunsu sayi: %d\n",y[2]);
	printf("Dorduncu sayi: %d\n",y[3]);
	z[0]=0;
	z[1]=-7;
	z[2]=76;
	printf("Tum sayilar: %d %d %d\n",z[0],z[1],z[2]);
	return 0;
}
