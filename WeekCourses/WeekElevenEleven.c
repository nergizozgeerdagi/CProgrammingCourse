#include <stdio.h>
#include <stdlib.h>

char katar[50];
int i;
int main()
{
	strcpy(katar, "Azerbaycan");
	strcat(katar, " ve Turkiye");
	for(i=0; katar[i]; i++)
		printf("%c", katar[i]);
	return 0;
}
