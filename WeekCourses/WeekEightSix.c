#include <stdio.h>
#include <stdlib.h>

void fonk(); //fonksiyonun olduðunu gösteren ön bildirim//

int main()
{
	int x;
	x=10;
	printf("Ana programdaki x degeri: %d\n",x);
	fonk();
	printf("Ana programdaki x degeri: %d\n",x);
	return 0;
}

void fonk()
{
	int x;
	x=100;
	printf("Fonksiyondaki x degeri: %d\n",x);
}
