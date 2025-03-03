#include <stdio.h>

int main(){
    printf("Movimentação das Peças no Tabuleiro:");
    int movimentos_bispo = 5;
    int movimentos_torre = 5;
    int movimentos_rainha = 8;

    //Movimentação do Bispo
    printf("\nMovendo Bispo: 5 casas na diagonal superior direita\n");
        for(int i = 1; i<= movimentos_bispo; i++){
        printf("Cima\n"); //Movimento para a diagonal superior direita
        printf("Direita\n");
    }
       
    //Movimento da Torre
    printf("\nMovendo Torre: 5 casas para a direita\n");
       for(int i = 1; i<= movimentos_torre; i++){
       printf("Direita\n"); //Movendo para a direita
       } 

     //Movimento da Rainha
     printf("\nMovendo Rainha: 8 casas para a esquerda\n");
        for(int i = 1; i<= movimentos_rainha; i++){
        printf("Esquerda\n"); //Movendo para a esquerda
        }  


        return 0;
}