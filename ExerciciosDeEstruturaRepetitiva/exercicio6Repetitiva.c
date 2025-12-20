/*6. Média até sentinela escrição: leia notas no intervalo [0,10] até que seja digitado -1. Ignore valores fora do
intervalo. Ao final, exiba a quantidade de notas válidas e a média com duas casas. Se nenhuma
nota válida for informada, exiba SEM NOTAS. Entrada: sequência de números reais; término com -1. Saída: QTD: q MEDIA: m.mm ou SEM NOTAS. Exemplo: 7 8 10 -1 → QTD: 3 MEDIA: 8.33
*/
#include <stdio.h>
int main()
{
  int nuemroDeContagem = -1, numeroDeParada;

  while (numeroDeParada != -1)
  {
    printf("\nDiga o numero:\n");
    scanf("%d", &numeroDeParada);
    nuemroDeContagem ++;
  }
  printf("\n%d\n", nuemroDeContagem);

  return 0;
}

