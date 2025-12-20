#include <stdio.h>

int main()
{
  int numeroEscolhido, numeroInicial = 0;
  printf("Escolha um numero pra saber quantas casas ele tem:\n");
  scanf("%d", &numeroEscolhido);

while ( numeroEscolhido != 0)
{
  numeroEscolhido = numeroEscolhido / 10;
  numeroInicial ++;
}
printf("\nO numero escolhido tem %d casas\n", numeroInicial);
  return 0;
}
