#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi1,sayi2;
    int buyuk,kucuk;
    int kalan;

    do
    {
        printf("Lütfen 2 adet sayý giriniz...\n");
        scanf("%d%d",&sayi1,&sayi2);


    }while (sayi1 <= 0 || sayi2 <= 0);
    if (sayi1 > sayi2)
    {
        buyuk = sayi1;
        kucuk = sayi2;
    }
    else
    {
        buyuk = sayi2;
        kucuk = sayi1;
    }

    kalan = buyuk % kucuk;

    while (kalan != 0)
    {
        if (kalan >= kucuk)
        {
            buyuk = kalan;
        }
        else
        {
            buyuk = kucuk;
            kucuk = kalan;
        }
        kalan = buyuk % kucuk;

    }
    printf("Ebob(%d,%d) : %d",sayi1,sayi2,kucuk);
    return 0;
}
