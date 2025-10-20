#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n===================================\n");
	printf(" Comprimento de uma circunferência    ");
	printf("\n===================================\n");
	
	float r, comp;
	
	printf("\nDigite o valor do raio:\n");
	scanf("%f", &r);
	
	comp = 2 * 3.14 * r;
	
	printf("\nResultado: %.2f\n", comp);
	
}
