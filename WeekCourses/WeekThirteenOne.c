#include <stdio.h>
#include <stdlib.h>

void main()
{
	int x, y, a=5;
	float pi = 3.14;
	double w;
	x = pi; //otomatik d�n��t�rme
	y = (int)pi; //tip d�n��t�rme
	w = (double)a; //tip d�n��t�rme
	printf("x = %d , y = %d , w = %.2f\n",x,y,w);
}
