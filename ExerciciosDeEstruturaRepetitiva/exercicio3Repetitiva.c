#include <stdio.h>

int main (){
  int numeroEscolhido, multiplicacao , numeroInicial = 0;
  printf("\nEscolha um numero para receber a tabuada:\n");
  scanf("%d", &numeroEscolhido);
  while (numeroInicial <= 10)
  {
    multiplicacao = numeroInicial * numeroEscolhido;
    numeroInicial ++;
    printf("\n%d", multiplicacao);
    multiplicacao = 0;
  };
  printf("\nFIM!\n");
  return 0;
}