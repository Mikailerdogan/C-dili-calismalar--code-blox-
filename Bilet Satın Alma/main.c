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
            printf("Kaç tane bilet satýn almak istiyorsunuz?\n");
            scanf("%d",&i);
            if (i<biletsayi)
                {
                biletsayi = biletsayi - i;
                }
            else
                {
                    printf("Lütfen alýnabilecek bir tutar giriniz...\n");
                }
            //biletsayi--;
            printf("Alýnabilecek bilet sayýsý : %d\n",biletsayi);
        }
        else
        {
            break;
        }
    }
    if (biletsayi == 0 || biletsayi < 0)
    {
        printf("Biletler tükendi...");
    }
    else {
    printf("Alýnan bilet : %d\n Kalan bilet : %d",100-biletsayi,biletsayi);
    }


    return 0;
}
