#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int m;
	for(m=0; m<=6; m++)
	{
		if(m==4) //E�er m=4 olursa//
		continue; //4� atla ve d�ng�ye devam et//
		printf("m= %d\n",m);
	}
	
	int l;
	l=1;
	while (l<=5)
	{
	
		if(l==3)
		continue;
		printf("l= %d\n",l);
		++l;
	}
	
	int i=0; ////
	while(i<=5)
	{
		if(i==3)
		
		printf("i= %d\n",i);
		++i;
		continue;
	}
	return 0;
}
