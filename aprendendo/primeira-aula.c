#include <stdio.h>




int main () {
  /* 
  int é o numero inteiro (%d)
  float numero com virgula (%f)
  char só tem a opção de ocupar 1 caractere (%c)
  string recebe texto (%s)
  */ 
  

 int idade;
 char name[30];


 
 //da forma abaixo q se reproduz algo
printf ("\n\n\n Qual a sua idade?\n\n\n");
scanf("%d", &idade);
printf ("\n\n\n Qual a seu nome?\n\n\n");
scanf("%s", name);
if (idade>17) {
printf("\n\n\nSeja bem vindo %s, ja que vc tem %d anos vc pode entrar.\n\n\n", name, idade);
}else{
  printf("\n\n\nMe desculpa %s, mas ja que vc tem %d anos vc nao pode entrar.\n\n\n", name, idade);
}

/*mas tambem tem o caso de usar o else if pq ai nesse caso eu posso adicionar
 uma condição a mais no else alem da condição basica q é se o if inicial n funcionar*/

return 0;

}




