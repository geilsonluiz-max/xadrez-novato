#include <stdio.h>

int main() {

    /* ======================================
       DESAFIO XADREZ - NÍVEL AVENTUREIRO
       Peças: Torre, Bispo, Rainha e Cavalo
       ====================================== */

    /* -------------------------------
       TORRE
       Movimento: 5 casas para a direita
       Estrutura: FOR
       ------------------------------- */
    int casas_torre = 5;

    printf("Movimento da Torre:\n");

    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    /* -------------------------------
       BISPO
       Movimento: 5 casas na diagonal
       (Cima + Direita)
       Estrutura: WHILE
       ------------------------------- */
    int casas_bispo = 5;
    int contador_bispo = 1;

    printf("Movimento do Bispo:\n");

    while (contador_bispo <= casas_bispo) {
        printf("Cima Direita\n");
        contador_bispo++;
    }

    printf("\n");

    /* -------------------------------
       RAINHA
       Movimento: 8 casas para a esquerda
       Estrutura: DO-WHILE
       ------------------------------- */
    int casas_rainha = 8;
    int contador_rainha = 1;

    printf("Movimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= casas_rainha);

    printf("\n");

    /* -------------------------------
       CAVALO
       Movimento em "L":
       2 casas para baixo
       1 casa para a esquerda
       Estruturas: FOR + WHILE (aninhados)
       ------------------------------- */
    int passos_baixo = 2;
    int passos_esquerda = 1;

    printf("Movimento do Cavalo:\n");

    for (int i = 1; i <= passos_baixo; i++) {
        printf("Baixo\n");
    }

    int contador_cavalo = 1;
    while (contador_cavalo <= passos_esquerda) {
        printf("Esquerda\n");
        contador_cavalo++;
    }

    return 0;
}
