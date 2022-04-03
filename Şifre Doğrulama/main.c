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

        printf("Parolanýzý giriniz...\n");
        scanf("%s",&sifre);
        printf("Doðrulama için parolanýzý tekrar giriniz...\n");
        scanf("%s",&sifredogrulama);

        while (!(sifre[i] == '\0' && sifredogrulama[i] == '\0'))
        {
            if(sifre[i] != sifredogrulama[i])
            {
                printf("Hatalý giriþ yaptýnýz, Kontrol edip tekrar deneyiniz...\n");
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
            printf("Þifreleriniz eþleþti... Kaydýnýz baþarýyla tamamlandý...\n");
            break;
        }
    }
    return 0;
}
