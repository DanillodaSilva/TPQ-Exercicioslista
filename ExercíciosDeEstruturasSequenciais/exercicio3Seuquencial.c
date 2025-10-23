#include <stdio.h>

int main(){
   char cep[10]; 
   char cpf[11];
   char telefone[15];
   char rg[11];
  
   printf("\n\nSeja bem vindo professor \nAntes de tudo apenas queremos saber algumas informaçoes\n");

       printf("\n\n Digite o seu Cep:");
       scanf(" %10s", cep);
       
       printf("\n Agora digite seu telefone: "); 
       scanf(" %15s", telefone); 

       printf("\n Agora digite seu cpf: "); 
       scanf(" %11s", cpf);
       
       printf("\nAgora digite seu Rg: ");
       scanf(" %11s", rg);
       
           printf("\nDados recebidos:\nCEP: %s\nTelefone: %s\nCPF: %s\nRG: %s\n", cep, telefone, cpf, rg);
   return 0; 
  }


