#include <stdio.h>
#include <stdlib.h>
//G�zel bir �rnek soru//
int main()
{
	char il[]="Ankara";
	printf(il);
	printf("\n%s", il);
	printf("\n%s", il+3);
	//%.xs ilk x karakteri al//
	printf("\n%.5s", il);
	return 0;
}
