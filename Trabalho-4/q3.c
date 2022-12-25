#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int n, m, soma;
	do {
		soma = 0;
		
		printf("Digite um numero inteiro: ");
		scanf("%d", &n);
		
		if (n <= 0)
			break;
		
		for (m = 1; m < n; m++) {
			if (n % m == 0) {
				soma = soma + m;
			}
		}
		
		if (soma == n)
			printf("É perfeito!\n\n");
		else
			printf("Não é perfeito\n\n");
	} while (n >= 0);
}
