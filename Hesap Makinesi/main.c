#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
    int secim;
    float sayi1,sayi2;
    menu:
    printf("Yapmak istedi�iniz i�lemi se�iniz...\n");
    printf("1.Toplama\n2.��karma\n3.�arpma\n4.B�lme\n5.Karek�k\n6.Kuvvet\n");
    printf("��k�� yapmak i�in -1 de�erini giriniz...\n");
    scanf("%d",&secim);


    if (secim == -1)
        {
            goto cikis ;
        }

    if (secim < 0 && secim > 6) {
    printf("��lem yapmak istedi�iniz say�lar� giriniz...\n");
                scanf("%f\n%f",&sayi1,&sayi2);


    }
    switch(secim)
    {
        case 1 : printf("Toplam� : %.1f",sayi1 + sayi2); break;
        case 2 : printf("��karma : %.1f",sayi1 - sayi2); break;
        case 3 : printf("�arpma : %.1f",sayi1 * sayi2);break;
        case 4 : printf("B�lme : %.1f",sayi1 / sayi2);break;
        case 5 : printf("Karek�k %.1f : %.1f, karek�k %.1f : %.1f",sayi1,sqrt(sayi1),sayi2,sqrt(sayi2));break;
        case 6 : printf("%.1f �zeri %.1f : %.1f",sayi1,sayi2,pow(sayi1,sayi2));break;
        default : printf("Se�im aral���nda de�il ....\n");
    }
    goto menu;
    cikis : printf("Hesap makinesi sonland�...");
    return 0;
}
