#include <stdio.h>
#include <stdlib.h>

int main(){

    int tamanho = 4, soma = 0, i;
    float nota[tamanho], media;

    for (i = 0; i < tamanho; i++){
        printf("%d Nota:", i + 1);
        scanf("%f", &nota[i]);
        soma += nota[i];

    }

    system("cls || clear");
    media = soma / tamanho;

    for (i = 0; i < tamanho; i++){
        printf("%d nota:%.2f\n", i + 1, nota[i]);

    }

    if (media >= 7){
        printf("Aprovado");

    }else if (media >= 5){
        printf("Recuperacao");

    }else{
        printf("Reprovado");
    
    }

    return 0;
}
