#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n===================================\n");
	printf("      Área lateral do cilindro    ");
	printf("\n===================================\n");
	
	float r, h, area;
	
	printf("\nDigite o valor do raio\n");
	scanf("%f", &r);
	
	printf("\nAgora digite o valor da altura\n");
	scanf("%f", &h);
	
	area = (2 * 3.14) * (r * h);
	
	printf("\nResultado: %.2f\n", area);
}
