#include <stdio.h>

int main() {
	int peixe, clientes = 0, clientes2 = 0;
	float peso, pesoBagre;
	
	do {
		do {
			printf("1.Bagre 2.Linguado 3.Fim\n");
			scanf("%d", &peixe);
		
			if (peixe < 1 || peixe > 3)
				printf("\nCodigo invalido\n\n");
			
		} while (peixe < 1 || peixe > 3);
		
		if (peixe == 3)
			break;
	
		do {
			printf("\nPeso vendido (em kg): ");
			scanf("%f", &peso);
			
			printf("\n");
			
			if (peso <= 0)
				printf("Peso invalido\n");
		} while (peso <= 0);
		
		clientes++;
		
		switch (peixe) {
			case 1: {
				pesoBagre = pesoBagre + peso;
				break;
			}
			
			case 2: {
				if (peso >= 1.5 && peso <= 2.5)
					clientes2++;
				break;
			}
		}
	} while (1);
	
	printf("\nClientes: %d\n", clientes);
	printf("Clientes que compraram de 1,5 a 2,5 kg de linguado: %d\n", clientes2);
	printf("Peso total de peixe bagre comprado: %.2f kg", pesoBagre);
}
