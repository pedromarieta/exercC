#include <stdio.h>

int main() {
    int numeros[10];
    int maior, menor;

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    maior = menor = numeros[0];
    for (int i = 1; i < 10; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("Maior valor: %d\nMenor valor: %d\n", maior, menor);

    return 0;
}
