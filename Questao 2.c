#include <stdio.h>
#include <stdlib.h>

int main()
{

    int tamanho = 10, i, numero[tamanho];

    for (i = 0; i < tamanho; i++)
    {
        printf("%d Numero:", i + 1);
        scanf("%d", &numero[i]);

    }
    system("cls || clear");

    for (i = 0; i < tamanho; i++)
    {
        printf("Numero:%d\n",numero[i]);
    }

    return 0;
}