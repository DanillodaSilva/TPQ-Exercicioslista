#include <stdio.h>
#include <string.h>

int main()
{
  char texto[100];
  char sub[50];

  printf("Digite a string principal:\n");
  fgets(texto, 100, stdin);

  printf("Digite a substring:\n");
  fgets(sub, 50, stdin);

    texto[strcspn(texto, "\n")] = '\0';
  sub[strcspn(sub, "\n")] = '\0';

  char *resultado = strstr(texto, sub);

  if (resultado != NULL)
  {
    int posicao = resultado - texto;
    printf("Substring encontrada na posicao %d\n", posicao);
  }
  else
  {
    printf("Substring nao encontrada\n");
  }

  return 0;
}
