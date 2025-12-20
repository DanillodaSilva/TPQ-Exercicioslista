/*7. Maior e menor de N valores
Descrição: leia N e depois N inteiros. Imprima o menor e o maior.
Entrada: N (N ≥ 1) seguido de N inteiros. Saída: MIN: a MAX: b. Exemplo: 5 e depois 9 2 7 4 6 → MIN: 2 MAX: 9*/

#include <stdio.h>

int main() {
    int N, numero;
    int menor, maior;

    scanf("%d", &N);      // lê quantos números vão ser digitados

    scanf("%d", &numero); // lê o primeiro número
    menor = numero;
    maior = numero;

    for (int i = 1; i < N; i++) {
        scanf("%d", &numero);

        if (numero < menor) {
            menor = numero;
        }

        if (numero > maior) {
            maior = numero;
        }
    }

    printf("MIN: %d MAX: %d\n", menor, maior);

    return 0;
}
