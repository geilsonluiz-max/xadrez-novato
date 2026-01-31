#include <stdio.h>

int main() {

    /* ===============================
       DESAFIO XADREZ - NÍVEL NOVATO
       Peças: Torre, Bispo e Rainha
       =============================== */

    /* -------------------------------
       TORRE
       Move-se em linha reta.
       Simulação: 5 casas para a direita
       Estrutura usada: FOR
       ------------------------------- */
    int casas_torre = 5;

    printf("Movimento da Torre:\n");

    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    /* -------------------------------
       BISPO
       Move-se na diagonal.
       Simulação: 5 casas para cima e à direita
       Estrutura usada: WHILE
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
       Move-se em todas as direções.
       Simulação: 8 casas para a esquerda
       Estrutura usada: DO-WHILE
       ------------------------------- */
    int casas_rainha = 8;
    int contador_rainha = 1;

    printf("Movimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= casas_rainha);

    return 0;
}
