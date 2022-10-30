#include <stdio.h>

int main() {
	float S1 = 26, S2 = 35, S3 = 38, S4 = 32;
	float mediaSemana = (S1 + S2 + S3 + S4) / 4;
	float mediaDia = mediaSemana / 5;
	printf("a)\n%.2f\n", mediaSemana);
	printf("\nb)\n%.2f", mediaDia);
}
