#include <stdio.h>
    
    float media(){
    
    float n1, n2, m;
    printf("INFORME SUA PRIMEIRA NOTA: \n");
    scanf("%f", &n1);
    printf("INFORME SUA SEGUNDA NOTA: \n");
    scanf("%f", &n2);
    m = (n1 + n2)/2;
    printf("SUA MEDIA E : %.1f",m);
    return m;
    }
    
    int main(){
        media();
        return 0;
    }