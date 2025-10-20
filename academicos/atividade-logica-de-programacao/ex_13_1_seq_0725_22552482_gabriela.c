#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n===================================\n");
	printf("        Pés em Metros                  ");
	printf("\n===================================\n");
	
	float pe, metro;
	
	printf("\nDigite o número de pés desejado:\n");
	scanf("%f", &pe);
	
	metro = pe * 0.3048;
	
	printf("\nResultado em metros: %.4f\n", metro);
	
}
