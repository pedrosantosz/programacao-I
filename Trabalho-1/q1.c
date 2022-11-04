#include <stdio.h>

int main() {
	float P, valor;
	int horaI, horaF;
	
	scanf("%f", &P); // em W
	scanf("%d", &horaI); // Inicial
	scanf("%d", &horaF); // Final
	scanf("%f", &valor); // em kWh
	
	float P_total = P * (horaF - horaI) / 1000; // em kW
	float custo = P_total * valor;
	
	printf("%.2f", custo);
}
