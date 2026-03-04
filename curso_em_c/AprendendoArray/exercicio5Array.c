#include <stdio.h>

int main()
{
  int numero[7];

  for (int i = 0; i <= 6; i++)
  {
    printf("\nDigite os nuemros que voce quiser\n");
    scanf("%d", &numero[i]);
  }
  for (int i = 6; i >= 0; i--)
  {
    printf("%d", numero[i]);
  }

  return 0;
}
