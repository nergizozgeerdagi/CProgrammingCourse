#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	float xEkseni; //float yerine xEkseni yazmak i�in//
	float yEkseni; //float yerine yEkseni yazmak i�in//
} 
nokta;//struct'� nokta olarak adland�rd�k//

int main()
{
	nokta koordinat; //nokta yap�s�n� koordinat olarak adland�rd�k//
	koordinat.xEkseni=2.68686; //koordinat yap�s�ndaki xEkseni de�erini girdik//
	koordinat.yEkseni=6.47483; //koordinat yap�s�ndaki yEkseni de�erini girdik//
	printf("Koordinat sistemine girilen degerlerde \n x ekseni: %.2f \n y ekseni: %.2f",koordinat.xEkseni,koordinat.yEkseni);
	//ikisini de ��kt�da bast�rd�k//
	return 0;
}
