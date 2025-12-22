#include <stdio.h>

int main() {
    int H;
    printf("Digite a altura da piramide: ");
    scanf("%d", &H);

    for(int i = 1; i <= H; i++) {
        
        for(int j = 1; j <= H - i; j++) {
            printf(" ");
        }
        
        for(int k = 1; k <= 2*i - 1 ; k++) {
            printf("*");
        }
        printf("\n"); 
    }

    return 0;
}
/* vini n entendi mt esse aqui n ein pprt*/