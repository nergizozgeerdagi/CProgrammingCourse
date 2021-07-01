#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char katar[11];
	int i;
	strcpy(katar, "Nergiz");
	for(i=0;katar[i];i++) /* kosul katar[i]!='\0' anlamindadir*/
		printf("%c\n", katar[i]);
	return 0;
}
