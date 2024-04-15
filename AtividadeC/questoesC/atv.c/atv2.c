#include <stdio.h>

int main(){

    float num1, num2;
    float result = 0;
     int opcao = 0;

    printf("----CALCULADORINHA----\n");
    printf("-------------------\n");
    printf("digite um valor: ");
    scanf("%f", &num1);

    printf("digite o segundo valor: ");
    scanf("%f", &num2);
   
    printf("\nEscolha a operação desejada:\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    scanf("%d", &opcao);
    
    switch (opcao){

        case 1 :
            result = num1 + num2;
            break;
        case 2 :
            result = num1 - num2;
            break;
        case 3 : 
            result = num1 * num2;
            break;
        case 4 :
           if (num2 != 0){
                result = num1 / num2;

           } else 
           {
                printf("ERRO: divisao por zero! A divisao e indefinido.\n"); 
                return 1;
           }
           break;
        default:
            
    }
    printf("resultado: %.2f\n", result);

    return 0;
    }