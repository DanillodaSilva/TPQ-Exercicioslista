#include <stdio.h>
/* 3 – Escreva um algoritmo para determinar se um dado número N (recebido através do
teclado) é POSITIVO, NEGATIVO ou NULO.*/
int main(){
  int num;
  printf("\n\nDiga um numero para ser analisado se e positivo, negativo ou nulo: ");
  scanf(" %d", &num);
  if (num > 0)
  {
    printf("\nEsse numero e positivo.");
  }else if (num == 0)
  {
    printf("\nEsse numero e nulo.");
  }else if (num < 0)
  {
   printf("\nEsse numero e negativo."); 
  }else printf("\nEsse caracter nao e um numero.");
   
  
  
  
  return 0;
}
