#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef enum renkler //enumlarda sýralama 0'dan baþlar// 
{
	kirmizi, //0//
	siyah, //1//
	mor, //2//
	beyaz //3//
}
renk; //enumu renk olarak isimlendirdik//

int main() 
{
	renk Nergiz = kirmizi;
	printf("Nergiz'in sectigi rengin enumdaki sirasi: %d",Nergiz);
	printf("\n\n");
	renk Ozge = beyaz;
	printf("Ozge'nin sectigi rengin enumdaki sirasi: %d",Ozge);
	return 0;
}
