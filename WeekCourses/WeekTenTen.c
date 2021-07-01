#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int a[] = {0,1,2,3,4,5,6,7,8,9,10,20};
	int boy = sizeof(a)/sizeof(a[9]); 
	//neye bolersek bolelim (a[0] veya a[7]... herhangi bir elemanina boldugumuzde boyunu buldurur//
	printf("A dizisinin boyu(uzunlugu): %d'dir.\n",boy);
	return 0;
}
