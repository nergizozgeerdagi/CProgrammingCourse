#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ktr[100];
	puts("Birseyler yazin:");
	gets(ktr);
	printf("%s %d karakterden olusmustur.", ktr, strlen(ktr));
	return 0;
}
