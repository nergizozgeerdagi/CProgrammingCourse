#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum
{
	ocak=1,
	subat,mart,nisan,mayis,haziran,
	temmuz,agustos,eylul,ekim,
	kasim,aralik
} 
aylar;

void ayGoster(aylar N)
{
	switch(N)
	{
		case ocak:
			printf("OCAK");
			break;
		case subat:
			printf("SUBAT");
			break;
		case mart:
			printf("MART");
			break;
		case nisan:
			printf("NISAN");
			break;
		case mayis:
			printf("MAYIS");
			break;
		case haziran:
			printf("HAZIRAN");
			break;
		case temmuz:
			printf("TEMMUZ");
			break;
		case agustos:
			printf("AGUSTOS");
			break;
		case eylul:
			printf("EYLUL");
			break;
		case ekim:
			printf("EKIM");
			break;
		case kasim:
			printf("KASIM");
			break;
		case aralik:
			printf("ARALIK");
			break;
		default:
			printf("BOYLE BIR AY YOK!");
			break;
			
	}
}

int main()
{
	aylar N=aralik;
	ayGoster(N);
	return 0;
}
