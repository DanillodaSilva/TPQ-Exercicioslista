#include <stdio.h>

int main (){
    int numeroEscolhido, numeroInicial = 1;

    printf("\nDiga qual numero vc quer ve a escala:\n");
    scanf("%d", &numeroEscolhido);

    while (numeroInicial <= numeroEscolhido)
    {
      printf("\n%d\n", numeroInicial);
      numeroInicial ++;
    };

    printf("\nFim!\n");
    
  return 0;
}
