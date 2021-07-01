#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//ARMSTRONG SAYILARINI BULMA (ARMSTRONG= 3 BASAMAKLI SAYI)//
//ÖRNEÐÝN 370 SAYISI ARMSTRONG SAYISI OLARAK 3ÝN KÜPÜ + 7NÝN KÜPÜ + 0IN KÜPÜDÜR//

int main() 
{
	int s,f,n,sayi,kup=0,r=1;
	char z = 'f';
	printf("Armstrong Sayilari\n");
	printf("-------------\n");
	for(s=1; s<=9; s++)
	{
		for(f=0; f<=9; f++)
		{
			for(n=0; n<=9; n++)
			{
				sayi = 100*s + 10*f + n;
				kup = pow(s,3)+pow(f,3)+pow(n,3);
				if(sayi==kup)
				printf("%d.sayi = %d\n",r++,sayi);
				printf("z= %d",z);
			}
		}
	}
	return 0;
}
