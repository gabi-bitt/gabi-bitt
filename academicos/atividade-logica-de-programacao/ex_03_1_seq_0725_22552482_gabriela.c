#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float  base, altura, area;
	
	printf("\nDigite o valor da base:\n");
	scanf("%f", &base);
	
	printf("\nDigite o valor da altura:\n");
	scanf("%f", &altura);
	
	area = (base * altura) / 2;
	
	printf("\nO triângulo de base %.2f e altura %.2f tem a área de: %.3f\n", base, altura, area);
	
}
