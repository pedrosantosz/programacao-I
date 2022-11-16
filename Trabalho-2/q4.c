#include <stdio.h>

int main() {
	float contaCorrente, poupanca, limite;
	printf("Informe o saldo da sua conta corrente e da sua poupanca respectivamente: ");
	scanf("%f %f", &contaCorrente, &poupanca);
	
	if (contaCorrente > 1000 || poupanca > 1000) {
		if (contaCorrente > poupanca)
			if (contaCorrente * 2 > poupanca * 3)
				limite = contaCorrente * 2;
			else
				limite = poupanca * 3;
		else
			if (poupanca * 2 > contaCorrente * 3)
				limite = poupanca * 2;
			else
				limite = contaCorrente * 3;
		printf("Limite da conta especial: R$ %.2f", limite);
	} else
		printf("Sem conta especial.");
}
