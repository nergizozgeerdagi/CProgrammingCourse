#include <stdio.h>
#include <stdlib.h>

static int fonk(int i) //i=3 ���N HANG� DE�ER� D�ND�R�R//
{
	if (i<2)
		return 1;
	else
		return (i*fonk(i-1));
	//KAC KEZ DONDURUR=6//
	//3*fonk(2)
	//fonk(2)=2*fonk(1)
	//fonk(1)=1
	//YER�NE KOYUNCA 
	//fonk(2)=2
	//fonk(3)=3*2=6
}

int main()
{
	int fonk(int i);
}
