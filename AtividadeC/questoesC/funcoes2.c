#include <stdio.h>
    
    void mostra_dados(char name[], char city[], int idade){
        printf("DADOS DO CLIENTE\n");
        printf("NOME: %s\n", name);
        printf("CIDADE: %s\n", city);
        printf("IDADE: %d\n",idade);
    }
    
    
    int main(){

        char nome[25];
        char cidade[25];
        int  idade;

        printf("INFORME SEU NOME\n");
        scanf("%s", nome);
        printf("AGORA INFORME SUA IDADE\n");
        scanf("%d", &idade);
        printf("AGORA INFORME SUA CIDADE:\n");
        scanf("%s", cidade);
        mostra_dados(nome,cidade,idade);
        return 0;
    }

