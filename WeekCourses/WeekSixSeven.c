#include <stdio.h>
int main() 
{
	int x;
	for (x=1; x<=10; x++)
	{
		if (x==5)
		{
			break;
		}
		printf("%d\n",x);
	}
	printf("\n%d. adimda dongunun disina cikildi.",x);
	
	int y;
	for (y=1; y<=10; y++)
	{
		if (y==5)
		{
			continue;
		}
		printf("%-1d",y);
	}
	return 0;
}
