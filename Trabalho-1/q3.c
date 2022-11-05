#include <stdio.h>

int main() {
	int espetos_vendidos;
	float preco_espeto, preco_carne;
	
	scanf("%d", &espetos_vendidos);
	scanf("%f", &preco_espeto);
	scanf("%f", &preco_carne);
	
	int qtd_carne = espetos_vendidos * 200 / 1000; // em kg / cada espeto tem 200g
	float valor_recebido = espetos_vendidos * preco_espeto; 
	float valor_gasto = qtd_carne * preco_carne;
	float lucro = valor_recebido - valor_gasto;
	
	printf("%d \n%.2f \n%.2f", qtd_carne, valor_recebido, lucro);
}
