#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  int contador = 0;
  char palavra[500];
  printf("\nDigite uma frase\n");
  fgets(palavra, 500, stdin);

  for (int i = 0; i <= strlen(palavra); i++)
  {
    if (isspace(palavra[i]) != 0)
    {
      contador ++;
    }
    
  }
  
  printf("Essa frase tem %d palavras", contador);
  return 0;
}
