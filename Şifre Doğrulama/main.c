#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char    sifre[80];
    char    sifredogrulama[80];
    int yanlis;
    int i;

    while(1)
    {
        yanlis = 0;
        i = 0;

        printf("Parolan�z� giriniz...\n");
        scanf("%s",&sifre);
        printf("Do�rulama i�in parolan�z� tekrar giriniz...\n");
        scanf("%s",&sifredogrulama);

        while (!(sifre[i] == '\0' && sifredogrulama[i] == '\0'))
        {
            if(sifre[i] != sifredogrulama[i])
            {
                printf("Hatal� giri� yapt�n�z, Kontrol edip tekrar deneyiniz...\n");
                yanlis = 1;
                break;
            }
            else
                {
                    i++;
                }
        }
        if (yanlis == 0)
        {
            printf("�ifreleriniz e�le�ti... Kayd�n�z ba�ar�yla tamamland�...\n");
            break;
        }
    }
    return 0;
}
