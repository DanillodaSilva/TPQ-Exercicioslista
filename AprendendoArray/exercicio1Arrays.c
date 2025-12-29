#include <stdio.h>

int main()
{
  int nota[5];
  float notaFinal;
  for (int i = 0; i <= 4; i++)
  {
    printf("\nDigite a nota do aluno\n");
    scanf("%d", &nota[i]);
    notaFinal = notaFinal + nota[i];
  }
  notaFinal = notaFinal / 5;
  printf("%.2f", notaFinal);
  return 0;
}
