#include <stdio.h>
#include <stdlib.h>
//STR�NG DE�ER�NDE D�Z� ELEMANLARINI SIRADAN YAZDIRMA//
int main()
{
	char a[4][15]={"Kedi", "Kus", "At", "Kuzu"};
	int i;
	printf("Dizinin: \n");
	for (i=0; i<4; i++)
	{
		printf("%s\t %d. Elemanidir.\n",a[i],i);
	}
	return 0;
}
