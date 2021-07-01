#include <stdio.h>
#include <stdlib.h>

int fonk1(int a, int b)
{
	a=a+1;
	b=b+(a/b);
	printf("a: %d b: %d", a, b);
	return b;
}

int main()
{
	fonk1(3, 2);
}

