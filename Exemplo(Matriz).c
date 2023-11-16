#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, j, numero[2][2];

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){

            printf("Elemento da %d coluna %d linha:", i + 1, j + 1);
            scanf("%d", &numero[i][j]);
        }
    }

printf("\n");
printf("Resultados:\n");

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){

            printf("Elemento da %d coluna %d linha:%d\n", i + 1, j + 1,numero[i][j]);
        }
    }

    return 0;
}