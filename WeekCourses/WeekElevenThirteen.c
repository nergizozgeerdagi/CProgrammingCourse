#include <stdio.h>
#include <stdlib.h>

char katar1[50], katar2[50];
int main()
{
	strcpy(katar1, "Kazakistan");
	strcpy(katar2, "Kazak");
	if(strcmp(katar1,katar2))
		printf("Katarlar birbirinden farklidir.");
	else
		printf("Katarlar birbirinin aynidir.");
	return 0;
}
