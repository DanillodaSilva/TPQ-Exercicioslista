#include <stdio.h>

int main()
{
  int numero[5];
  int soma = 0;
  int produto = 1;
  for (int i = 0; i <= 4; i++)
  {
    printf("\nDigite os numeros\n");
    scanf("%d", &numero[i]);

    soma = soma + numero[i];
    produto = produto * numero[i];
  }
  printf("\nA soma: %d\nO produto: %d\n", soma, produto);
  return 0;
}
