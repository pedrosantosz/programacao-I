#include <stdio.h>

int main() {
	int ordem, L1, L2;
	
	do {
		printf("Informe a ordem (1. Crescente; 2. Decrescente): ");
		scanf("%d", &ordem);
		
		if (ordem < 1 || ordem > 2)
			break;
		
		printf("Informe um limite (numero inteiro): ");
		scanf("%d", &L1);
		printf("Informe outro limte (numero inteiro): ");
		scanf("%d", &L2);
		
		printf("\n");
		
		switch (ordem) {
			case 1: {
				if (L1 > L2) {
					while (L1 >= L2) {
						printf("%d ", L2);
						L2++;
					}
				}
				else {
					while (L2 >= L1) {
						printf("%d ", L1);
						L1++;
					}
				}
				printf("\n\n");
				break;
			}
			case 2: {
				if (L1 > L2)
					while (L1 >= L2) {
						printf("%d ", L1);
						L1--;
					}
				else
					while (L2 >= L1) {
						printf("%d ", L2);
						L2--;
					}
				printf("\n\n");
				break;
			}
		}	
	} while (1);
}
