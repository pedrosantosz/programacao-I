#include <stdio.h>
#include <locale.h> // permite o uso do setlocale()

int main(){
	setlocale(LC_ALL, "Portuguese"); // configura o idioma para português e assim da pra usar acentos e outros caracteres
	
	printf("a)\n1. Potenciômetro\n");
	printf("2. Indutor\n");
	printf("3. Transistor");
	
	printf("\n--------------------------------\n");
	printf("b)\n1. Potenciômetro\n2. Indutor\n3.Transistor");
}
