#include <stdio.h>
#include <stdlib.h>

// dizi elemanlarýný toplamak // 
int i, toplam=0;
int main() 
{
	int a[5]={7,1,2,-99,5};
	for(i=0; i<=4; i++)
		toplam+=a[i];
	printf("Dizideki sayilar toplami: %d",toplam);
	return 0;
}
