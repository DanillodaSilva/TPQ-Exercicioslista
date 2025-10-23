#include <stdio.h>

int main(){
  int op;
  float num1,num2,resultado;
  printf("\n\nBem vindo a calculadora do Danillo\nEscolha um numero: ");
  scanf(" %f", &num1);
  printf("\nEscolha outro numero: ");
  scanf(" %f", &num2);
  printf("\nEscolha a operacao q deseja fazer: \nAdicao(1)\nSubtracao(2)\nMultiplicacao(3)\nDivisao(4)\nQual operacao deseja fazer? ");
  scanf(" %d", &op);
  switch (op)
  {
  case 1: resultado = num1 + num2; printf("O resultado da adicao e %.2f", resultado); break;
  case 2: resultado = num1 - num2; printf("O resultado da Subtracao e %.2f", resultado); break;
  case 3: resultado = num1 * num2; printf("O resultado da multiplicacao e %.2f", resultado); break;
  case 4: resultado = num1/num2; printf("O resultado da divicao e %.2f", resultado); break;
  default: return 10;
    break;
  }
  return 0;
}
