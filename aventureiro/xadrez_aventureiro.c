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

