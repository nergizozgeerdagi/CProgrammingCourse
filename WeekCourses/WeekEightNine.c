#include <stdio.h>
#include <stdlib.h>
double usAl(double,double);
void main() 
{
	double a,b;
	printf("Taban ve us degeri giriniz: ");
	scanf("%lf %lf", &a,&b);
	printf("%.2f",usAl(a,b));
}

double usAl(double x,double y)
{
	int sayac;
	double sonuc = 1.0;
	for(sayac=0; sayac<y; sayac++)
	{
		sonuc *= x;
	}
	return sonuc;
}
