#include <stdio.h>

/* =====================================================
   DESAFIO XADREZ – NÍVEL MESTRE
   Torre, Bispo, Rainha (RECURSIVIDADE)
   Cavalo (LOOPS COMPLEXOS)
   ===================================================== */

/* -------------------------------
   TORRE – Movimento recursivo
   Direção: Cima
   ------------------------------- */
void moverTorre(int casas) {
    if (casas == 0) {
        return; // condição de parada
    }

    printf("Cima\n");
    moverTorre(casas - 1);
}

/* -------------------------------
   RAINHA – Movimento recursivo
   Direção: Direita
   ------------------------------- */
void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Direita\n");
    moverRainha(casas - 1);
}

/* -------------------------------
   BISPO – Recursivo + loops aninhados
   Diagonal: Cima + Direita
   ------------------------------- */
void moverBispo(int casas) {
    if (casas == 0) {
        return;
    }

    /* loop externo → movimento vertical */
    for (int i = 1; i <= 1; i++) {

        /* loop interno → movimento horizontal */
        for (int j = 1; j <= 1; j++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);
}

/* -------------------------------
   CAVALO – Loops complexos
   Movimento em L:
   2 casas para cima
   1 casa para a direita
   ------------------------------- */
void moverCavalo() {

    for (int passo = 1; passo <= 3; passo++) {

        if (passo <= 2) {
            printf("Cima\n");
            continue;
        }

        for (int lateral = 1; lateral <= 2; lateral++) {

            if (lateral > 1) {
                break;
            }

            printf("Direita\n");
        }
    }
}

/* -------------------------------
   FUNÇÃO PRINCIPAL
   ------------------------------- */
int main() {

    int casasTorre = 3;
    int casasBispo = 2;
    int casasRainha = 4;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
