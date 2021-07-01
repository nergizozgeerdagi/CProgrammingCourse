#include <stdio.h>
#include <stdlib.h>
#define PI 3.141593
float daire(float y); /* fonksiyon ön bildirimi */
int main() /* ana program */
{
	float r, s;
	printf ("Dairenin yaricapini giriniz: ");
	scanf ("%f", &r);
	s = daire(r);
	printf("Dairenin alani: %6.2f dir.\n",s);
	return 0;
}
/* dairenin alanýný hesaplayan fonksiyon */
float daire(float y)
{
	float a;
	a = PI * y * y;
	return(a);
}
