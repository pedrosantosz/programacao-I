#include <stdio.h>

int main() {
	int N, v1, v2, valores, c = 0, dentro = 0, fora = 0;
	
	do {
		printf("Digite um valor (maior que 0): ");
		scanf("%d", &N);
	} while (N <= 0);
	
	
	do {
		printf("\nInforme um limite inferior e um superior: ");
		scanf("%d %d", &v1, &v2);
		
		if (v1 > v2) {
			printf("(\n***o primeiro valor deve ser menor que o segundo)***\n");
		}
	} while (v1 > v2);
	
	while (c < N) {
		printf("\nDigite um valor: ");
		scanf("%d", &valores);
		if (valores >= v1 && valores <= v2)
			dentro++;
		else
			fora++;
		c++;
	}
	
	printf("\n%d valores estao dentro\n%d valores estao fora", dentro, fora);
}
