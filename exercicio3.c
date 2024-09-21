#include <stdio.h>

long long calcularFatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * calcularFatorial(n - 1);
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("Fatorial de %d = %lld\n", numero, calcularFatorial(numero));

    return 0;
}
