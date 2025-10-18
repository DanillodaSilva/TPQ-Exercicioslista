/*5 – Criar um algoritmo em C que leia um número inteiro entre 1 e 12 e
escreva o mês correspondente. Caso o usuário digite um número fora desse intervalo,*/
#include <stdio.h>


int main(){
  int escolha;
  printf("\n\nBem vindo ao seu calendario virtual\nDiga o numero do mes da sua opcao:");
  scanf(" %d", &escolha);
  if (escolha == 1){
    printf("\nMes escolhido foi Janeiro\n");
  }else if (escolha == 2){
    printf("\nMes escolhido foi Fevereiro\n");
  }else if (escolha == 3){
    printf("\nMes escolhido foi Marco\n");
  }else if (escolha == 4){
    printf("\nMes escolhido foi Abril\n");
  }else if (escolha == 5){
    printf("\nMes escolhido foi Maio\n");
  }else if (escolha == 6){
    printf("\nMes escolhido foi Junho\n");
  }else if (escolha == 7){
    printf("\nMes escolhido foi Julho\n");
  }else if (escolha == 8){
    printf("\nMes escolhido foi Agosto\n");
  }else if (escolha == 9){
    printf("\nMes escolhido foi Setembro\n");
  }else if (escolha == 10){
    printf("\nMes escolhido foi Outubro\n");
  }else if (escolha == 11){
    printf("\nMes escolhido foi Novembro\n");
  }else if (escolha == 12){
    printf("\nMes escolhido foi dezembro\n");
  }else{
    printf("\nMeu mano esse mes nao existe seu locao");
  }
    
  /*
  poderia usar switch
  case 1:  break;
  default: break;
  */
  
  
  return 0;
}
