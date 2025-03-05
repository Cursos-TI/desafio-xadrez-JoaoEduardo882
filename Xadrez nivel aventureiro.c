#include <stdio.h>

int main() {
    // Movimentação do Cavalo
    printf("Movendo Cavalo:\n");
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");  // Movendo para baixo
        for (int j = 0; j < 1; j++) {
            printf("Esquerda\n");  // Movendo para a esquerda
        }
    }

    return 0;
}