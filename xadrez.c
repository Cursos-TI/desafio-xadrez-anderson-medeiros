#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Aventureiro - Movimentação do Cavalo
    
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Cavalo: Baixo\n");
        }

        printf("Cavalo: Esquerda\n");
    }

    printf("---------------\n");


    int i = 0;
    do {
        while (i < 2) {
            printf("Cavalo: Baixo\n");
            i++;
        }
        printf("Cavalo: Esquerda\n");

    } while (0);


    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
