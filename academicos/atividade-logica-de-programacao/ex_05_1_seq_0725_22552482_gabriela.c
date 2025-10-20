#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n===================================\n");
	printf("Conversão de Fahrenheit para Celsius");
	printf("\n===================================\n");
	
	float C, F;
	
	printf("\nFahrenheit:\n");
	scanf("%f", &F);
	
	C = (F - 32) / 1.8;
	
	printf("\nResultado em Celsius: %.2f", C);
}
