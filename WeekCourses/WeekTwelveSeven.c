#include <stdio.h>
#include <stdlib.h>

void Test(int i) //i=3 ���N HANG� DE�ER� D�ND�R�R//
{
	printf("%d",i*(i/4));
}

int main()
{
	Test(3);
}
