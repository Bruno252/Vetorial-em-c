#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, tamanho = 3, soma = 0;
    float nota[tamanho], media;

    for (i = 0; i < tamanho; i++)
    {
        printf("%d numero:", i + 1);
        scanf("%f", &nota[i]);

        soma += nota[i];
    }

    system("cls || clear");

    media = soma / tamanho;
    printf("Media:%.2f\n\n", media);

    for (i = 0; i < tamanho; i++)
    {
        printf("%dNota:%.2f\n", i + 1, nota[i]);
    }

    return 0;
}