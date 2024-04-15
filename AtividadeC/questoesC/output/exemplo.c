#include <stdio.h>

int main() {

  char str[] = "Olá, mundo!";
  int i;

  // Percorrendo a string e imprimindo cada caractere
  for (i = 0; str[i] != '\0'; i++) {
    printf("%c ", str[i]);
  }

  printf("\n");

  return 0;
}
