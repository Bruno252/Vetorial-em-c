#include <stdio.h>
#include <stdlib.h>

int main()
{


int i,quantidade=5,numero[quantidade];
int numeroPositivo[quantidade],positivo=0,numeroNegativo[quantidade],negativo=0;
int par=0,impar=0;
int soma=0,somaPar=0,somaImpar=0;
int maiorNumero=INT_MIN,menorNumero=INT_MAX;
float media,mediaPar,mediaImpar;

//Escaneando O Numero//
    for (i = 0; i < quantidade; i++){

        printf("%d Numero:", i + 1);
        scanf("%d", &numero[i]);
        soma+=numero[i];

//verificao de Par e Impar//
        if (numero[i] % 2 == 0){
            par++;
            somaPar+=numero[i];

        }else{
            impar++;
            somaImpar+=numero[i];

        }

//verificando Numero Positivo e Negativo//
        if (numero[i]<0){

            numeroNegativo[i]=numero[i];
            negativo++;

        }else{

            numeroPositivo[i]=numero[i];
            positivo++;
        }
//verificando Maior e Menor Numero//
        maiorNumero = numero[i] > maiorNumero ? numero[i] : maiorNumero;
        menorNumero = numero[i] < menorNumero ? numero[i] : menorNumero;
    }

system("cls || clear");

//Media dos Numeros//
media=soma/quantidade;

if(somaPar>0){
mediaPar=somaPar/par;
}

if(somaImpar>0){
mediaImpar=somaImpar/impar;

}

//Mostrando Na Telas os Valores//
    printf("____________________________________");
    printf("\nQuantidades De Numeros Par:%d\n", par);
    printf("Quantidades De Numeros Impares:%d\n", impar);

    for (i = 0; i < quantidade; i++)
    {
        if (numero[i] % 2 == 0)
        {
            printf("Numero Par:%d\n", numero[i]);
        }
        else
        {
            printf("Numero Impar:%d\n", numero[i]);
        }
    }

    printf("____________________________________");
    printf("\nQuantidades De Numeros Positivos:%d\n", positivo);
    printf("Quantidades De Numeros Negativos:%d\n", negativo);

    for (i = 0; i < quantidade; i++){

    if(numero[i]>0){
        printf("Numero Positivo:%d\n", numeroPositivo[i]);

    }else{
        printf("Numero Negativo:%d\n", numeroNegativo[i]);

    }

    }

    printf("____________________________________");
    printf("\nQuantidades de Numeros Inseridos:%d\n",quantidade);
    printf("Maior Numero:%d\n",maiorNumero);
    printf("Menor Numero:%d\n",menorNumero);
    printf("____________________________________");
   
  if(somaPar>0 && somaImpar>0){
    printf("\nMedia de Par:%.2f\n",mediaPar);
    printf("Media de Impar:%.2f\n",mediaImpar);

  }else if(somaPar>0){
    printf("\nMedia de Par:%.2f\n",mediaPar);

  }else{
    printf("\nMedia de Impar:%.2f\n",mediaImpar);

  }

    printf("____________________________________");
    printf("\nMedia Total:%.2f\n",media);
    printf("____________________________________");

    printf("\nNumeros Lidos:\n");

for(i=--quantidade;i>=0;i--){

    printf("Numero:%d\n",numero[i]);

}
    printf("____________________________________");

    return 0;
}