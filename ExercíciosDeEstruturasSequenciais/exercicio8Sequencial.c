#include <stdio.h>
/*8 – Elabore um algoritmo que receba o ano de nascimento de uma pessoa, e o ano
atual, calcule e mostre:
a. A idade dessa pessoa em anos
b. A idade dessa pessoa em meses
c. A idade dessa pessoa em dias
d. A idade dessa pessoa em semana*/
int main(){
  int atual,nasc,anos,meses,dias,semanas;
  printf("\n\nBem vindo ao calculador de tempo de vida!!\n Precisaremos de algumas informacoes para comecar");
  printf("\nEm que ano estamos? ");
  scanf("%d", &atual);
  printf("\nEm que ano voce nasceu? ");
  scanf("%d", &nasc);
  anos = atual - nasc;
  meses = anos * 12;
  dias = anos * 365;
  semanas = anos * 52;
printf("\nVoce tem: \nAnos: %d\nMeses: %d\nDemanas: %d\nDias: %d", anos, meses, semanas, dias);
  return 0;
}
