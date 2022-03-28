#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    int secim;
    float toplam;
    float porsiyon;


    printf("   MENÜ\t   SÝPARÝÞ KODU\tFÝYATI\n");
    printf("Baþlangýçlar\t1\t5.5 TL\n");
    printf("Ara Sýcaklar\t2\t7.5 TL\n");
    printf("Salatalar\t3\t12 TL\n");
    printf("Ana yemekler\t4\t17.75 TL\n");
    printf("Tatlýlar\t5\t11.25 TL\n");
    printf("Ýçicekler\t6\t2.25 TL\n");
menu:
    printf("Lütfen yemek istediðiniz ürünün sipariþ kodunu giriniz...\n");
    printf("Menüden çýkýþ yapmak için -1 giriniz...\n");
    scanf("%d",&secim);



    if (secim == -1)
    {
        goto cikis;
    }
    if (secim >= 1 && secim <= 6)
    {
        printf("Lütfen kaç porsiyon istediðinizi belirtiniz...\n");
        scanf("%f",&porsiyon);

    }

    switch(secim)
    {
        case 1 : toplam += porsiyon * 5.5; printf("Toplam tutar = %.1f TL\n",toplam); break;
        case 2 : toplam += porsiyon * 7.5; printf("Toplam tutar = %.1f TL\n",toplam); break;
        case 3 : toplam += porsiyon * 12; printf("Toplam tutar = %.1f TL\n",toplam); break;
        case 4 : toplam += porsiyon * 17.75; printf("Toplam tutar = %.1f TL\n",toplam); break;
        case 5 : toplam += porsiyon * 25; printf("Toplam tutar = %.1f TL\n",toplam); break;
        case 6 : toplam += porsiyon * 2.25; printf("Toplam tutar = %.1f TL\n",toplam); break;
        default : printf("Sipariþ kodu yanlýþ...\n"); break;

    }
    goto menu;
    cikis:
        printf("Sipariþiniz Tamamlandý...\n");
    printf("Toplam tutar = %.1f TL\n ",toplam);



    return 0;
}
