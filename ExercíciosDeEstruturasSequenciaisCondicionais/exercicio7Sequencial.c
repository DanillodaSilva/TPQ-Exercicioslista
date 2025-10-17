#include <stdio.h>
/* 7 – Sabe-se que:
1pé = 12 polegadas
1 jarda = 3 pés
1 milha = 1760 jardas
Elabore um algoritmo que receba uma medida em pés, faça as conversões a seguir, e
imprima o resultado de cada conversão realizada. 
a. polegadas
b. jardas
c. milha*/
int main(){
  int pes, polegadas;
  float jardas,milhas;
  printf("\n\nBem vindo ao conversor de medidas!!!\nQual e a medida de hoje (em pes)?");
  scanf("%d", &pes);
  polegadas = pes * 12;
  jardas = pes/3;
  milhas = jardas/1760;
  printf("\nValor referencial em pes: %d\nPoleadas: %d\nJardas: %.2f\nMilhas: %.2f", pes, polegadas, jardas, milhas);
  return 0;
}
