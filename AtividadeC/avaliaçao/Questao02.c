#include <stdio.h>
    int main(){
    
    float qtdpeixe;
    int max = 50;
    printf("Informe a quantidade de quilos de peixe: \n");
    scanf("%f", &qtdpeixe);

    if(qtdpeixe > max){
        float excessopeso = qtdpeixe - max;
        float valormulta = excessopeso * 4;
        printf("Houve um excesso de %f Kg e a multa e de %f R$\n", excessopeso, valormulta);

    }else{
        printf("Nao houve limite excedido no total foram %f Kg\n", qtdpeixe);
    }
    return 0;
    }