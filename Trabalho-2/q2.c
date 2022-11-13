#include <stdio.h>

int main() {
	int a1, a2, a3, soma;
	printf("Digite o valor de 3 angulos: ");
	scanf("%d %d %d", &a1, &a2, &a3);
	soma = a1 + a2 + a3;
	
	if (soma > 180 || soma < 180)
		printf("Nao e um triangulo");
	else
		if (a1 < 90 && a2 < 90 && a3 < 90)
			printf("Triangulo Acutangulo");
		else if (a1 > 90 || a2 > 90 || a3 > 90)
			printf("Triangulo Obtusangulo");
		else
			printf("Triangulo Retangulo");
}
