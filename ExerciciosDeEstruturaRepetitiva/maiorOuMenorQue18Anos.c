#include <stdio.h>

int main(){
  int idade;
  do{
     printf("Diga quantos anos voce tem:");
     scanf("%d", &idade);
} while (idade <= 18);
  
    printf("\nPode entrar, pois voce e maior de idade");  
    
  
  return 0;
}