#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char palavra[50];

  printf("\nDigite uma palavra\n");
  fgets(palavra, 50, stdin);
  for (int i = 0; i <= strlen(palavra); i++)
  {
    if (palavra[i] == 'a')
    {
      printf("x");
    }
    else
    {
      printf("%c", palavra[i]);
    }
  }

  return 0;
}
