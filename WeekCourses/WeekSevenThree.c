#include <stdio.h>
#include <stdlib.h>
//Rakam de�eri kadar ekrana piramitsel tuhaf �ekil yazd�rma//
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
//��TE �OK U�RA�TI�IM O KAL�TEL� KOD//
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
