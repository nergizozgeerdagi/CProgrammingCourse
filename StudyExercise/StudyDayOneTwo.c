#include <stdio.h>
#include <string.h>

int main()
{
	struct tarih
	{
		int gun;
		char ay[12];
		int yil;
	};
	
	struct calisanBilgi
	{
		int sicilNo;
		char isim[40];
		char adres[50];
		struct tarih iseGiris;
		double maas;
		double maasZam;
	};
	
	struct calisanBilgi Nergiz;
	return 0;
}
