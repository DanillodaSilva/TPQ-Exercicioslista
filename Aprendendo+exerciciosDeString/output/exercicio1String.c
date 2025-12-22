#include <stdio.h> 
#include <string.h>

int main()
{
  char exemploDeString[50];
  printf("\nDidite um texto:\n");
  gets(exemploDeString);
  printf("\n%s\n", exemploDeString);

  printf("\nO tamanho do texto eh: %d\n", strlen(exemploDeString));
   


  return 0;
}