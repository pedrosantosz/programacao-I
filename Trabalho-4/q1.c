#include <stdio.h>

int main() {
	float v1, v2, divisao;
	int calcular = 1;
	
	while (calcular == 1) {
		printf("Digite um valor para o numerador: ");
		scanf("%f", &v1);
	
		do {
			printf("Digite um valor para o denominador: ");
			scanf("%f", &v2);
			if (v2 == 0)
				printf("\nDivisor invalido\n");
		} while (v2 == 0);
		
		divisao = v1 / v2;
		printf("\nResultado da divisao: %.2f\n", divisao);
	
		do {
			printf("\nNovo calculo (1.Sim; 2.Nao)? ");
			scanf("%d", &calcular);
		} while (calcular < 1 || calcular > 2);
		
		if (calcular == 2)
			break;
			
		printf("\n");
	}
}
