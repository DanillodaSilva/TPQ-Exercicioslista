/*1 – Faça um programa que receba dois números e mostre qual deles é o maior ou
informe que são iguais em caso de igualdade.*/
#include <stdio.h>
int main(){
  int num1, num2;
  printf("\n\nEscolha um numero pra fazermos a compracao: ");
  scanf(" %d", &num1);
  printf("\nAgora escolha o outro numero: ");
  scanf(" %d", &num2);
  if (num1 > num2){
   printf("O numero %d e maior que o numero %d", num1, num2);
  }else if (num1 < num2)
  {
    printf("O numero %d e menor que o numero %d", num1, num2);
  }else{
     printf("O numero %d e igual que o numero %d", num1, num2);
  }
  
  
  return 0;
}
