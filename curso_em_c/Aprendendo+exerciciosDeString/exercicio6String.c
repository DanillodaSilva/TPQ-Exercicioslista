#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*vai utilizar o isspace*/

int main()
{
  int contador = 0;
  char palavra[500];
  printf("\nDigite uma frase\n");
  fgets(palavra, 500, stdin);
  for (int i = 0; palavra[i] != '\0'; i++)
  {
    if (isspace(palavra[i]) == 0)
    {
      printf("%c", palavra[i]);
    }
    else
    {
      contador++;
    }
  }
  contador = contador - 1;
  printf("\nA palavra posta tinha %d espacos", contador);
  return 0;
}