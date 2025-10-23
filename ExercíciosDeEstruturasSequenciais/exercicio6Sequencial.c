/* 6 – Elabore um algoritmo que leia o salário-base de um funcionário, calcule e mostre
o seu salário a receber, sabendo-se que esse funcionário tem gratificação 20% sobre o
salário-base, e paga imposto de 15% sobre o salário-base.*/
#include <stdio.h>
int main(){
  float bruto, liquido, desconto, bonus;
  printf("\n\nPara facilitar o calculo do seu salario liquido me inforqual e o valor do seu salario base: ");
  scanf("%f", &bruto);
  desconto = bruto * 0.15f;
  bonus = bruto * 0.20f;
  liquido = bruto + bonus - desconto;
  printf("\nO valor do seu salario liquido (oq vc vai receber) e igual a %.2f", liquido);

  return 0;
}