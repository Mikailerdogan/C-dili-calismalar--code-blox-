#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    int secim;
    float toplam;
    float porsiyon;


    printf("   MEN�\t   S�PAR�� KODU\tF�YATI\n");
    printf("Ba�lang��lar\t1\t5.5 TL\n");
    printf("Ara S�caklar\t2\t7.5 TL\n");
    printf("Salatalar\t3\t12 TL\n");
    printf("Ana yemekler\t4\t17.75 TL\n");
    printf("Tatl�lar\t5\t11.25 TL\n");
    printf("��icekler\t6\t2.25 TL\n");
menu:
    printf("L�tfen yemek istedi�iniz �r�n�n sipari� kodunu giriniz...\n");
    printf("Men�den ��k�� yapmak i�in -1 giriniz...\n");
    scanf("%d",&secim);



    if (secim == -1)
    {
        goto cikis;
    }
    if (secim >= 1 && secim <= 6)
    {
        printf("L�tfen ka� porsiyon istedi�inizi belirtiniz...\n");
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
        default : printf("Sipari� kodu yanl��...\n"); break;

    }
    goto menu;
    cikis:
        printf("Sipari�iniz Tamamland�...\n");
    printf("Toplam tutar = %.1f TL\n ",toplam);



    return 0;
}
