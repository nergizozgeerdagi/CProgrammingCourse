#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char ktr[200];
	int i;
	puts("Bir seyler yazin");
	gets(ktr);
	for(i=0;ktr[i];i++); /* kosul ktr[i]!='\0' anlamindadir*/
		printf("yazilan %d karakterdir",i);
	return 0;
}
