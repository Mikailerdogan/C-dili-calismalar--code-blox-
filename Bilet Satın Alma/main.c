#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int biletsayi = 100;
    char al;



    for (;biletsayi>0;)
    {
        printf("Bilet almak istiyorumusunuz [E/e] ? \n");
        scanf(" %c",&al);
        if(al == 'E' || al == 'e')
        {
            int i;
            printf("Ka� tane bilet sat�n almak istiyorsunuz?\n");
            scanf("%d",&i);
            if (i<biletsayi)
                {
                biletsayi = biletsayi - i;
                }
            else
                {
                    printf("L�tfen al�nabilecek bir tutar giriniz...\n");
                }
            //biletsayi--;
            printf("Al�nabilecek bilet say�s� : %d\n",biletsayi);
        }
        else
        {
            break;
        }
    }
    if (biletsayi == 0 || biletsayi < 0)
    {
        printf("Biletler t�kendi...");
    }
    else {
    printf("Al�nan bilet : %d\n Kalan bilet : %d",100-biletsayi,biletsayi);
    }


    return 0;
}
