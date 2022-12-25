#include <stdio.h>

int main() {
	int mesas, c = 0, vbrancos, vnulos, candidatoA, candidatoB, validos = 0, invalidos = 0, a = 0, b = 0, total = 0;
	printf("Quantidade de mesas da zona eleitoral: ");
	scanf("%d", &mesas);
	
	while(c < mesas) {
		printf("\nVotos brancos: ");
		scanf("%d", &vbrancos);
		printf("Votos nulos: ");
		scanf("%d", &vnulos);
		printf("Votos do candidato A: ");
		scanf("%d", &candidatoA);
		printf("Votos do candidato B: ");
		scanf("%d", &candidatoB);
		
		validos = validos + candidatoA + candidatoB;
		invalidos = invalidos + vbrancos + vnulos;
		a = a + candidatoA;
		b = b + candidatoB;
		total = total + vbrancos + vnulos + candidatoA + candidatoB;
		c++;
	}	
	
	float porA = (float) a * 100 / validos;
	float porB = (float) b * 100 / validos;
	float porInv = (float) invalidos * 100 / total;
	
	printf("\nA: %.2f%%\n", porA);
	printf("B: %.2f%%\n", porB);
	printf("Invalidos: %.2f%%\n", porInv);
	
	if (porA > porB)
		printf("Candidato A ganhou!");
	else
		printf("Candidato B ganhou!");
}
