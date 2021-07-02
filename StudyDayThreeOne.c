#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void listele (int sayi)
{
	if(sayi==0)
	{
		printf("%d",sayi);
	}
	else
	{
		printf("%d\n",sayi);
		listele(sayi-1);
	}
}

int main()
{
	int n;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&n);
	listele (n);
	return 0;
}
