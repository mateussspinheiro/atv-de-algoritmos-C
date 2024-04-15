#include <stdio.h>
#define MAX 150

int main() {
    float maiorSalario = 0;
    float salario;
    float numFilho;
    float mediaSalario, mediaFilho, qtdSal150;

    for(int i=0; i < 2; i++) {
        printf("Digite o salario:\n");
        scanf("%f", &salario);

        printf("Digite o numero de filhos:\n");
        scanf("%f", &numFilho);

        mediaSalario += salario;
        mediaFilho += numFilho;
        if(salario > maiorSalario) {
            maiorSalario = salario;
        }
        if(salario <= MAX) {
            qtdSal150++;
        }
    }

    mediaSalario = mediaSalario / 2;
    mediaFilho = mediaFilho / 2;

    printf("media salarial:%.1f\n", mediaSalario);
    printf("media de filhos:%.1f\n", mediaFilho);
    printf("maior salario:%.1f\n", maiorSalario);
    printf("quantidade de pessoas que ganham ate 150 reais:%.1f\n", qtdSal150);

    return 0;
}