#include <stdio.h>
#include <stdlib.h>

long fibonacci (int);

int main()
{
	int n;
	printf("Bir n sayisi giriniz lutfen: ");
	scanf("%d" , &n);
	printf("%d. eleman: %ld" , n , fibonacci(n));
}

long fibonacci (int n)
{
	if (n==1 || n==0)
	return (n);
	else
	return fibonacci (n-1) + fibonacci (n-2);
}
