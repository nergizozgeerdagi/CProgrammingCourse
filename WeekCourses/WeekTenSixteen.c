#include <stdio.h>
#include <stdlib.h>
#define m 2
#define n 2
//2 MATRÝSÝN TOPLAMI HESAPLAMA//
int main()
{
	int i, j, A[m][n], B[m][n], C[m][n];
	puts("iki matrisin toplami:"); // printf eþdeðeri printf("iki matrisin toplami:");
	puts("\nA matrisinin elemanlarini giriniz:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("A(%d,%d)=",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	puts("\nB matrisinin elemanlarini giriniz:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("B(%d,%d)=",i+1,j+1);
			scanf("%d",&B[i][j]);
		}
	}
	puts("\nA+B matrisinin elemanlari:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			C[i][j] = A[i][j] + B[i][j];
			printf("C(%d,%d)=%d\n",i+1,j+1,C[i][j]);
		}
	}
	return 0;
}
