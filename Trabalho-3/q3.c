#include <stdio.h>

int main() {
	int candidato, can, can1, can2, can3, total = 0;
	float perc = 0, per1, per2, per3;
	
	for (candidato = 1; candidato <= 3; candidato++) {
		printf("Informe a quantidade de votos do canditado %d: ", candidato);
		scanf("%d", &can);
		
		total = total + can;
		
		if (candidato == 1){
			can1 = can;
		}
		else if (candidato == 2) {
			can2 = can;
		}
		else {
			can3 = can;
		}
	}
	
	per1 = (float) can1 * 100 / total;
	per2 = (float) can2 * 100 / total;
	per3 = (float) can3 * 100 / total;
	
	printf("\n");
	
	printf("Candidato 1: ");
	while (perc < (int) per1 / 5) {
		printf("*");
		perc++;
	}
	printf(" %.2f%%\n", per1);
	
	perc = 0;
	
	printf("Candidato 2: ");
	while (perc < (int) per2 / 5) {
		printf("*");
		perc++;
	}
	printf(" %.2f%%\n", per2);
	
	perc = 0;
	
	printf("Candidato 3: ");
	while (perc < (int) per3 / 5) {
		printf("*");
		perc++;
	}
	printf(" %.2f%%", per3);
}
