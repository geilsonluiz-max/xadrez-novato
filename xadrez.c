#include <stdio.h>

	int main() {

/*Movimento da torre, estrutura usada: FOR. A torre vai andar 5 casas para a direita */

		int casas_torre = 5;

		printf("Movimento da torre:\n");

		for (int i = 1; i <= casas_torre; i++) {
			printf("Direita\n");
		}

		printf("\n");

/*Movimento do bispo, estrutura usada: WHILE. O bispo vai andar 5 casas na diagonal (Cima + Direita) */

	int casas_bispo = 5;
	int contador_bispo = 1;

	printf("Movimento do Bispo:\n");

	while (contador_bispo <= casas_bispo) {
		printf("Cima Direita\n");
		contador_bispo++;
	}

	printf("\n");

/*Movimento da rainha, estrutura usada: DO-WHILE. A rainha vai andar 8 casas para a esquerda */

	int casas_rainha = 8;
	int contador_rainha = 1;

	printf("Movimento da Rainha:\n");

	do {
		printf("Esquerda\n");
		contador_rainha++;
	} while (contador_rainha <= casas_rainha);

	printf("\n");


/*Movimento do cavalo, estrutura usada: FOR/WHILE. O cavalo anda em "L": 2 casas para baixo 1 casa para a esquerda*/

	int casas_baixo = 2;
	int casas_esquerda = 1;

	printf("Movimento do Cavalo:\n");

		for (int i = 1; i <= casas_baixo; i++) {
			printf("Baixo\n");
		}

	int j = 1;
	while (j <= casas_esquerda) {
		printf("Esquerda\n");
		j++;
	}

	return 0;
}
