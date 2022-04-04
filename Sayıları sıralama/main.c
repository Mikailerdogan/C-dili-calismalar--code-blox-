#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
    /*int sayi1,sayi2,sayi3,kucuk,buyuk,carpim,toplam,ortalama;
    printf("Lütfen sayý giriniz..\n");
    scanf("%d%d%d",&sayi1,&sayi2,&sayi3);
    toplam = sayi1 + sayi2 + sayi3;
    carpim = sayi1 * sayi2 + sayi3;
    ortalama = toplam / 3;
    printf("Toplam : %d\n",toplam);
    printf("Carpým : %d\n",carpim);
    printf("Ortalama : %d\n",ortalama);

    kucuk = sayi1;
    if (sayi2 < kucuk)
    {
        kucuk = sayi2;
    }
    if (sayi3 < kucuk)
    {
        kucuk = sayi3;
    }
    printf("Kucuk sayi = %d\n",kucuk);
    buyuk = sayi1;
    if (sayi2 > buyuk)
    {
        buyuk = sayi2;
    }
    if (sayi3 > buyuk)
    {
        buyuk = sayi3;
    }
    printf("Buyuk = %d",buyuk);*/
   /* int sayi;
    printf("Lütfen sayý giriniz..\n");
    scanf("%d",&sayi);

    if (sayi % 2 == 0)
    {
        printf("Çift sayi : %d",sayi);
    }
    else
    {
        printf("tek sayi : %d",sayi);
    }*/

    char    harf;
    printf("Lütfen bir harf giriniz...\n");
    scanf("%c",&harf);

    if (harf <= 'Z' && harf >= 'A')
    {
        printf("Büyük Harf : %c",harf);
    }
    if (harf <= 'z' && harf >= 'a')
    {
        printf("Kucuk Harf : %c",harf);
    }
    else
    {
        printf("lütfen harf giriniz...");
    }

    return 0;
}
