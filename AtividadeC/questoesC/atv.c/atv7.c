#include <stdio.h>
    int main(){
    int idades[10], maioresDe18 = 0;


  for (int i = 0; i < 10; i++) {
    printf("-----------------------\n\n");
    printf("CONSULTA DE MAIORIDADE\n\n");
    printf("-----------------------\n");
    printf("Digite a idade da pessoa %d: ", i + 1);
    scanf("%d", &idades[i]);

    
    if (idades[i] >= 18) {
      maioresDe18++;
    }
  }

  
  printf("Quantidade de pessoas maiores de 18 anos: %d\n", maioresDe18);

  return 0;
}