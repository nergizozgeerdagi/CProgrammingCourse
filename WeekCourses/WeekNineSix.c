#include <stdio.h>
#include <stdlib.h>

// static yaz�nca 29+5=34 hala bellekte kal�r, tekrar git fonksiyonuna y�nlendirince kald��� yerden yani 34'e 5 artt�rarak//
//devam eder// 

int git() 
{
	static int a=29;
	a+=5;
	return a;
}

int main()
{
	int b;
	b=git();
	printf("b: %d\n", b);
	b=git();
	printf("b: %d", b);
}
