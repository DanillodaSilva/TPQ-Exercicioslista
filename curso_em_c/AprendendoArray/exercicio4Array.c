#include <stdio.h>

int main()
{
  int numero[6];
  int contador = 0;

  for (int i = 0; i <= 5; i++)
  {
    printf("\nDigite os numeros\n");
    scanf("%d", &numero[i]);
    if (numero[i] % 2 == 0)
    {
      contador ++;
    }
    
  }
  printf("\nVoce falou %d numeros pares\n", contador);
  return 0;
}
