#include <stdio.h>

int main()
{
  int numeros[10];
  int contagem[10] = {0};

  for (int i = 0; i < 10; i++)
  {
    printf("Digite um numero: ");
    scanf("%d", &numeros[i]);
  }

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (numeros[i] == numeros[j])
      {
        contagem[i]++;
      }
    }
  }

  for (int i = 0; i < 10; i++)
  {
    int jaMostrou = 0;

    for (int j = 0; j < i; j++)
    {
      if (numeros[i] == numeros[j])
      {
        jaMostrou = 1;
        break;
      }
    }

    if (!jaMostrou)
    {
      printf("%d aparece %d vezes\n", numeros[i], contagem[i]);
    }
  }

  return 0;
}
