#include <stdio.h>

void verifica(int p){
    if(p == 0){
        printf("O valor digitado e igual a zero.");
    }else{
        printf("O valor digitador e diferente de zero.");
    }
}

int main(){
    int p;
    printf("Digitado um valor inteiro: ");
    scanf("%d", &p);
    verifica(p);
    return 0;
    
}