#include <stdio.h>
#include <stdlib.h>

int main(){

int numero[3],i;

for(i=0;i<3;i++){

printf("%d nota:",i+1);
scanf("%d",&numero[i]);


}
system("cls || clear");

printf("Numero 1:%d\n",numero[0]);
printf("Numero 2:%d\n",numero[1]);
printf("Numero 3:%d\n",numero[2]);

    return 0;
}