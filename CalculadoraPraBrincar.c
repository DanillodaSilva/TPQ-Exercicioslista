#include <stdio.h>

int main(){
  int op;
  int continuar = 1;          
  float num1, num2, resultado;

  printf("\n\nBem vindo a calculadora do Danillo\n\n");

  do {
    printf("\nEscolha um numero: \n");
    scanf("%f", &num1);

    printf("\nEscolha outro numero: ");
    scanf("%f", &num2);

    printf("\nEscolha a operacao q deseja fazer: \n");
    printf("Adicao(1)\nSubtracao(2)\nMultiplicacao(3)\nDivisao(4)\n");
    scanf("%d", &op);

    switch (op)
    {
      case 1:
        resultado = num1 + num2;
        printf("O resultado da adicao e %.2f", resultado);
        break;

      case 2:
        resultado = num1 - num2;
        printf("O resultado da Subtracao e %.2f", resultado);
        break;

      case 3:
        resultado = num1 * num2;
        printf("O resultado da multiplicacao e %.2f", resultado);
        break;

      case 4:
        resultado = num1 / num2;
        printf("O resultado da divisao e %.2f", resultado);
        break;

      default:
        printf("Opcao invalida");
    }

    printf("\n\nDeseja Fazer outra operacao:\nSim(1)   Nao(2)\n");
    scanf("%d", &continuar);  

  } while (continuar != 2);

  return 0;
}
