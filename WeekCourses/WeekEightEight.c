#include <stdio.h>
#include <stdlib.h>
int ebs(int, int, int ); /* fonksiyon ön bildirimi */
int main()
{
	int a, b, c;
	printf("3 adet tam sayi giriniz: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("Girilen sayilarin en buyugu: %d\n", ebs(a, b, c));
	return 0;
}
int ebs(int x, int y, int z)
{
	int ebs = x;
	if (y > ebs)
	ebs = y;
	if (z > ebs)
	ebs = z;
	return ebs;
}
