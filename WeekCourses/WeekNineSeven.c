#include <stdio.h>
#include <stdlib.h>
// register+auto+static ayn� anda kullanal�m//
//auto'yu yazmad�k zaten yazmad���m�z s�rece auto olarak tan�mlan�r//
int main() 
{
	register int sayac;
	void hesap();
	for (sayac=1; sayac<=4; sayac++)
	{
		hesap();
	}
	return 0;
}

void hesap()
{
	static int b=-4;
	int a=2; //burada a auto olarak otomatikmen tan�mlanm��t�r//
	printf("a: %d , b: %d\n",a,b);
	a=a+2;
	b=b+2;
}
