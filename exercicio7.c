#include <stdio.h>

void bubbleSort(int arr[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int tamanho;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    int numeros[tamanho];
    printf("Digite %d números inteiros:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &numeros[i]);
    }

    // Ordena o array
    bubbleSort(numeros, tamanho);

    printf("Array ordenado em ordem crescente:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
