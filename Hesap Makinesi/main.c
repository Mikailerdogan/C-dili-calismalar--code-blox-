#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
    int secim;
    float sayi1,sayi2;
    menu:
    printf("Yapmak istediðiniz iþlemi seçiniz...\n");
    printf("1.Toplama\n2.Çýkarma\n3.Çarpma\n4.Bölme\n5.Karekök\n6.Kuvvet\n");
    printf("Çýkýþ yapmak için -1 deðerini giriniz...\n");
    scanf("%d",&secim);


    if (secim == -1)
        {
            goto cikis ;
        }

    if (secim < 0 && secim > 6) {
    printf("Ýþlem yapmak istediðiniz sayýlarý giriniz...\n");
                scanf("%f\n%f",&sayi1,&sayi2);


    }
    switch(secim)
    {
        case 1 : printf("Toplamý : %.1f",sayi1 + sayi2); break;
        case 2 : printf("Çýkarma : %.1f",sayi1 - sayi2); break;
        case 3 : printf("Çarpma : %.1f",sayi1 * sayi2);break;
        case 4 : printf("Bölme : %.1f",sayi1 / sayi2);break;
        case 5 : printf("Karekök %.1f : %.1f, karekök %.1f : %.1f",sayi1,sqrt(sayi1),sayi2,sqrt(sayi2));break;
        case 6 : printf("%.1f üzeri %.1f : %.1f",sayi1,sayi2,pow(sayi1,sayi2));break;
        default : printf("Seçim aralýðýnda deðil ....\n");
    }
    goto menu;
    cikis : printf("Hesap makinesi sonlandý...");
    return 0;
}
