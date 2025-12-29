#include <stdio.h>

int main()
{
  int numero[8];
  int soma = 0;
  float resultado;

  for (int i = 0; i <= 7; i++)
  {
    printf("\nDigita os numeros que deseja fazer a media\n");
    scanf("%d", &numero[i]);
    soma = numero[i] + soma;
  }
  resultado = soma / 8;
  printf("\n%.2f e a media dos valores\n", resultado);

  return 0;
}
