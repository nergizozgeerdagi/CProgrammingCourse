#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Karakterleri tersten yazd�rma strrev() ile//
int main()
{
	char i, sesli[]= {'a', 'e', 'i', 'o', 'u', '\0'};
	strrev(sesli);
	for(i=0; i<5; i++)
	{
		printf("%c", sesli[i]);
	}
	return 0;
}
