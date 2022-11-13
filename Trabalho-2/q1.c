#include <stdio.h>

int main() {
	int idade;
	float tempo, peso, pontos;
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	if (idade < 0 ) {
		printf("\nIdade invalida");
	} else {
		printf("Digite o peso das aboboras (em kg): ");
		scanf("%f", &peso);
	
		printf("Digite o tempo que voce demorou para percorrer o trajeto (em segundos): ");
		scanf("%f", &tempo);
	
		if (idade < 18) { // categoria jovem
			printf("\nCategoria: Jovem");
			if (tempo <= 30)
				pontos = 3 * peso;
			else
				pontos = 2 * peso;
		} else if (idade < 50) { // categoria adulto
			printf("\nCategoria: Adulto");
			if ( tempo <= 30)
				pontos = 5 * peso;
			else
				pontos = 4 * peso;
		} else { // categoria senior
			printf("\nCategoria: Senior");
			if (tempo <= 30)
				pontos = 7 * peso;
			else
				pontos = 6 * peso;
	}
	printf("\n%.2f pontos", pontos);
	}
}
