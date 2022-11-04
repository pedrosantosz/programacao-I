#include <stdio.h>

int main() {
	float comprimento, consumo, voltas;
	int reabastecimentos;
	
	scanf("%f", &comprimento); // em metros
	scanf("%f", &voltas); 
	scanf("%d", &reabastecimentos);
	scanf("%f", &consumo); // em km/L
	
	int trechos = 1 + reabastecimentos; // o 1o trecho é a partir da largada + cada trecho que começa a partir de cada reab.
	float total_percorrido = comprimento / 1000 * voltas; // total percorrido em km
	float trecho_percorrido = total_percorrido / trechos; // km percorridos em um trecho
	float litroPorTrecho = trecho_percorrido / consumo; // L necessários por trecho = L necessários antes do primeiro reab.
	
	printf("%.2f L", litroPorTrecho);
}
