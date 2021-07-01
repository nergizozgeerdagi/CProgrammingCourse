#include <stdio.h>
#include <stdlib.h>

// Carpim tablosu yapma vakti!//

int main() 
{
	int i,j;
	for (i=1; i<=10; i++)
	{
		for(j=1; j<=10; j++)
		{
			printf("%d*%d = %d\n",j,i,j*i);
		}
		printf("\n");
	}
	
	return 0;
}
