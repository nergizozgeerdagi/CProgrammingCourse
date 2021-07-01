#include <stdio.h>
#include <stdlib.h>

void main()
{
	int x, y, a=5;
	float pi = 3.14;
	double w;
	x = pi; //otomatik dönüþtürme
	y = (int)pi; //tip dönüþtürme
	w = (double)a; //tip dönüþtürme
	printf("x = %d , y = %d , w = %.2f\n",x,y,w);
}
