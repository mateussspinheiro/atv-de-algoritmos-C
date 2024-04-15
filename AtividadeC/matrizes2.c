#include <stdio.h>
    int main(){
        
        int v[3];
        int mat[3][3];
        
        printf("Digite os elementos do vetor (3 elementos):\n");
        for(int i = 0; i < 3; i++){
            scanf("%d", &v[i]);
    }
        printf("Digite os elementos da matriz :\n");
        for (int i = 0; i < 3; i++){
          for (int j = 0; j < 3; j++){
            scanf("%d", &mat[i][j]);
        }
    }
        printf("Resultado da multiplicação do vetor pela matriz:\n");
        for (int j = 0; j < 3; j++) {
            int resultado = 0;
            for (int i = 0; i < 3; i++) {
            resultado += v[i] * mat[i][j];
        }
        printf("%d", resultado);
    }
        printf("\n");

    return 0;
 }
