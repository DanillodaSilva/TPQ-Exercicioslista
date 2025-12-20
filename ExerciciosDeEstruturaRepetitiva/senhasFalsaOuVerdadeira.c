#include <stdio.h>

int main(){
   
  int senha, senhaCerta = 616122, numerosDeTentativas = 0;

  while (numerosDeTentativas < 3){
    do{
      printf("\nDigite a sua senha:\n");
      scanf("%d", &senha);
      numerosDeTentativas ++;
    } while (senha != senhaCerta && numerosDeTentativas <= 3);

     if(numerosDeTentativas > 3)
     {
      printf("\nConta bloqueada\n");
     }
     else
     {
      printf("\nBem vindo\n");
      numerosDeTentativas = 3;
     }
  }
  


  return 0;
}