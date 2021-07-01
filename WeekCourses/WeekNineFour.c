#include <stdio.h>
#include <stdlib.h>

double ackermann (int m , int n)
{
	if (m==0)
	return n+1;
	else if (n==0)
	return ackermann(m-1,1);
	else
	return ackermann(m-1,ackermann(m,n-1));		
}

int main() 
{
	int a,b;
	printf("Iki negatif olmayan tam sayi giriniz: ");
	scanf("%d %d" , &a , &b);
	printf("A(%d,%d) = %g" , a , b , ackermann(a,b));
	return 0;
}
