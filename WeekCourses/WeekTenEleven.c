#include <stdio.h>
#include <stdlib.h>
//iki boyutlu diziye de�er atama ve g�r�nt�leme//
char a[3] [3] = {1,2,3,4,5,6,7,8,9};
int i,j;
int main()
{
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("%d\t", a[i] [j] );
		}
		printf("\n");
	}
	return 0;
}

