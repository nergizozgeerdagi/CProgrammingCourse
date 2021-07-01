#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	float xEkseni; //float yerine xEkseni yazmak için//
	float yEkseni; //float yerine yEkseni yazmak için//
} 
nokta;//struct'ý nokta olarak adlandýrdýk//

int main()
{
	nokta koordinat; //nokta yapýsýný koordinat olarak adlandýrdýk//
	koordinat.xEkseni=2.68686; //koordinat yapýsýndaki xEkseni deðerini girdik//
	koordinat.yEkseni=6.47483; //koordinat yapýsýndaki yEkseni deðerini girdik//
	printf("Koordinat sistemine girilen degerlerde \n x ekseni: %.2f \n y ekseni: %.2f",koordinat.xEkseni,koordinat.yEkseni);
	//ikisini de çýktýda bastýrdýk//
	return 0;
}
