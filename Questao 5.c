#include <stdio.h>
#include <stdlib.h>

int main(){

int i,tamanho=5;
int numero[tamanho];
int maiorNumero=-999,menorNumero=999;

for(i=0;i<tamanho;i++){
    printf("%d numero:",i+1);
    scanf("%d",&numero[i]);

maiorNumero = numero[i] > maiorNumero ? numero[i] : maiorNumero;
menorNumero = numero[i] < menorNumero ? numero[i] : menorNumero; 

}

system("cls || clear");

for(i=0;i<tamanho;i++){
    printf("%d Numero:%d\n",i+1,numero[i]);

}

printf("\nMaior Numero:%d\n",maiorNumero);
printf("Menor Numero:%d\n",menorNumero);

return 0;
}