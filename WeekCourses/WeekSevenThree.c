#include <stdio.h>
#include <stdlib.h>
//Rakam değeri kadar ekrana piramitsel tuhaf şekil yazdırma//
int main() 
{
	int s,a;
	for(s=1; s<10; s++)
	{
		for(a=1; a<=s; a++)
		{
			printf("%d",s);
		}
		printf("\n");
	}
	
	printf("\n");
//İŞTE ÇOK UĞRAŞTIĞIM O KALİTELİ KOD//
	int n,e;
	for(n=6; n<10; n++)
	{
		for(e=1; e<=n; e++)
		{
			printf("%d",e);
		}
		printf("\n");
	}
	return 0;
}
