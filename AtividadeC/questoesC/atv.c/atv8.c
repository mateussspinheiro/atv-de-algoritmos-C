#include <stdio.h>
    int main(){

        int num;

        for( int num = 1; num <= 10; num++){
            if (num % 2 == 0){
                printf("%d PAR \n", num);
            }else {
                printf("%d IMPAR\n", num);
            }
            
        }

        return 0;
    }