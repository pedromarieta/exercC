#include <stdio.h>
#include <string.h>

int contarVogais(const char *str) {
    int vogais = 0;
    int tamanho = strlen(str);

    for (int i = 0; i < tamanho; i++) {
        char c = tolower(str[i]); // Considera maiúsculas e minúsculas
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais++;
        }
    }

    return vogais;
}

int main() {
    char minhaString[100]; // Ajuste o tamanho conforme necessário

    printf("Digite uma string: ");
    scanf("%s", minhaString);

    int numVogais = contarVogais(minhaString);
    printf("Número de vogais na string: %d\n", numVogais);

    return 0;
}
