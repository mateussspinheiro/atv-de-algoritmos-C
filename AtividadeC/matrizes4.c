#include <stdio.h>
    int main (){
        char nome [5][40];
        char nota [5][3];
        float media [5], s=0;
        int i,j;

        for(i = 0; i < 5; i++){
            printf("Digite seu nome: ");
            gets(nome[i]);
            printf("Ola! %s ,Digite suas tres notas:\n", nome[i]);
            for(j = 0; j < 3; j++){
                printf("%d", i + j);
                scanf("%f%*j", &nota[i][j]);
                s += nota [i][j];

            }
            media[j] = s / 3;
        }
        printf("\n----------------------------\n");
        printf("LISTA DE ALUNOS E MEDIAS\n");
        printf("\n----------------------------\n");
        for(j = 0; j < 5; j++){
            printf("%d: %s, VOCE OBTEVE MEDIA %1.f\n", j + 1, nome[i],media[j]);
        }
        printf("--------------------------------\n");
        return 0;

    }