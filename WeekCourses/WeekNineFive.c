#include <stdio.h>
#include <stdlib.h>
int nero(); //auto kullansak da kullanmasak da deðiþen bir þey yok//
int main() 
{
	auto int a,b,c;
	a=5,b=12;
	c=a*b;
	printf("Iki sayinin carpimi: %d\n",c);
	nero();
	return 0;
}

int nero()
{
	int a,b,c;
	a=5,b=12;
	c=a*b;
	printf("Iki sayinin carpimi: %d",c);
}
