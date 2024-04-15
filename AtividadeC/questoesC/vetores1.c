#include <stdio.h>
    
    float media(){
     float nota[3];
        float  m;
        printf("INFORME SUA PRIMEIRA NOTA :");
        scanf("%f",&nota[0]);
        printf("INFORME SUA SEGUNDA NOTA :");
        scanf("%f",&nota[1]);
        printf("INFORME SUA TERCEIRA NOTA :");
        scanf("%f", &nota[2]);
        m = (nota[0] + nota[1] + nota[2])/3;
        printf("SUA MEDIA : %.1f",m);
        return m;  
    }
    
    
    int main(){
        media();
        return 0;
    }