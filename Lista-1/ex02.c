#include <stdio.h>
#include <locale.h>

int main() {
	// Req = R1 + R2 + (R3 // R4 // R5)
	setlocale(LC_ALL, "Portuguese");
	float R1 = 10000, R2 = 2200, R3 = 27000, R4 = 47000, R5 = 68000;
	float Req = R1 + R2 + 1/(1/R3 + 1/R4 + 1/R5);
	printf("O valor da resistência equivalente é %.2f ohms", Req);
}
