#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
    int rastgelesayi;
    srand(time(NULL));
    int loto[49] = {0};

    printf("Say�lar �retilmeye ba�lan�yor...\n");

    for(int i = 0; i<6 ; i++)
    {
    rastgelesayi = 1 + rand() % 49;

        while(loto[rastgelesayi - 1] == 1)
        {
        rastgelesayi = 1 + rand() % 49;
        }
        loto[rastgelesayi - 1] = 1;
        printf("%d ",rastgelesayi);
    }
    printf("\nLoto �ekilimi tamamland�...\n");
    return 0;
}
