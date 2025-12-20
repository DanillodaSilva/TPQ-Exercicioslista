#include <stdio.h>

int main(){
  int contador = 10;

  /*while (contador <= 5){
    printf("%d\n", contador);
    contador ++;
  }

  printf("\nFIM!\n");
*/
do {
  printf("%d\n", contador);
  contador ++;
}
while (contador <= 5);

printf("\nFIM!\n");


  return 0;
}