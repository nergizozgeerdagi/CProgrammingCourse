#include <stdio.h>
#include <stdlib.h>

//FAHRENA�T'I DERECEYE �EV�R�C� YAPMA CHALLENGE//

double cevir(double n)
{
	return((n-32)/1.8);
}

int main()
{
	int F;
	double C;
	printf("Fahrenait olarak derece giriniz: ");
	scanf("%d",&F);
	C=cevir(F); //BU NED�R? HEMEN A�IKLIYORUM B�Z �STTE B�R �EV�R�C� FONKS�YON YAZDIK//
	//�EV�RMES�N� �STED���M�Z F'� G�T�R�P O FONKS�YONUN ���NE YAZIYORUZ VE SONRA C'YE E��TL�YORUZ KALDI�IMIZ YERDEN DEVAM//
	printf("%d F(derece) = %g C(derece) esittir\n",F,C);
	return 0;
}
