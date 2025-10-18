/*2 – Escrever um programa em Linguagem C para ler um número inteiro e informar se
ele é divisível por 5.*/

#include <stdio.h>

int main(){
  int num;
  printf("\n\nDigite o numero: ");
  scanf(" %d", &num);
  if (num % 5 == 0)
  {
    printf("esse numero e divisivel.");
  }else printf("\nEle nao e divisivel.");
  
  return 0;
}
