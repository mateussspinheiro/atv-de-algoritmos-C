#include <stdio.h>
    int main(){
        
        int mat [4][4];
        int val = 0;
        int i, j;
        
        
        for(i = 0; i<4; i++){
            for(j = 0; j<4; j++){
                printf("Informe um valor:");
                scanf("%d",&mat[i][j]);
                if(mat[i][j] > 10){
                    val = val + 1;

                }
            }
        }
        printf("Os numeros maiores que 10 foram é : %d",val);
        return 0;
    }
