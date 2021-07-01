#include <stdio.h>
#include <stdlib.h>

// static yazýnca 29+5=34 hala bellekte kalýr, tekrar git fonksiyonuna yönlendirince kaldýðý yerden yani 34'e 5 arttýrarak//
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
