#include <stdio.h>

int main() {
	float contaCorrente, poupanca, limite;
	printf("Informe o saldo da sua conta corrente e da sua poupanca respectivamente: ");
	scanf("%f %f", &contaCorrente, &poupanca);
	
	if (contaCorrente >= 1000 || poupanca >= 1000) {
		if (contaCorrente > poupanca)
			if ((contaCorrente - 1000) >= 1000)
				limite = contaCorrente * 2;
			else
				limite = poupanca * 3;
		else
			if ((poupanca - 1000)>= 1000)
				limite = poupanca * 2;
			else
				limite = contaCorrente * 3;
		printf("%.2f", limite);
	} else
		printf("Sem conta especial.");
}
