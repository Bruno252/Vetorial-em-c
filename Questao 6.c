#include <stdio.h>
#include <stdlib.h>

int main()
{

    int tamanho = 6, i;
    int numero[6];
    int numeroPar[3],numeroImpar[3];
    /*
    int par=0,impar=0;
    int somaPar=0,somaImpar=0
    */

    for (i = 0; i <tamanho; i++){

        printf("%d Numero:", i + 1);
        scanf("%d", &numero[i]);

    if (numero[i] % 2 == 0){
        numeroPar[i] = numero[i];

    }else{
        numeroImpar[i] = numero[i];

    }
    
}


for(i=0;i<3;i++){
    printf("Numero Par:%d\n",numeroPar[i]);
}

for(i=0;i<3;i++){
    printf("Numero Impar:%d\n",numeroImpar[i]);
    
}

     return 0;
}