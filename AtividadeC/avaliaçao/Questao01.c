#include <stdio.h>
    int main(){

        float valorhora;
        float horames;
        
        printf("Quantas vc ganha por hora?\n");
        scanf("%f", &valorhora);
        printf("Quantas horas vc trabalha por mes?\n");
        scanf("%f", &horames);
        
        float salariobruto = valorhora * horames;
        float inss = salariobruto * (8/100);
        float sindicato = salariobruto * 0.05;
        float salarioliquido = salariobruto - salariobruto * 0.24;
        
        printf("valor pago ao INSS: %.2f\n", inss);
        printf("Valor pago ao sindicato: %.2f\n", sindicato);
        printf("Salario Liquido: %.2f\n", salarioliquido);

        return 0;



    }