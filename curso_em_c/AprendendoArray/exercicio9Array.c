#include <stdio.h>

int main()
{
  int numero[10];
for ( int i = 0; i < 10; i++)
{
  printf("\nDigite o nuemro de sua escolha\n");
  scanf("%d", &numero[i]);
}
for (int i = 0; i < 9; i++)
{
  if (numero[i] == numero[i + 1] )
  {
    numero[i + 1] = 0;
  }
  printf("%d ", numero[i]);
}



  return 0;
}
