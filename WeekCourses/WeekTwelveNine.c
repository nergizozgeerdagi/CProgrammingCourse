#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, N=5;
	int A[]={-1,1,-1,1,-1};
	for(i=0; i<N; i++)
	{
		A[i]=A[i]+A[i+1];
	}
	printf("%d\n",A[i]);
	//�LK VE SON DE�ER NED�R?
	//�LK DE�ER 0 SON DE�ER B�LEMEY�Z
}


