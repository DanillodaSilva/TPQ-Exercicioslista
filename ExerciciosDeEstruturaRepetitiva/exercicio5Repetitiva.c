#include <stdio.h>
int main()
{
  int numeroEscolhido, numeroInicial = 1, numeroDeContagem = 0;

  while (numeroInicial <= 10)
  {
      printf("\nDiga os numeros:\n");
  scanf("%d", &numeroEscolhido);
    if (numeroEscolhido % 2 == 0)
    {
     numeroDeContagem ++; 
    };
    numeroInicial ++;
  };
  printf("\n%d\n", numeroDeContagem);
  return 0;
}
