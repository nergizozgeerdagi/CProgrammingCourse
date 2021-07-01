#include <stdio.h>
#include <stdlib.h>

double hipotenusBul (float a, float b)
{
	double hipo;
	hipo = sqrt(a*a + b*b);
	return hipo;
}

int main() 
{
	printf("Hipotenus uzunlugu: %f" , hipotenusBul(9,12));
	return 0;
}
