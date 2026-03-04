#include <stdio.h> 
#include <string.h>

int main()
{
  char palavra[] = "programacao";
  printf("tamanho: %d", strlen(palavra));/*diz quantas letras tem a string*/
 
 char origem[] = "Ciencia";
 char destino[20];
 strcpy(destino, origem); /* serve pra copiar string*/
 strcat(destino, origem); /*serve pra concatenar as parada basicamente ela junta, o vini disse q usa muito essa parada*/
 strcmp(destino, origem)/*SE destino = origem retorna 0
                          SE destino > origem retorna um numero positivo
                          SE destino < origem retorna um numero negativo*/
 toupper(origem[0]);/*Faz a primeira letra da palavra ficar maiuscula pq ta com o 0 entre as aparada ali*/                          
 
 
  return 0;
}


