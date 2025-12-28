#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*strcmp(var1, var2)*/

int main()
{
  int j = 0;
  char palavra[50];
  char palavraInv[50];
  printf("\nDigite uma palavra\n");
  scanf("%s", &palavra);

  for (int i = strlen(palavra) - 1; i >= 0; i--)
  {
    palavraInv[j] = palavra[i];
    j++;
  }
  palavraInv[j] = '\0';

  if (strcmp(palavraInv, palavra) == 0)
  {
    printf("\nEssa palavra e um palindromo\n");
  }else{
    printf("\nEssa palavra nao e um palindromo pois se escreve %s e a ao contrario e %s\n", palavra, palavraInv);
  }

  return 0;
}
