#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n===================================\n");
	printf("        P�s em Metros                  ");
	printf("\n===================================\n");
	
	float pe, metro;
	
	printf("\nDigite o n�mero de p�s desejado:\n");
	scanf("%f", &pe);
	
	metro = pe * 0.3048;
	
	printf("\nResultado em metros: %.4f\n", metro);
	
}
