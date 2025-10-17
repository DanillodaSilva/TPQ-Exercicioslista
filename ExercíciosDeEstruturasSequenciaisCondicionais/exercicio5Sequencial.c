#include <stdio.h>
/*– Elabore um algoritmo que leia um número inteiro e imprima seu sucessor e seu
antecessor.*/
int main(){
  int escolhido, ant ,sus;
  printf("\n\nEscolha um numero:");
  scanf(" %d", &escolhido);
  sus = escolhido + 1;
  ant = escolhido - 1;
  printf("\nO antecessor e %d e o sucessor e %d", ant, sus );
  printf("\nEm ondem cescente fica %d,%d,%d", ant, escolhido, sus);

  return 0;
}
