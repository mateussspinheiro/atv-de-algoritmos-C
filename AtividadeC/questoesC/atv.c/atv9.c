#include <stdio.h> 
#include <stdlib.h>

int main(){

    int respostas;
        
    while( respostas != 3 ){

        printf("INFORME UM NUMERO DE 1 A 3: \n");
        printf("SE VALOR FOR IGUAL A 3 ENCERRA O PROGRAMA!!!\n");
        scanf("%d", &respostas);
        switch (respostas)
        {
        case 1 : 
            system("exit");
            printf("HELLO WORLD\n");
            getchar();
            break;
        case 2 : 
            system("sudo apt update");
            printf(" OLA MUNDO\n");
            getchar();
            break;
        case 3 : 
            system("sudo apt upgrade");
            printf("PROGRAMA ENCERRADO\n");
            getchar();
            break;
        
        default:
            system("clear");
            printf("NUMERO INCORRETO, INSIRA OS NUMEROS ACIMA\n");
            getchar();
        }
    }

    return 0;

}