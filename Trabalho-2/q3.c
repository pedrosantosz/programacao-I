#include <stdio.h>

int main() {
	float altura, peso;
	printf("Informe a sua altura e o seu peso: ");
	scanf("%f %f", &altura, &peso);
	
	if (peso >= 70 && peso <= 80 && altura >= 1.75 && altura <= 1.90)
		printf("Aceito!");
	else if ((peso < 70 || peso > 80) && (altura < 1.75 || altura > 1.90))
		printf("Totalmente recusado!");
	else if (peso < 70 || peso > 80)
		printf("Recusado por peso!");
	else
		printf("Recusado por altura!");
}
