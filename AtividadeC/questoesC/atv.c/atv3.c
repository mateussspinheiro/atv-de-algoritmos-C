#include <stdio.h>

    int main(){

        int quant;
        float valor_final;

        printf("Quantas maças vcs vai querer?");
        scanf("%d", &quant);

        if (quant < 12) {
            valor_final = quant * 1.3;
        
        
        }   else {
                    valor_final = quant * 1.1;
        
        }

         printf("O preço total a ser pago é de R$ %.2f\n", valor_final);

        
        return 0;
          
}