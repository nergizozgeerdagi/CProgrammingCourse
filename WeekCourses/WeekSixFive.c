#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j;
	for(i=1; i<8; i++)
	{
		for (j=1; j<=i; j++)
		{
			printf("N");
		}
		printf("\n");
	}
	
	int c;
	for(c=0; c<=5; c++)
	{
		if(c==2)
		break;
		printf("i= %d\n",c);
	}	
	return 0;
}
