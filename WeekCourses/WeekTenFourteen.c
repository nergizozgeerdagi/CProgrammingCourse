#include <stdio.h>
#include <stdlib.h>

const int CITY = 2; //Girilen þehir sayýsý sabitleniyor.
const int WEEK = 7;
int main()
{
	int i, j;
	int temperature[CITY][WEEK];
	for (i = 0; i < CITY; ++i) 
	{
		for(j = 0; j < WEEK; ++j) 
		{
			printf("Sehir %d, Gun %d: ", i+1, j+1);
			scanf("%d", &temperature[i][j]);
		}
	}
	printf("\nGosterilen Deger : \n\n");
	for (i = 0; i < CITY; ++i) 
	{
		for(j = 0; j < WEEK; ++j)
		{
			printf("Sehir %d, Gun %d = %d\n", i+1, j+1, temperature[i][j]);
		}
	}
	return 0;
}
