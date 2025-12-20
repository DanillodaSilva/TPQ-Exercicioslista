#include <stdio.h>

int main(){
int numeroEscolhido, soma = 0, numeroInicial = 0;

  printf("\nEscolha um numero pra ser somado\n");
  scanf("%d", &numeroEscolhido);
  while (numeroInicial <= numeroEscolhido)
  {
  soma = numeroInicial + soma;
  numeroInicial ++;
  };
  printf("\nA soma do numero escolhido e: %d\n", soma);
  return 0; 
}