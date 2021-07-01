#include <stdio.h>
#include <stdlib.h>

//YILDIZ PÝRAMÝT, ARTAN-AZALAN SIRASIYLA//

int main() 
{
	int i,j;
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n");
	
	int k,l;
	for(k=7; k>0; k--)
	{
		for(l=1; l<=k; l++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
