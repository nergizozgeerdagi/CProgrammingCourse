#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//diziye girilen elemanlarýn karekokunu bulmaca//
	int i;
	float karekok;
int main() 
{
	int a[4]={92,23,44,55};
	for (i=0; i<=3; i++)
	{
		karekok = sqrt((float) a[i]);
		printf("%d sayisinin karekoku: %f\n",a[i],karekok);
	}
	return 0;
}
