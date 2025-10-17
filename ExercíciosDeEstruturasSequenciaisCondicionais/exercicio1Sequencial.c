#include <stdio.h>


int main () {
  int num1, num2, divisao, resto;
  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
  printf("Digite o segundo numero: ");
  scanf("%d", &num2);
  divisao = num1 / num2;
  resto = num1 % num2;
  printf("O resultado da divisao e: %d\n", divisao);
  printf("O resto da divisao e: %d\n", resto);
  return 0;
}