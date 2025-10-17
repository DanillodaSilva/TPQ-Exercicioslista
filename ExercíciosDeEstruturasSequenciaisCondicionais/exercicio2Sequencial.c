#include <stdio.h>
/*2 – Escreva um programa em em C que solicite ao usuário dois números reais e
depois forneça o resultado da soma, subtração, multiplicação e divisão entre os
números informados.*/
int main () {
  int  multiplicacao, soma, subtracao;
  float num1, num2, divisao;
  printf("\n\nDigite o primeiro numero: \n\n");
  scanf("%f", &num1); 
  printf("\n\nDigite o segundo numero: \n\n");
  scanf("%f", &num2);
  divisao = num1 / num2;
  multiplicacao = num1 * num2;
  soma = num1 + num2;
  subtracao = num1 - num2;
  printf("\n\nAqui esta as operacoes realizadas com o numero %f e o numero %f\nMultiplicacao %d\ndivisao %.2f\nsoma %d\nsubtracao %d\n\n", num1, num2, multiplicacao, divisao, soma, subtracao);
  

  return 0;
} 