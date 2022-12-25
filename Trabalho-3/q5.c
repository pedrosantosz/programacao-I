#include <stdio.h>
#include <locale.h>

int main() {
	int N, duplas, v1, v2;
	
	setlocale(LC_ALL, "Portuguese");
	
	do {
		printf("Informe um valor positivo: ");
		scanf("%d", &N);
	} while (N <= 0);
	
	for (duplas = 0; duplas < N; duplas++) {
		printf("\nDigite dois valores inteiros: ");
		scanf("%d %d", &v1, &v2);
		if (v1 % v2 == 0)
			printf("É divisível\n");
		else
			printf("Não é divisível\n");
	}
}
