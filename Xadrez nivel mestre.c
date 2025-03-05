#include <stdio.h>

int main(){
    printf("Movimentação das Peças no tabuleiro:\n");
    int movimentos_bispo =5;
    int movimentos_torre =5;
    int movimentos_rainha = 8;

    // Movimentação do Bispo (usando um loop para simular a recursão)
    printf("Movendo Bispo: 5 casas na diagonal direita para cima \n");
    int i = 1;
    while (i <= movimentos_bispo) {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }

    // Movimentação da Torre (usando um loop para simular a recursão)
    printf("\nMovendo Torre: 5 casas para a direita\n");
    int j = 1;
    while (j <= movimentos_torre) {
        printf("Direita\n");
        j++;
    }

    // Movimentação da Rainha (usando um loop para simular a recursão)
    printf("\nMovendo Rainha: 8 casas para a esquerda\n");
    int k = 1;
    while (k <= movimentos_rainha) {
        printf("Esquerda\n");
        k++;
    }

    // Movimentação do Cavalo com condições múltiplas e continue
    printf("\nMovendo Cavalo: 1 vez em L para cima à direita\n");
    for (int m = 0; m < 5; m++) {
        if (m % 2 == 0) {
            printf("Cima\n");
            continue;
        }
        printf("Direita\n");
    }

    return 0;

}