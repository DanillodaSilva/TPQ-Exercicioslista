#include <stdio.h> 
#include <ctype.h>

int main()
{
  char exemploDeString[50];
  
  printf("\nDidite um texto:\n");
  gets(exemploDeString);

  for ( int i = 0; exemploDeString[i] != '\0'; i++)
  {
    exemploDeString[i] = toupper(exemploDeString[i]);
  }
  printf("%s", exemploDeString);

   


  return 0;
}