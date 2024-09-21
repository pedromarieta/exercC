#include <stdio.h>
#include <string.h>

int main() {
    char minhaString[100]; // Ajuste o tamanho conforme necessário

    printf("Digite uma string: ");
    scanf("%s", minhaString);

    int tamanho = strlen(minhaString);

    printf("String invertida: ");
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c", minhaString[i]);
    }
    printf("\n");

    return 0;
}
