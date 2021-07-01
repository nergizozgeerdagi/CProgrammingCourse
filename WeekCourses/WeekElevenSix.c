#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char ktr[20];
	int i, sayac = 0;
	printf("Bir seyler yazin: ");
	scanf("%s",ktr);
	for(i=0;ktr[i];i++)
		if( ktr[i]=='n')
			sayac++;
	printf("yazilanlarin icinde %d tane n harfi var",sayac);
	return 0;
}
