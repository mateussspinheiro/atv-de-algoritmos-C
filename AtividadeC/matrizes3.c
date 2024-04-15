#include <stdio.h>

main(){
    int m[2][2];
    int i,j;
    int cont = 0;
    for( i = 0; i < 2; i++){
        for( j = 0; j < 2; j++){
            printf("digite o valor da coluna %d do índice %d: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    printf("a quantidade é de numeros par é: %d",cont);
}