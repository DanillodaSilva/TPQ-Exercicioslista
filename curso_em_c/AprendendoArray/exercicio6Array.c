#include <stdio.h>

int main()
{
  int numero1[5];
  int numero2[5];
  int numero3[10];

  for (int i = 0; i <= 4; i++)
  {
    printf("\nDigite os numeros\n");
    scanf("%d", &numero1[i]);
  }
    for (int i = 0; i <= 4; i++)
  {
    printf("\nDigite os numeros\n");
    scanf("%d", &numero2[i]);
  }
    for (int i = 0; i <= 4; i++)
  {
    numero3[i] = numero1[i];
  }
  for (int i = 0; i <= 4; i++)
  {
    numero3[i + 5] = numero2[i];
  }
  for (int i = 0; i <= 9; i++)
  {
    printf("%d ", numero3[i]);
  }
  
  return 0;
}
