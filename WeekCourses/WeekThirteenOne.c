#include <stdio.h>
#include <stdlib.h>

void main()
{
	int x, y, a=5;
	float pi = 3.14;
	double w;
	x = pi; //otomatik dönüştürme
	y = (int)pi; //tip dönüştürme
	w = (double)a; //tip dönüştürme
	printf("x = %d , y = %d , w = %.2f\n",x,y,w);
}
