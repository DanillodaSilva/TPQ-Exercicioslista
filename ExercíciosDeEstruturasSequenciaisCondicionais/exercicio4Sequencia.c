/*4 – Elabore um algoritmo que leia dois valores para as variáveis A e B, efetue a troca
dos valores de forma que a variável A passe a ter o valor da variável B, e que a
variável B passe a ter o valor da variável A. Ao final, imprima os valores com a troca
efetuada*/
#include <stdio.h>

int main(){
  int num1, num2, escolha, aux;
  printf("\n\nEscolha um numero para representar a variavel A:");
   scanf("%d", &num1); 
  printf("\nAgora escolha um numero pra representar a variavel B:");
   scanf("%d", &num2); 
  printf("\nVoce quer inverter os valores?\n(1)Sim\n(2)Nao\n");
   scanf("%d", &escolha);
   if (escolha == 1){
    aux = num1;
    num1 = num2;
    num2 = aux;
    printf("\n\n Vish me confundi e troquei os valores A e %d e B e %d", num1, num2);
   } else if(escolha == 2){
    printf("Po entao voce so me fez perder tempo te perguntando maltdito");
   };
   
  return 0;
}
