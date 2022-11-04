#include <stdio.h>

int main() {
	int valor, n50, n20, n10, n5, n2, n1;
	
	scanf("%d", &valor);
	
	n50 = valor / 50; // faz uma divisão inteira
	valor = valor % 50; // reatribui o valor de "valor" pro resto da divisão anterior
	
	//repete o procedimento anterior
	n20 = valor / 20;
	valor = valor % 20;
	
	n10 = valor / 10;
	valor = valor % 10;
	
	n5 = valor / 5;
	valor = valor % 5;
	
	n2 = valor / 2;
	valor = valor % 2;
	
	n1 = valor / 1;
	
	printf("%d\n%d\n%d\n%d\n%d\n%d", n50, n20, n10, n5, n2, n1);
}
