#include <stdio.h>

int main() {
    int a = 0, b = 1, c, escolha;

    printf("Escolha ate aonde voce quer que a sequencia va: \n");
    scanf("%d", &escolha);

    if (escolha < 0) {
        printf("Escolha um numero positivo!\n");
        return 0;
    } else if (escolha == 0) {
        printf("0\n"); 
        return 0;
    }

   
    printf("0 ");
    if (escolha >= 1) {
        printf("1 ");
    }

    a = 0;
    b = 1;
    c = a + b;
    while (c <= escolha) {
        printf("%d ", c);
        a = b;
        b = c;
        c = a + b;
    }

    return 0;
}



      