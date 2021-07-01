#include <stdio.h>
#include <stdlib.h>
#define m 3
#define n 3
//i=satýr m=sütun 
int main()
{
	int i, j, k, A[m][n], B[m][n], C[m][n];
	puts("Iki matrisin carpimi: ");
	puts("\n A matrisinin elemanlarini giriniz: ");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("A(%d,%d) =", i+1, j+1);
			scanf("%d", &A[i][j]);
		}
	}
	puts("\n B matrisinin elemanlarini giriniz: ");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("B(%d,%d) =", i+1, j+1);
			scanf("%d", &B[i][j]);
		}
	}
	puts("\n A*B matrisinin elemanlari: ");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			C[i][j]=0;
			for(k=0; k<n; k++)
			{
				C[i][j]=C[i][j]+A[i][k]*B[k][j];
			}
			printf("C(%d,%d)= %d\n", i+1, j+1, C[i][j]);
		}
	}
	return 0;
}
