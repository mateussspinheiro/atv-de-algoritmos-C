#include <stdio.h>
    int main(){
        
       int num[5];
       int i, lail;
       for(i = 0; i < 5; i++){
            printf("Informe seu numero inteiro: ");
            scanf("%d", &num[i]);

        }
        for(lail = 0; lail < 5; lail++){
            printf("valor do vetor na posicao %d: %d\n", lail + 1, num[lail]);

        }
        return 0;
    }