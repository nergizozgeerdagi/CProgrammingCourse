#include <stdio.h>
#include <stdlib.h>

char katar [4] [3] ;
int i,j;
int main()
{
	for (i=0; i<3; i++) /* Katar�n i�i dolduruluyor */
		for (j=0; j<4; j++)
			katar[i] [j]=i*j;
	{
		for (i=0; i<3; i++) /* Katar Yazd�r�l�yor */
		{
			for (j=0; j<4; j++)
				printf("%d\t", katar[i] [j]);
				printf("\n");
		}
	}
	return 0;
}

