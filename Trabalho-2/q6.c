#include <stdio.h>

int main() {
	int op;
	float peso, preco, desconto;
	
	printf("Escolha uma fruta:\n1. Bergamota\n2. Laranja\n3. Banana\n");
	scanf("%d", &op);
	
	printf("Quantos kg? ");
	scanf("%f", &peso);
	
	printf("Qual o preco? ");
	scanf("%f", &preco);
	
	float valorTotal = peso * preco;
	
	switch(op){
		case 1:
			printf("\nFruta: Bergamota\n");
			if (peso <= 1.5)
				desconto = 0;
			else if (peso <= 3)
					desconto = 5;
			else
					desconto = 10;
			break;
		case 2:
			printf("\nFruta: Laranja\n");
			if (peso <= 2)
				desconto = 0;
			else if (peso <= 4.5)
				desconto = 10;
			else
				desconto = 20;
			break;
		case 3:
			printf("\nFruta: Banana\n");
			if (peso > 3)
				desconto = 15;
			break;
	}
	
	printf("Peso: %.2f kg\nValor total da compra: R$ %.2f", peso, valorTotal);
	
	if (desconto != 0) {
		float valorDesconto = valorTotal - valorTotal * desconto / 100 ;
		printf("\nDesconto: %.2f%%\nValor total com desconto: R$ %.2f", desconto, valorDesconto);
	}
}
