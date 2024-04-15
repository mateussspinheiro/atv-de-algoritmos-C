#include <stdio.h>
    int main(){
      
      int valor[5];
      int i;
      int soma;
      
      for(i = 0; i < 5; i++){
        printf("digite um valor %d: ", i + 1);
        scanf("%d", &valor[i]);
        soma = soma + valor[i];
    }
        printf("o resultado da soma: %d\n",soma);
        
        return 0;
    }