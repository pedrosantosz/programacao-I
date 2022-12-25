#include <stdio.h>

int main() {
	int time, idade, brasil = 0, pelotas = 0, farroupilha = 0, total = 0, brasileiros = 0;
	
	do {
		printf("\nInforme o seu time (conforme a tabela abaixo):\n");
		printf("1. Brasil 2. Pelotas 3. Farroupilha\n");
		scanf("%d", &time);
		if (time >= 1 && time <= 3) {
			printf("\nInforme a sua idade: ");
			scanf("%d", &idade);
			
			switch (time) {
				case 1: {
					brasil++;
					if (idade >=15 && idade <= 20)
						brasileiros++;
					break;
				}
				case 2: {
					pelotas++;
					break;
				}
				case 3: {
					farroupilha++;
					break;
				}
			}
		
			total++;
		}
		else
			break;
	} while (time >= 1 && time <= 3);
	
	float perBrasil = (float) brasil * 100 / total;
	float perPelotas = (float) pelotas * 100 / total;
	float perFarroupilha = (float) farroupilha * 100 / total;
	
	printf("\nBrasil: %.2f%%\n", perBrasil);
	printf("Pelotas: %.2f%%\n", perPelotas);
	printf("Farroupilha: %.2f%%\n", perFarroupilha);
	printf("Torcedores do Brasil entre 15 e 20 anos: %d", brasileiros);
}
