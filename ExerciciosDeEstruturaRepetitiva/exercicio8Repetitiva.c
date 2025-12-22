#include <stdio.h>

int main()
{
  float numeroReferente;

do
{
  printf("\nDiga o nuemro da nota:\n");
  scanf("%f", &numeroReferente);

} while (numeroReferente > 10 || numeroReferente < 0);
 

printf("\nNota: %d", numeroReferente);
  
  return 0;
}
