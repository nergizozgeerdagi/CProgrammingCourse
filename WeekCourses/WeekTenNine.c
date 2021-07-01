#include <stdio.h>
#include <stdlib.h>
//dizilerin boyunu bulma (sizeof(x)/sizeof(x[0])) //
int main() 
{
	char ch;
	int i;
	float x;
	double w;
	int a[5];
	double b[6];
	printf("Char tipine bellekte ayrilan yer : = %d byte'dir \n", sizeof(ch));
	printf("int tipine bellekte ayrilan yer : = %d byte'dir \n", sizeof(i));
	printf("float tipine bellekte ayrilan yer : = %d byte'dir \n", sizeof(x));
	printf("double tipine bellekte ayrilan yer : = %d byte'dir \n", sizeof(w));
	printf("int tipinde a array'ine' bellekte ayrilan yer : = %d byte'dir \n", sizeof(a));
	printf("double tipinde b array'ine' bellekte ayrilan yer : = %d byte'dir \n", sizeof(b));
	printf("double tipinde b array'in boyu : = %d dir. \n", sizeof(b)/sizeof(b[0]));
	printf("double tipinde a array'in boyu : = %d dir. \n", sizeof(a)/sizeof(a[0]));
	return 0;
}
