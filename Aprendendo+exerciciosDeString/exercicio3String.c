#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
  char str[100];
  int contador = 0;

  printf("\nDigite uma frase: \n");
  fgets(str, 100, stdin);

  for (int i = 0; i < strlen(str); i++)
  {
    char c = tolower(str[i]);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
      contador++;
    };
  }
  printf("Numero de vogais: %d\n", contador);

  return 0;
}
