#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 /*Bir buz pateni karþýlaþmasýnda,bir yarýþmacýnýn performansý 6.00 üzerinden puanlanarak 10 hakem tarafýndan
    deðerlendirilmektedir.Yarýþmacýnýn performans puaný ise hakemlerin vermiþ olduðu en düþük ve en yüksek puan
    atýlýp,geri kalan puanlarýn aritmetik ortalamasý alýnarak bulunmaktadýr.Yazacaðýnýz programda yarýþmacýnýn
    adý,soyadý performans puanýný hesaplayýp ekranda görüntüleyiniz.Performans hesaplamasýný tek parametreli
    bir fonksiyonda yazýnýz.Bu fonksiyon yarýþmacýya ait yapýyý parametre olarak almalý ve performans puanýný
    hesaplayarak geri deðerlendirilmelidir. Þimdi bunu saðlayan bir C programý yazalým.*/
struct yarismaciTip
{
	char isim[10],soyad[10];
	float puan[10],performans;
};

float puanHesap(struct yarismaciTip pat)
{
    int i;
    float sonuc=0;
    float max=0.0;
    float min=6.0;
    
    for(i=0;i<10;i++)
    {
        if(pat.puan[i]>max)
        {
            max=pat.puan[i];
        }
        
        if(pat.puan[i]<min)
        {
            min=pat.puan[i];
        }

        sonuc +=pat.puan[i];
    }

    sonuc=(sonuc-max-min)/8;
    return(sonuc);
}


int main()
{
    int i;
    struct yarismaciTip patenci;

    printf("Yarismacinin adi\n");
    scanf("%s",&patenci.isim);

    printf("Soyadi\n");
    scanf("%s",&patenci.soyad);

    printf("Hakem puani\n");

    for(i=0;i<10;i++)
    {
        scanf("%f",&patenci.puan[i]);
    }

    patenci.performans=puanHesap(patenci);

    printf("Performans puani = %f",patenci.performans);
    return 0;
}
