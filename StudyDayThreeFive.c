#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//Ampersand iþareti ile klavyeden girilen tam sayý deðeri kadar yukarýdan aþaðýya doðru azalan piramit yapma//
void ampersand(int limit)
{
	int i;
	
	if(limit==0)
	{
		return 0;
	}
	else
	{
		for(i=0; i<limit; i++)
		{
			printf("&");
		}
		printf("\n");
		ampersand(limit-1);
	}
}

int main()
{
	int deger;
	printf("Piramit icin tam sayi degeri giriniz: ");
	scanf("%d",&deger);
	printf("\n\n\n");
	ampersand(deger);
}
