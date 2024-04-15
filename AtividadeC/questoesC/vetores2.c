#include <stdio.h>
    int main(){

        char nome[50];
        int i;
        int cont = 0;
        printf("informe seu nome completo: ");
        gets(nome);
        for(i = 0; nome[i] != '\0'; i++){
            cont++;
        }
        printf("a quantidade %d\n", cont + 1);

        return 0;
    }