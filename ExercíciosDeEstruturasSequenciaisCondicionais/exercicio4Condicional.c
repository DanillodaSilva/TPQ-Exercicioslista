#include <stdio.h>
/*4 – Dados três valores A, B e C, construa um algoritmo, que imprima os valores de
forma ascendente (do menor para o maior)*/
int main(){
  int num1, num2, num3;
  printf("\n\nVou organizar de forma crescente\nme diga um numero: ");
  scanf("%d", &num1);
  printf("\nme diga um numero: ");
  scanf("%d", &num2); 
  printf("\nme diga um numero: ");
  scanf("%d", &num3);
  if (num1 > num2 && num1 > num3)
  {
    printf("%d", num1);
  }else if (num2 > num1 && num2 > num3)
  {
    printf("%d", num2);
  }else if (num3 > num1 && num3 > num2)
  {
    printf("%d", num3);
  }else return 12;
  
  //NÃO CONSEGUI
  
  return 0;
}
