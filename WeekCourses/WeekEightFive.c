#include <stdio.h>
#include <stdlib.h>

void carp(int x, int y); //ön bildirim challenge//

int main() 
{
	carp(10,20);
	carp(5,6);
	carp(9,8);
	carp(12,25);
	carp(8,12);
	return 0;
}

void carp(int x, int y) //fonksiyon tanýmlamasý//
{
	printf("%2d * %2d = %3d\n",x,y,x*y);	
}


	
