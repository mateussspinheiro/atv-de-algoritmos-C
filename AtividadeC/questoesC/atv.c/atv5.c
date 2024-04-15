#include <stdio.h>
    int main(){

        int numero;

        printf("Informe um valor: ");
        scanf("%d", &numero);


        if (numero % 2 == 0){
            printf(" O numero digitado foi PAR", numero);

        }else{
            printf("O numero digitado foi IMPAR", numero);

        }

            return 0;
}