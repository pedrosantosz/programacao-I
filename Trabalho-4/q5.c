#include <stdio.h>

int main() {
	int N1, N2, c, divisoes;
	
	do {
		printf("Informe um numero: ");
		scanf("%d", &N1);
		
		if (N1 <= 0)
			printf("Numero invalido\n\n");
	} while(N1 <= 0);
	
	do {
		printf("\nInforme outro numero: ");
		scanf("%d", &N2);
		
		if (N2 <= 0)
			printf("Numero invalido\n");
	} while( N2 <= 0);
	
	while (N1 <= N2) {
		divisoes = 0;
		for (c = 1; c <= N1; c++) {
			if (N1 % c == 0)
				divisoes++;
		}
		if (divisoes == 2)
			printf("%d ", N1);
		N1++;
	}
}
