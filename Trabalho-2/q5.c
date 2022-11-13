#include <stdio.h>

int main() {
	int op1, op2;
	float Comp1, Comp2, resp;
	
	printf("Escolha um componente:\n1. Resistor\n2. Capacitor\n3. Indutor\n");
	printf("=============\n");
	printf("Serie ou Paralelo?\n1.Serie\n2.Paralelo\n\n");
	scanf("%d %d", &op1, &op2);
	
	printf("Valores dos componentes (em Ohm, uF ou mH): ");
	scanf("%f %f", &Comp1, &Comp2);
	
	switch(op2) {
		case 1:
			printf("\nSerie\n");
			switch(op1){
				case 1:
					resp = Comp1 + Comp2;
					printf("Resistores\n%.2f ohms", resp);
					break;
				case 2:
					resp = 1 / (1 / Comp1 + 1 / Comp2);
					printf("Capacitores\n%.2f uF", resp);
					break;
				case 3:
					resp = Comp1 + Comp2;
					printf("Indutores\n%.2f mH", resp);
					break;
			}
			break;
		case 2:
			printf("\nParalelo\n");
			switch(op1) {
				case 1:
					resp = 1 / (1 / Comp1 + 1 / Comp2);
					printf("Resistores\n%.2f ohms", resp);
					break;
				case 2:
					resp = Comp1 + Comp2;
					printf("Capacitores\n%.2f uF", resp);
					break;
				case 3:
					resp = 1 / (1 / Comp1 + 1 / Comp2);
					printf("Indutores\n%.2f mH", resp);
					break;
			}
	}
}
