#include <stdio.h>
#include <string.h>
#include <string.h>

int main()
{
  char palavra[50];
  int alib;

  printf("Digite uma palavra:\n");
  fgets(palavra, 50, stdin);
  alib = strlen(palavra) - 1;
  for (int i = alib; i >= 0; i--)
  {

    printf("%c", palavra[i]);
  }

  return 0;
}
