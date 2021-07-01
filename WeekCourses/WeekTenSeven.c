#include <stdio.h>
#include <stdlib.h>
// dizi öðelerini toplama //
int main() 
{
	int i , toplam=0;
	int a[8]={2,3,0,-6,55,987,423,-2};
	for(i=0; i<8; i++)
		toplam = toplam + a[i];
	printf("Dizideki elemanlarin toplami: %d\n",toplam);
	return 0;
}
