#include <stdio.h>

int main()
{
  int numero[10];

  for (int i = 0; i <= 9; i++)
  {
    printf("\nDigite um numero\n");
    scanf("%d", &numero[i]);
  }
  int maior = numero[0];
  int menor = numero[0];
  for (int i = 1; i < 10; i++)
  {
    if (numero[i] > maior)
    {
      maior = numero[i];
    }
    if (numero[i] < menor)
    {
      menor = numero[i];
    }
  }

  printf("O maior numero e %d e o menor e %d", maior, menor);
  return 0;
}
