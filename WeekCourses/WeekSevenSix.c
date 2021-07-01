#include <stdio.h>
#include <stdlib.h>
int main()
{
	int taban, yukseklik;
	float alan;
	printf("Ucgenin tabanini giriniz: ");
	scanf("%d",&taban);
	printf("Ucgenin yuksekligini giriniz: ");
	scanf("%d",&yukseklik);
	alan = taban * yukseklik / 2.0;
	printf("\n Ucgenin alanike %.2f dir \n",alan);
	return 0;
}
