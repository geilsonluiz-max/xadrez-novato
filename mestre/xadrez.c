#include <stdio.h>

/*Funções recursivas */

/*Movimento recursivo da Torre (para cima) */
void moverTorre(int casas) {
	if (casas == 0) {
		return; // condição de parada
		}

	printf("Cima\n");
	moverTorre(casas - 1);
	}

/*Movimento recursivo da Rainha (para a direita) */
void moverRainha(int casas) {
	if (casas == 0) {
		return;
	}

	printf("Direita\n");
	moverRainha(casas - 1);
}

/*Movimento recursivo do Bispo (diagonal: cima + direita) */
void moverBispoRecursivo(int casas) {
	if (casas == 0) {
		return;
		}

	printf("Cima\n");
	printf("Direita\n");

	moverBispoRecursivo(casas - 1);
}
/*Bispo com loops aninhados */
void moverBispoLoops(int casas) {

	// loop externo movimento vertical
	for (int i = 1; i <= casas; i++) {

		//Loop interno movimento horizontal

		for (int j = 1; j <= 1; j++) {
			printf("Cima\n");
			printf("Direita\n");
		}
	}
}
/*Movimento do Cavalo. Movimento em L 2 casas para cima e 1 para a direita */
void moverCavalo () {

	for (int vertical = 1; vertical <= 3; vertical++) {

		if (vertical <= 2) {
			printf("Cima\n");
			continue;

		}

		for (int horizontal = 1; horizontal <= 2; horizontal++) {

			if (horizontal > 1) {
					break;
			}

			printf("Direita\n");
		}
	}
}

/*Função principal */
int main() {

	//Valores definidos diretamente no código

	int casasTorre = 3;
	int casasBispo = 2;
	int casasRainha = 4;

	printf("Movimento da Torre:\n");
	moverTorre(casasTorre);

	printf("\nMovimento do Bispo (Recursivo):\n");
	moverBispoRecursivo(casasBispo);

	printf("\nMovimento do Bispo (Loops Aninhados):\n");
	moverBispoLoops(casasBispo);

	printf("\nMovimento da Rainha:\n");
	moverRainha(casasRainha);

	printf("\nMovimento do Cavalo:\n");
	moverCavalo();

return 0;
}
