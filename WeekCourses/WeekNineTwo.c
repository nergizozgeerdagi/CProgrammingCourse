#include <stdio.h>
#include <stdlib.h>

void swap(int i , int j)
{
	printf("Swap yapmadan once: i = %d , j = %d\n" , i , j);
	int t = i;
	i = j;
	j = t;
	printf("Swap yaptiktan sonra: i = %d , j = %d\n" , i , j);
}

int main() 
{
	int t,i,j;
	printf("Iki tamsayi giriniz mlsf: ");
	scanf("%d %d" , &i , &j);
	swap(i,j);
	return 0;
}
