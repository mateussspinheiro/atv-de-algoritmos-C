#include <stdio.h>
    
    int soma(){
        int num1, num2,s,s1,s2;
        printf("informe um valor: ");
        scanf("%d",&num1);
        printf("informe outro valor: ");
        scanf("%d", &num2);
        s = num1 + num2;
        s1 = num1 * 2;
        s2 = num2 * 2;
        printf("RESULTADO DA SOMA: %d\n", s);
        printf("DOBRO DO PRIMEIRO VALOR: %d\n", s1);
        printf("DOBRO DO SEGUNDO VALOR: %d \n", s2);        
    return ( s, s1,s2);

    }
    
    int main(){
        soma();
        return 0;
    }